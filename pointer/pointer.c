/*#include <stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d",_age);
    return 0;

}*/

/*#include <stdio.h>
int main(){
    int *ptr;
    int x;
    ptr =&x;
    *ptr = 0;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    *ptr +=5;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    (*ptr)++;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr);
    return 0;
}*/

//call by value
/*#include <stdio.h>
void sq(int n);
int main(){
    int n=4;
    sq( n);
printf("%d\n",n);
}
void sq(int n){
    int s=n*n;
    printf("square of %d is %d",n,s);
}*/

//call by reference
//we pass address of variable as argument
/*#include <stdio.h>
void sq(int n);
void _sqq(int *n);
int main(){
    int n=4;
    sq( n);
   printf("%d\n",n);
   _sqq(&n);
    printf("number =%d\n",n);
return 0;
}
void sq(int n){
    int s=n*n;
    printf("square of %d is %d\n",n,s);
}
void _sqq(int *n){
    *n=(*n)*(*n);
    printf("sq  %d \n",*n);
}*/

/*#include <stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main(){
int a=2;
int b=4;
printf("original no:%d,%d \n",a,b);
swap(a,b);
_swap(&a,&b);
printf("orignal no:%d,%d\n",a,b);
}
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    printf("swapped num %d,%d \n",a,b);
}
void _swap(int *a,int *b){
     int c=*a;
     *a=*b;
     *b=c;

}*/

//sum product avg 2no
#include <stdio.h>
void work(int *a,int *b);

int main(){
    int a=3, b=5;
    work(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}
void work(int *a,int *b){
    int sum= *a+*b;
    int pdt = *a*(*b);
    int avg=(*a+*b)/2;
    printf("sum=%d, pdt=%d,avg=%d\n",sum,pdt,avg);
}
