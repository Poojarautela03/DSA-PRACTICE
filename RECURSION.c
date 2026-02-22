//function
/*#include <stdio.h>
//fn declaration: prototype 
 void printhello();

 //fn call
 int main(){
     printhello();
     printhello();
     return 0;
 } 

 //fn defn
 void printhello(){
    printf("hello world!\n");
 }
*/

//2 fn-to print hello and second to print goodbye
/*#include <stdio.h>
void hello();
void goodbye();

int main(){
    hello();
    goodbye();
    return 0;
}
 
void hello(){
    printf("hello\n");
}
void goodbye(){
    printf("goodbye\n");
}*/

//print namaste if user is indian and bonjour if user is french
#include <stdio.h>
/*void namaste();
void bonjour();

int main(){
    char ch;
    printf("enter i for indian and f for french");
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("namaste");
}
void bonjour(){
    printf("bonjour");
}*/

//to sum
/*#include <stdio.h>
int sum(inta,intb);
int main(){
    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    printf("sum %d",sum(a,b));
return 0;
}
int sum(int x,int y){
    return x+y;
}*/

//to print table
/*#include <stdio.h>
void printtable(int n);
int main(){
    int n;
    printf("enter no");
    scanf("%d",&n);
    printtable(n);
    return 0;

}
 
void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("table of n %d\n",n*i);   
    }
}*/

//change to parameter in fn dont change values in calling fn
/*#include <stdio.h>
void calculateprice(float value);
int main(){
    float value=100.00;
    calculateprice(value);
    printf("value:%f\n",value);
    return 0;
}
void calculateprice(float value){
    value=value+(0.18*value);
    printf("final price :%f \n",value);
}*/
 
//sq of no.
/*#include <stdio.h>
#include <math.h>
int main(){
    int n=4;
    printf("%f",pow(n,2));
    return 0;
}*/

//calculate area of rectangle circle sq
/*#include <stdio.h>
float sqarea(float side);
float rectanglearea (float a,float b);
float circle(float radius);

int main(){
    float a,b,side,radius;
    printf("a,b,side,radius");
    scanf("%f %f %f %f",&a,&b,&side,&radius);
    printf("area of sq %f", sqarea(side));
    printf("areaof rectangle %f", rectanglearea(a, uytdfxzb));
    printf("area of circle %f",circle(radius));
    return 0;

}

float sqarea(float side){
       return side*side;
}
float rectanglearea(float a,float b){
    return a*b;
}
float circle(float radius){
    return 3.14*radius*radius;
}*/                                          

//recursion -- when a fn calls itself
/*#include <stdio.h>
void printhw(int count);
int main(){
    printhw(10);
    return 0;
}
 
void printhw(int count){
    if(count==0){
        return;
    }
    printf("hello world \n");
    printhw(count-1);
}*/

//math recursion
/*#include <stdio.h>
int sum(int n);
int main(){
    printf("sum is %d",sum(5));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumnm1=sum(n-1);
    int sumn = sumnm1 + n;
    return sumn;
}
*/

//factorial
/*#include <stdio.h>
int fact(int n);
int main()
{
    printf("factorial is %d",fact(4));
    return 0;
}
 
int fact(int n){
    if(n==0){
        return 1;
    }
    int factnm1=fact(n-1);
    int factn=factnm1*n;
    return factn;
}*/

//convert celsius and farenheit 
/*#include <stdio.h>
float converttemp(float celsius);
int main(){
    float celsius;
    printf("enter celsius");
    scanf("%f",&celsius);
    printf("temp in f %f",converttemp(celsius));
return 0;
}
float converttemp(float celsius){
    int f=(celsius*(9.0/5.0))+32;
    return f;
}*/

//calc percentage
#include <stdio.h>
int calcpercentage(int a,int b,int c,int d);
int main(){
    int a=45;
    int b=89;
    int c=90;
    int d=89;
    printf("percentage is %d",calcpercentage(a,b,c,d));
    return 0;
}

int calcpercentage(int a,int b,int c,int d){
    int sum =a+b+c+d;
    int perc=sum/4;
    return perc;
}