#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
void save(){
        if(h==NULL){
                printf("there is no book in lib\n");
                return;
        }
        FILE *f,*f1;
        f=fopen("book.txt","w");
        if(f==NULL){
                printf("file is not open\n");
                return;
        }
        book *p=h;
        while(p!=NULL){
                fprintf(f,"%d,%s,%s,%d\n",p->id,p->a,p->m,p->q);
                p=p->n;
        }
        fclose(f);
        printf("\nThe Book data is saved\n");

        f1=fopen("issued.txt","w");
        if(f1==NULL){
                printf("the f1 is not open\n");
                return;
        }
        iss *a=h1;
        while(a!=NULL){
                fprintf(f1,"%d,%d,%s,%s,%s,%s,%.2f,%d\n",a->bid,a->uid,a->ua,a->isd,a->dd,a->rd,a->f,a->re);
                a=a->n;
        }
        fclose(f1);
        printf("\nThe Issued book data is saved\n");
}
