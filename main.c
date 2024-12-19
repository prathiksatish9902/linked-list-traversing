#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *newnode;
struct node *temp;
//head = 0;
int choice =1 ;
struct node* createNode(struct node * head){
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == 0)
        {
            printf("Memory allocation failed\n");
            return ;
        }
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue (0,1)?");
        scanf("%d",&choice);
    }
    return head;
}
struct node* printValue(struct node* head){
    if (head == NULL){
        printf("empty list");
    }
    else{
        struct node* temp = NULL;
        temp = head;

        while(temp!=NULL){
            printf("%d",temp->data);
            temp = temp->next;
        }
    }
    return head;
}

int display(struct node * head,int count){
    struct node *temp;
    temp = head;
    while(temp != 0)
    {
        printf("%d",temp->data);
        temp = temp->next;
        ++count;
    }
    printf("\ncount = %d",count);
    return count;
}
int main()
{
    struct node *head = 0;
    int choice =1,option = 1 ;
    int count = 0;
    while(choice)
    {
        printf("\n1.create node\n");
        printf("2.print value\n");
        printf("3.Display\n");
        printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d",&option);
        switch(option){
        case 1 :
            head = createNode(head);
            break;
        case 2:
            head = printValue(head);
            break;
        case 3:
            count = display(head,count);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}
