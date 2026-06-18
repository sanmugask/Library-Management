#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
void rem(){
        if(h==NULL){
                printf("\nThere is no book in lib\n");
                return;
        }
        book *p=h;
        book *pr=NULL;
        printf("\n-------- Remove the book ---------\n");
        printf("1) By book id\n2) By book name\n3) to main menu\n");
        printf("Enter your choice: ");
        int i;
        scanf("%d",&i);
        if(i==1){
                int l;
                printf("enter the book id: ");
                scanf("%d",&l);
                while(p!=NULL){
                        if(p->id==l){
                                if(pr==NULL)
                                        h=p->n;
                                else
                                        pr->n=p->n;
                                free(p);
                                return;
                        }
                                pr=p;
                                p=p->n;
                        }
                }
	else if(i==2){
                char b[50];
                printf("enter the book title: ");
                scanf(" %[^\n]",b);
                while(p!=NULL){
                        if(strcmp(p->a,b)==0){
                                book *t=p;
                                if(pr==NULL){
                                        h=p->n;
                                        p=h;
                                }
                                else{
                                        pr->n=p->n;
                                        p=p->n;
                                }
                                free(t);
                        }
                        else{
                                pr=p;
                                p=p->n;
                        }
                }
        }
        else{
                printf("\n------- to main menu ----------\n");
                return;
        }
}
