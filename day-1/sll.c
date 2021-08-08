5.CREATE A LIST WITH 3 NODES HAVING INT DATA IN SINGLE LINKED LIST DATA: 100,200,300

#include<stdio.h>
#include<stdlib.h>
typedef struct sll
{
    int data;
    struct sll *link;
}node;
 node *first=NULL;
 node *last=NULL;
 
 void create(int ele)
 {
     node *ptr=(node*)malloc(sizeof(node)); //creating a node
     ptr->data=ele;
     ptr->link=NULL;
     if (first==NULL)
     {
         first=ptr;
         last=ptr;
     }
     else
     {
         last->link=ptr;
         last=ptr;
         
     }
 }
void dispaly()
{
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}

int main()
{
    create(100);
    create(200);
    create(300);
    dispaly(); // displaying of all values
    
}

