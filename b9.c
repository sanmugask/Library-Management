#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
void lis(){
        if(h1==NULL){
                printf("There is no issued book\n");
                return;
        }
        iss *p=h1;
        int c=0;
        printf("\n------------------------------------------------------------------------------------------------\n");
        printf("| %-10s | %-10s | %-20s | %-20s | %-20s | %-20s | %-10s |\n",
           "Book Id","User Id","User Name","Iss-date","Due date","Ret-date","Fine");
        printf("--------------------------------------------------------------------------------------------------\n");
        while(p!=NULL){
                printf("|%-10d |%-10d|%-20s |%-20s |%-20s |%-20s |%-10.2f |\n",p->bid,p->uid,p->ua,p->isd,p->dd,p->rd,p->f);
                c++;
                p=p->n;
        }
        printf("-----------------------------------------------------------------------------------------------\n");
        printf("\nTotal Issued books: %d\n",c);
}
