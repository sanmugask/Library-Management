#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
void load()
{
    FILE *f,*f1;
    f = fopen("book.txt","r");
    if(f != NULL){
        while(1){
            book *t = malloc(sizeof(book));
            if(t == NULL){
                printf("Memory allocation failed\n");
                return;
            }
            if(fscanf(f,"%d,%49[^,],%49[^,],%d\n",&t->id,t->a,t->m,&t->q) != 4){
                free(t);
                break;
            }
            t->n = h;
            h = t;
        }
        fclose(f);
    }

     f1 = fopen("issued.txt","r");
     if(f1 != NULL){
             while(1){
                     iss *t = malloc(sizeof(iss));
                     if(t == NULL){
                             printf("Memory allocation failed\n");
                             return;
                     }
	 if(fscanf(f1,"%d,%d,%99[^,],%29[^,],%29[^,],%29[^,],%f,%d\n",
                      &t->bid,
                      &t->uid,
                      t->ua,
                      t->isd,
                      t->dd,
                      t->rd,
                      &t->f,
                      &t->re) != 9){
                             free(t);
                             break;
                     }
                     t->n = h1;
                     h1 = t;
             }
             fclose(f1);
     }
     printf("Previous data loaded successfully\n");
}
