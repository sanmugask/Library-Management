#ifndef LMS_H
#define LMS_H

typedef struct book{
    int id;
    char a[50];
    char m[50];
    int q;
    struct book *n;
}book;

typedef struct iss {
        int bid;
        int uid;
        char ua[100];
        char isd[30];
        char dd[30];
        char rd[30];
        float f;
        int re;
        struct iss *n;
}iss;


extern book *h;
extern iss *h1;
void add();
void rem();
void view();
void update();
void save();
void search();
void issu();
void ret();
void lis();
void load();

#endif
