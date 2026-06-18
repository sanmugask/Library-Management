#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
#include<time.h>

int check_late_days(char due_date[], char return_date[]){
    struct tm due = {0}, ret = {0};
    sscanf(due_date,"%d-%d-%d",&due.tm_mday,&due.tm_mon,&due.tm_year);
    sscanf(return_date,"%d-%d-%d",&ret.tm_mday,&ret.tm_mon,&ret.tm_year);
    due.tm_mon -= 1;
    due.tm_year -= 1900;

    ret.tm_mon -= 1;
    ret.tm_year -= 1900;

    time_t due_time = mktime(&due);
    time_t ret_time = mktime(&ret);

    double diff = difftime(ret_time, due_time);

    int late_days = diff / (60 * 60 * 24);

    if(late_days > 0)
        return late_days;
    else
        return 0;
}
void ret(){
        if(h1==NULL){
                printf("there is no issued book\n");
                return;
        }
        iss *p=h1;
        book *z=h;
         int b;
         printf("Enter the user id: ");
         scanf("%d",&b);
         while(p!=NULL){
                if((b==p->uid)){
                        int a;
                        printf("Enter the book id: ");
                        scanf("%d",&a);
                        if(p->bid==a){
                                if(p->re==1){
                                        printf("Book already returned\n");
                                        return;
                                }
                        }
                        else{
                                printf("\nNot found\n");
                                return;
                        }
                        time_t now = time(NULL);
                        struct tm *cur = localtime(&now);
                        strftime(p->rd,sizeof(p->rd),"%d-%m-%Y",cur);
                        int days = check_late_days(p->dd, p->rd);
                        if(days > 0){
                                printf("Book returned %d days late\n", days);
                                p->f = days * 10;
                                printf("Fine: %.2f\n", p->f);
                        }
else{
                                printf("Book returned on time\n");
                        }
                        while(z!=NULL){
                                if(z->id==p->bid){
                                        z->q++;
                                        break;
                                }
                                z=z->n;
                        }
                        p->re=1;
                        printf("Book returned\n");
                        return;
                }
                p=p->n;
         }
         printf("Issued record not found\n");
}
