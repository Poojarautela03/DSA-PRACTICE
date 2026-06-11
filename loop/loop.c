//to print hello world 100 times
/*#include <stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        printf("hello world \n ");
    }
    return 0;
}*/

//to print no. from 10 to 100
/*#include <stdio.h>
int main(){
    for(int i=10;i<=100;i++){
        printf("%d \n",i);
    }
    return 0;
}*/

/*//reverse order
#include <stdio.h>
int main(){
    for(int i=10;i>=1;i--){
        printf("%d \n",i);
    }
    return 0;
}*/

//print no 0 to 10
/*#include <stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        printf("%d \n",i);
    }
    return 0;
}*/

//i++ use then inc
//++i increase then use
/*#include <stdio.h>
int main(){
    int i=1;
    printf("%d \n",i++);
    printf("%d\n",i);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i=1;
    printf("%d \n",++i);
    printf("%d\n",i);
    return 0;
}*/

//i-- --i
/*#include <stdio.h>
int main(){
    int i=1;
    printf("%d \n",i--);
    printf("%d\n",i);
    return 0;
}*/

//loop counter can be float or even character
/*#include <stdio.h>
int main(){
    for(float i=1.0;i<=5.0;i++){
        printf("%f\n",i);
    }
    return 0;
}*/

//infinite loop 
//#include <stdio.h>
/*int main(){
    for(int i=0;;i++){
        printf("%d \n",i);
    }
    return 0;
}*/

// while loop
/*#include <stdio.h>
int main(){
    int i=1;
    while(i<=5){
        printf("hello world\n");
        i++;
    }
}*/

// 0 to n
/*#include <stdio.h>
int main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}*/
 
//do while
/*#include <stdio.h>
int main(){
    int i=1;
do{printf("%d \n",i);
   i++;
}while(i<=5);
return 0;
}*/

//sum of first n naturL NO.S AND PRINT THEM IN REVERSE ORDER
/*#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter n:");
    scanf("%d \n",&n);
    for(int i=1,j=n;i<=n & j>=1;i++,j--){
        printf("%d \n",j);
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter n:");
    scanf("%d \n",&n);
    for(int i=1;i<=n;i++){
        sum= sum +i;
    }
    printf("sum: %d",sum);
    for (int i=n;i>=1;i--){
        printf("%d \n",i);
    }
        return 0;
}*/


/*#include <stdio.h>
int main(){
    int n;
    printf("enter no.");
    scanf("%d",&n);
    int sum=0;
    for(int i=n;i>=1;i--){
        printf(" %d \n",i);
        sum=sum+i;
    }
    printf("sum:%d \n",sum);
    return 0;
}*/

//table 
/*#include <stdio.h>
    int main(){
        int n;
        printf("enter n \n");
        scanf("%d",&n);
        for(int i=1;i<=10;i++){
            printf(" %d \n",n*i);
        }
        return 0;
    }
*/

//break fn use
/*#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d",i);
    }
    printf("end");
    return 0;
}
*/
/*#include <stdio.h>
int main(){
    int n;
    do{
        printf("n");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%2!=0){
            break;
        }
      }  while(1);
    printf("thanku");
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n;
    do{
        printf("n");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%7==0){
            break;
        }
       }   while(1);
        printf("thanku \n");
     return 0;
}*/

//continue statement
/*#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}*/

//all odd no from 5 to 50
/*#include <stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d \n",i );
    }
    return 0;
}*/

//alternate method for above program
/*#include <stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i%2!=0){
            printf("%d \n",i);
        }
    }
    return 0;
}*/

//print factorial of number n
/*#include <stdio.h>
int main(){
    int n;
    int mul=1;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        mul=mul*i;
    }
    printf("%d",mul);
    return 0;
}*/

//while
/*#include <stdio.h>
    int main(){
        int n;
        int fact=1;
        printf("n \n");
        scanf("%d", &n);
        int i=1;
        while(i<=n){
            fact=fact*i;
            i++;
        }
        printf("%d",fact);
        return 0;
    }   */

//#include <stdio.h>
/*int main(){
    int n;
    int fact=1;
    int i=1;
    printf("n");
    scanf("%d",&n);
    do{
        fact=fact*i;
        i++;
    }while(i<=n);
    printf("fact %d",fact);
    return 0;
}*/

//revrse of table of n no
/*#include <stdio.h>
int main(){
    int n;
    printf("n");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d \n",n*i);
    }
    return 0;
}
*/

//sum from 5 to 50
/*#include <stdio.h>
int main(){
    int sum=0;
    for(int i=5;i<=50;i++){
        sum+=i;
    }
    printf("sum %d",sum);
    return 0;
}*/

//Write a program to check if a number is prime or not.
#include <stdio.h>
int main(){
    int 
}






