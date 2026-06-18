#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"lms.h"
void issu(){
        if(h==NULL){
                printf("No book in library\n");
                return;
        }
        book *p=h;
        printf("Enter the book id: ");
        int b;
        scanf("%d",&b);
        while(p!=NULL){
                if(p->id==b){
                        if((p->q)>0)
                                break;
                        else{
                                printf("book is out of stock\n");
                                return;
                        }
                }
                p=p->n;
        }
        if(p==NULL){
                printf("Book not found\n");
                return;
        }
        iss *t=malloc(sizeof(iss));
        if(t==NULL){
                printf("\nthe memory is not open\n");
                return;
        }
	 t->bid=p->id;
        printf("Enter the User id: ");
        scanf("%d",&t->uid);
        printf("Enter the user name: ");
        scanf(" %[^\n]",t->ua);
        time_t now = time(NULL);
        struct tm *current = localtime(&now);
        strftime(t->isd, sizeof(t->isd), "%d-%m-%Y", current);
        time_t due = now + (7 * 24 * 60 * 60);
        struct tm *due_date = localtime(&due);
        strftime(t->dd, sizeof(t->dd), "%d-%m-%Y", due_date);
        strcpy(t->rd, "Not Returned");
        p->q=p->q-1;
        t->n=h1;
        h1=t;
}

