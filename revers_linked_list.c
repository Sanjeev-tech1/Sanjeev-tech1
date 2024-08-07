#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *next;
};

void create(struct node **);
void reversedisplay(struct node *);
void release(struct node **);
void display(struct node *);

int main(){
    struct node *p=NULL;
    struct node_occur *head=NULL;
    int n;

    printf("enter data into the list \n");
    create(&p);
    printf("display the node in the list:\n");
    display(p);
    printf("displaying the list in revesers:\n");
    reversedisplay(p);
    release(&p);

    return 0;
}
void reversedisplay(struct node *head)
{
    if(head!=NULL)
    {
        reversedisplay(head->next);
        printf("%d\t",head->num);
    }
}
void create(struct node **head)
{
    int c,ch;
    struct node *temp, *rear;

    do{
        printf("Enter number :");
        scanf("%d",&c);
        temp=(struct node *) malloc(sizeof(struct node));
        temp->num=c;
        temp->next=NULL;

        if(*head==NULL){
            *head=temp;
        }
        else
        {
            rear->next=temp;
        }
        rear=temp;
        printf("Do you wish to continue[1/0]:");
        scanf("%d",&ch);
    }while(ch!=0);
    printf("\n");
}
void display(struct node *p){
    if(p!=NULL){
        printf("%d",p->num);
       p = p->next;

    }
    printf("\n");
}

void release(struct node **head)
{
    struct node *temp = *head;
    *head=(*head)->next;

    while((head)!=NULL)
    {
        free(temp);
        temp=*head;
        (*head)=(*head)->next;
    }
}