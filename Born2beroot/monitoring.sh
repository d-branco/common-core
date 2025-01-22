#!/bin/bash

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 14:14:12 by abessa-m          #+#    #+#              #
#    Updated: 2025/01/22 19:53:56 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

kernel=$(uname -srm)
cpu=$(grep "physical id" /proc/cpuinfo | sort | uniq | wc -l)
cpu_virtual=$(grep "^processor" /proc/cpuinfo | wc -l)
ram_available=$(free | grep Mem | awk '{print $7}')
ram_percent=$(free | grep Mem | awk '{printf("%.0f"), $3/$2*100}')
storage_available=$(df | grep "^/dev/" | grep -v "/boot$" | awk '{disk_used += $4} END {print disk_used}')
storage_percent=$(df | grep "^/dev/" | grep -v "/boot$" | awk '{disk_used += $5} END {print disk_used}')
cpu_rate=$(top -bn1 | grep "Cpu(s)" | sed "s/.*, *\([0-9.]*\)%* id.*/\1/" | awk '{print 100 - $1"%"}')
last_reboot=$(who -b | grep system | awk '{print $3 " " $4}')
lvm_active=$(if [ $(lsblk | grep lvm | wc -l) -gt 0 ];then echo yes;else echo no;fi)
active_connections=$(ss -t | grep ESTAB | wc -l)
total_users=$(users | wc -w)
hostname=$(hostname -i)
mac=$(ip link show | grep link/ether | awk '{print $2}')
sudo_commands=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall --nobanner "
Architecture and kernel version: $kernel
Number of physical processors:   $cpu
Number of virtual processors:    $cpu_virtual
RAM available:                   $ram_available B ($ram_percent%)
Storage:                         $storage_available B ($storage_percent%)
Processors utilizations rate:    $cpu_rate
Date of last reboot:             $last_reboot
LVM use:                         $lvm_active
Number of active connections:    $active_connections
Number of users:                 $total_users
IPv4 address:                    $hostname
Media Acess Control              $mac
Number of commands with sudo :   $sudo_commands
"
