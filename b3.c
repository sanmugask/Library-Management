#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"lms.h"
void update(){
        if(h==NULL){
                printf("\nThere is no book in library\n");
                return;
        }
        book *p=h;
        printf("---------Update book---------\n");
        printf("1) By book id\n2)By book name\n3)Back to main menu\n");
        int i;
        printf("Enter the choice: ");
        scanf("%d",&i);
        if(i==1){
           printf("enter the book id: ");
           int l;
           scanf("%d",&l);
           while(p!=NULL){
                        if(p->id==l){
                                printf("enter the name of book: ");
                                scanf(" %[^\n]",p->a);
                                printf("\nUpdate is done\n");
                                return;
                        }
                        else
                                p=p->n;
                }
        }
	else if(i==2){
                printf("enter the book name: ");
                char b[50];
                scanf(" %[^\n]",b);
                int n;
                while(p!=NULL){
                  if(strcmp(b,p->a)==0){
                    printf("\nGive the book id: ");
                       scanf("%d",&n);
                         if(n==p->id){
                           printf("give the book name: ");
                         scanf(" %[^\n]",p->a);
                          printf("\nUpdated is done\n");
                       return;                                                             }
                else
                      p=p->n;
                        }
                        else
                                p=p->n;
                }
        }
        else{
                printf("\n--------go to the main menu--------\n");
                return;
        }
}
