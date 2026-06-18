#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
void view(){
        if(h==NULL){
                printf("\nThere is no book in library\n");
                return;
        }
        book *t=h;
        int c=0;
        printf("\n---------------------------------------------------------\n");
        printf("| %-10s | %-20s | %-20s | %-8s |\n",
           "Book ID","Book Name","Author","Quantity");
        printf("------------------------------------------------------------\n");
        while(t!=NULL){
                printf("|%-10d |%-20s |%-20s |%-8d |\n",t->id,t->a,t->m,t->q);
                c++;
                t=t->n;
        }
        printf("--------------------------------------------------------------\n");
        printf("\nTotal books: %d\n",c);
}
