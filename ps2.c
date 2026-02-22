#include<stdio.h>
void main{
    int i,s[10];
    struct student{
        int id;
        char name[20];
        char course[20];
    }
    printf("enter detail of 10 structure");
    for(i=0;i<10;i++){
       scanf("%d%c%c",&s[i].id,&s[i].name,&s[i.course]);
    }
    printf("student detail are:");
    for(i=0;i<10;i++){
        printf("%d%c%c",s[i].id,s[i].name,s[i].course);
    }

}










     

}