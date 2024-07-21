#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * prev;
    struct Node * next;

};

void linkedListTraversalprev(struct Node *ptr){
    {
        while (ptr != NULL){
            printf("Element: %d\n", ptr->data);
            ptr = ptr->prev;
        }
    }
}

void linkedListTraversalnext(struct Node *ptr){
    {
        while (ptr != NULL){
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}


int main ()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->prev = NULL;
    head->next = second;

    second->data = 8;
    second->prev = head;
    second->next = third;

    third->data = 9;
    third->prev = second;
    third->next = fourth;

    fourth->data = 10;
    fourth->prev = third;
    fourth->next = NULL;

    linkedListTraversalprev(fourth);
    linkedListTraversalnext(head);
    return 0;


}