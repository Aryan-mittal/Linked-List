#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stu{

             int data;
             struct stu *next;
             };
void printlist(struct stu *n)
{
    while(n!=NULL)
    {
        printf("\n%d", n->data);
        n=n->next;
    }
}
int main()
{
    int num;
    struct stu *START=NULL, *ptr, *preptr;
    struct stu *temp, *t,*s,*y, *n,*l, *a;
    temp=(struct stu *)malloc(sizeof(struct stu));
     t=(struct stu *)malloc(sizeof(struct stu));
     s=(struct stu *)malloc(sizeof(struct stu));
     y=(struct stu *)malloc(sizeof(struct stu));
    printf("\n Enter the data : ");
    scanf("\n%d", &temp->data);
    temp->next=t;
    START=temp;
    printf("\n Enter the data: ");
    scanf("\n%d", &t->data);
    t->next=y;
    temp=t;
    printf("\n Enter the data: ");
    scanf("\n%d", &y->data);
    y->next=s;
    t=y;
    printf("\n Enter the data: ");
    scanf("\n%d", &s->data);
    s->next=NULL;
    y=s;
    printlist(START);


    printf("\nInserting a new node at the beginning of the list: ");
    n=(struct stu *)malloc(sizeof(struct stu));
    printf("\n Enter the data : ");
    scanf("\n %d", &n->data);
    n->next=START;
    START=n;
    printlist(START);

    ptr=START;
    printf("\n Inserting a new node at the end of the list: ");
    l=(struct stu *)malloc(sizeof(struct stu));
    printf("\n Enter the data : ");
    scanf("\n %d", &l->data);
    l->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->next==NULL)
    {
        ptr->next=l;
        ptr=l;
    }
    printlist(START);
    ptr=START;
    preptr=ptr;
    printf("\n Inserting a new node after the given node which has value num : ");
    a=(struct stu *)malloc(sizeof(struct stu));
    printf("\n Enter the data: ");
    scanf("\n%d", &a->data);
    printf("\n Enter the value you want to add a new node after it : ");
    scanf("\n%d", &num);
    while(preptr->data!=num)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    if(preptr->data==num)
    {
        preptr->next=a;
        a->next=ptr;
        a=preptr;
        ptr=a;
    }

     printlist(START);



}
