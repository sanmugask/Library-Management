#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"

void add(){
     book **p=&h;
     book *t=malloc(sizeof(book));
     if(t==NULL){
         printf("The memory is created\n");
         return;
     }
     printf("\n---------ADD THE BOOK IN LIBRARY---------\n");
     printf("Enter the book id: ");
     scanf("%d",&t->id);
     printf("Enter the book title: ");
     scanf(" %[^\n]",t->a);
     printf("Enter the book author: ");
     scanf(" %[^\n]",t->m);
     printf("Enter the book quantity: ");
     scanf("%d",&t->q);
     t->n=*p;
     *p=t;
      printf("\n----------BOOK ADDED SUCCESSFULLY------------\n");
}
