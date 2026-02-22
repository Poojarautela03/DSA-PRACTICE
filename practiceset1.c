/*#include <stdio.h>
int main(){
    int i=1;
    while(i<11){
        printf("%d \n",i);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=1;
    while(i<11){
        printf("%d\n",i*2);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=1;
    int n;
    printf("enter no:");
    scanf("%d",&n);
    while(i<11){
        printf("%d\n",i*n);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=1;
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<21);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=0;
    do{
      if(i%2==0){
        printf("%d \n",i);
      }
      i++;
    }
    while(i<21);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=0;
    while(i<21){
        if(i%2==0){
            printf("%d \n",i);
        }
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=1;
    do{
        printf("sq %d \n",i*i);
        printf("cube %d \n",i*i*i);
        i++;
    }while(i<21);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i=1;
    while(i<21){
        printf("sq %d \n",i*i);
        printf("cube %d \n",i*i*i);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
     int i,n;
     printf("enter no");
     scanf("%d",&n);
     if(n%2==0){
        printf("even");
        int i=n;
        while(i<31){
            printf("%d \n",i);
            i=i+2;
        }
    }
        else{
            printf("odd");
        }
    return 0;  
}*/

/*#include <stdio.h>
int main(){
    int sum=0;
    for(int i;i<11;i++){
        sum=sum+i;
    }
    printf("sum %d \n",sum);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            printf("*");
        }
        printf("\n");
    }
     return 0;
}*/

/*#include <stdio.h>
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if(i>1 && i<4 && j>1 && j<4){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}*/
 
//print h
/*#include <stdio.h>
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if((i<2 || i>=3) && (j>1 && j<4)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
}
return 0;
}*/

//to print p
/*#include <stdio.h>
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<4;j++){
            if((i==2  && j==2) || (i==4 && j>1)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
}
return 0;
}*/

//to print i
/*#include <stdio.h>
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<6;j++){
            if((i==2 ||i==3) && (j<3 ||j>3)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
}
return 0;
}*/

/*#include <stdio.h>
void main(){
    int row=4;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
           printf(" ");
        }
           for(int k=1;k<=row;k++){
            printf("*");
           }
        
        printf("\n");
    }
}*/

/*#include <stdio.h>
void main(){
     for(int i=1;i<=4;i++){
        for(int j=1;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}*/

/*#include <stdio.h>
void main(){
     for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k=1;k<i+1;k++){
            printf("*");
        }
        printf("\n");
     }
}*/

/*#include <stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=5-i;k++){
            printf("*");
        }
        printf("\n");
    }
}*/

/*#include <stdio.h>
void main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    do{
        if(n%2==0){
            printf("even");
            printf("%d\n",n);
            n=n+2;}
            else{
                printf("odd \n");
            }
        }
        while(n<=30);
    }*/

#include <stdio.h>
void main(){
    int r,i,j,k;
    printf("enter row:\n");
    scanf("%d",&r);
    for(i=1;i<=r;r++){
        for(j=1;j<=r-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=r;i>=1;i--){
        for(j=1;j<=r-i; j++)
        {
         printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}

