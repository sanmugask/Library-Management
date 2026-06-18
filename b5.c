#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#include"lms.h"
void search(){
        if(h==NULL){
                printf("\nThere is no book in library\n");
                return;
        }
        book *p=h;
        printf("\n---------- Search the book ------------\n");
        printf("1) By book id\n2) By book name\n3) By author name\n4) to main menu\n");
        printf("Enter the choice: ");
        int i;
        scanf("%d",&i);
        if(i==1){
                int k,f=0;
                printf("enter the book id: ");
                scanf("%d",&k);
                while(p!=NULL){
                        if(p->id==k){
                                f=1;
                                printf("find the book by id\n");
                                printf("%d\t%s\t%s\t%d\n",p->id,p->a,p->m,p->q);
                                return;
                        }
                        p=p->n;
                        }
                if(f==0){
                        printf("\nBook not found\n");
                        return;
                }
        }
	 else if(i==2){
                int f=0;
                char b[50];
                printf("enter the book title: ");
                scanf(" %[^\n]",b);
                while(p!=NULL){
                        if(strcmp(p->a,b)==0){
                                f=1;
                                printf("find the book by book name\n");
                                printf("%d\t%s\t%s\t%d\n",p->id,p->a,p->m,p->q);
                        }
                                p=p->n;
                }
                if(f==0){
                        printf("\nBook is not found\n");
                        return;
                }
        }
        else if(i==3){
                int f=0;
                char b[50];
                printf("enter the author name: ");
                scanf(" %[^\n]",b);
                while(p!=NULL){
                        if(strcmp(p->m,b)==0){
                                f=1;
                                printf("find the book by author name\n");
                                printf("%d\t%s\t%s\t%d\n",p->id,p->a,p->m,p->q);
                        }
                        p=p->n;
                     }
                if(f==0){
                        printf("Book is not found\n");
                        return;
                }
        }
	 else{
                printf("\n------------ Return to main menu ---------\n");
                return;
        }
}
