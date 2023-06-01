#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node_t;

int searchElement(Node_t* head, int element) {
    if (head == NULL) {
        printf("Empty linked list!\n");
        return -1;
    }
    Node_t* temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == element) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

void printLinkedList(Node_t** head) {
    if (*head == NULL) {
        printf("Empty linked list!\n");
    } else {
        Node_t* temp = *head;
        printf("Output: ");
        while (temp != NULL) {
            printf("%d", temp->data);
            if (temp->next != NULL) {
                printf(" <--> ");
            }
            temp = temp->next;
        }
        printf("\n");
    }
}

void printReverse(Node_t** head) {
    if (*head == NULL) {
        printf("Empty linked list!\n");
    } else {
        Node_t* temp = *head;
        printf("Output: ");
        while (temp->next != NULL) {
            temp = temp->next;
        }
        while (temp != NULL) {
            printf("%d", temp->data);
            if (temp->prev != NULL) {
                printf(", ");
            }
            temp =  temp->prev;
        }
        printf("\n");
    }
}

void insertHead(Node_t** head, int data) {
    Node_t* newNode = (Node_t*) malloc(sizeof(Node_t));
    newNode->data = data;
    newNode->next = *head;
    newNode->prev = NULL;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
    printLinkedList(head);
}

void insertMiddle(Node_t **head, int data, int pos) {
    Node_t* newNode = (Node_t*) malloc(sizeof(Node_t));
    newNode->data = data;

    if (pos == 1) {
        newNode->prev = NULL;
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
    } else {
        Node_t* temp = *head;
        int count = 1;
        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position!\n");
            free(newNode);
            return;
        }
        newNode->prev = temp;
        newNode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    printLinkedList(head);
}

void insertEnd(Node_t** head, int data) {
    Node_t* newNode = (Node_t*) malloc(sizeof(Node_t));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
    Node_t* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
    printLinkedList(head);
}

void deleteHead(Node_t** head) {
    if (*head == NULL) {
        printLinkedList(head);
    } else {
        Node_t* del = *head;
        *head = del->next;
        free(del);
        printLinkedList(head);
    }
}

void deleteMiddle(Node_t** head, int data) {
    if (*head == NULL) {
        printLinkedList(head);
    } else if ((*head)->data == data) {
        Node_t* del = *head;
        *head = del->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(del);
        printLinkedList(head);
    } else {
        Node_t* temp = *head;
        while (temp != NULL && temp->data != data) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Cannot find the element!\n");
            return;
        }
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        temp->prev->next = temp->next;
        free(temp);
        printLinkedList(head);
    }
}

void deleteEnd(Node_t** head) {
    if (*head == NULL) {
        printLinkedList(head);
    } else if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        printLinkedList(head);
    } else {
        Node_t* temp = *head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next->next);
        temp->next = NULL;
        printLinkedList(head);
    }
}

int main() {
    Node_t* head = NULL;
    while(1) {
        printf("Please select from the following options for the linked list:\n");
        printf("1. Search for an element\t\t\t");
        printf("2. Insert an element to the head\n");
        printf("3. Insert an element to the middle\t\t");
        printf("4. Insert an element to the end\n");
        printf("5. Delete an element from the head\t\t");
        printf("6. Delete an element from the middle\n");
        printf("7. Delete an element from the end\t\t");
        printf("8. Print all elements in REVERSE order\n");
        printf("9. Exit\n");
        int select;
        scanf("%d", &select);
        switch (select) {
            case 1: {
                int value;
                printf("Please enter the element to be searched: ");
                scanf("%d", &value);
                printf("The position of %d: %d\n", value, searchElement(head, value));
                break;
            }
            case 2: {
                int value;
                printf("Please enter the element to be inserted: ");
                scanf("%d", &value);
                insertHead(&head, value);
                break;
            }
            case 3: {
                int value;
                int pos;
                printf("Please enter the element to be inserted: ");
                scanf("%d", &value);
                printf("Please enter the position of the element to be inserted: ");
                scanf("%d", &pos);
                insertMiddle(&head, value, pos);
                break;
            }
            case 4: {
                int value;
                printf("Please enter the element to be inserted: ");
                scanf("%d", &value);
                insertEnd(&head, value);
                break;
            }
            case 5: {
                deleteHead(&head);
                break;
            }
            case 6: {
                int value;
                printf("Please enter the element to be deleted: ");
                scanf("%d", &value);
                deleteMiddle(&head, value);
                break;
            }
            case 7: {
                deleteEnd(&head);
                break;
            }
            case 8: {
                printReverse(&head);
                break;
            }
            case 9:
                exit(0);
            default:
                printf("Invalid Input!\n");
                break;
        }
    }
}
