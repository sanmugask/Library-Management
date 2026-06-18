#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lms.h"
book *h=NULL;
iss *h1=NULL;
int main(){
  int c,n=1;      
  load();
  while(n) {
   printf("\n------- LIBRARY MANAGEMENT SYSTEM --------");
   printf("\n1. Add Book");
   printf("\n2. Update Book");
   printf("\n3. Remove Book");
   printf("\n4. Search Book");
   printf("\n5. View All Books");
   printf("\n6. Issue Book");
   printf("\n7. Return Book");
   printf("\n8. List Issued Books");
   printf("\n9. Save");
   printf("\n10. Exit");
   printf("\nEnter choice: ");
   scanf("%d",&c);
   switch(c) {
   case 1:
         add();
         break;
    case 2:
          update();
          break;
    case 3:
          rem();
          break;
    case 4:
          search();
          break;
     case 5:
          view();
       break;
case 6:
       issu();
       break;
   case 7:
       ret();
      break;
  case 8:
     lis();
     break;
  case 9:
    save();
    break;
  case 10:
    exit(0);
   default:
    n=0;
    printf("Invalid Choice\n");
    break;
      }
    }
}
                                
