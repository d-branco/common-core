/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:42:20 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/08 17:59:13 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the list
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to delete a node with a specific value
struct Node* deleteNode(struct Node* head, int data) {
    if (head == NULL) {
        return NULL;
    }
    if (head->data == data) {
        struct Node* temp = head->next;
        free(head);
        return temp;
    }
    struct Node* current = head;
    while (current->next != NULL && current->next->data != data) {
        current = current->next;
    }
    if (current->next != NULL) {
        struct Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    printf("List at the beginning: ");
    printList(head);

    // Insert nodes at the beginning
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 1);
    head = insertAtBeginning(head, 2);

    printf("List after inserting 3, 1 and 2 at the beginning: ");
    printList(head);

    // Insert nodes at the end
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);

    printf("List after inserting 4 and 5 at the end: ");
    printList(head);

    // Delete a node
    head = deleteNode(head, 3);

    printf("List after deleting node with value 3: ");
    printList(head);

    return 0;
}
