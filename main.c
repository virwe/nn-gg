#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main()
{   typedef struct student
    {
        char id[5];
        char name[5];
        char score[5];
    }st1;
    typedef struct node
    {  
        struct student data;
        struct node *next;
    }lnode;
    struct node *p,*p1,*p2,*head,*tail;
     //*head=NULL,*tail=NULL;
    head=(lnode*)malloc(sizeof(lnode));
    p=head;
    p1=(lnode*)malloc(sizeof(lnode));
    p->next=p1;
    while(strcmp(p->data.id,"#")!=0)
    {   
        scanf("%s %s %s",
        (p->data.id),
        (p->data.name),
        (p->data.score));
        p1=(lnode*)malloc(sizeof(lnode));
        p=p->next;
        p->next=p1;
      
    }
    tail=p1;
    FILE *fp;
    fp=fopen("sti.txt","w");
    p=head;
    while(p1!=tail)
    {
        fputs((p->data.id),fp);
        fputc('\b',fp);
        fputs((p->data.name),fp);
        fputc('\b',fp);
        fputs((p->data.score),fp);
        fputc('\n',fp);
        p1=p->next;
        p=p1;
    }
    printf("%s %s %s",p->data.id,p->data.name,p->data.score);
    return 0;
}

