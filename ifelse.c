/*#include <stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>18){
        printf("adult\n");
        printf("eligible for vote\n");
    }
    else{
        printf("not adult \n");
    }
    printf("thank you \n");
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>=18){
        printf("adult");
    }
    else if(age>13 && age<18){
        printf("teenager");
    }
    else{
        printf("child");
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    age>=18?printf("adult\n"):printf("not adult\n");
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int day;
    printf("enter day");
    scanf("%d",&day);
    switch(day){
        case 1 :printf("monday\n");
              break;
        case 2 :printf("tuesday\n");
              break;
        case 3 :printf("wednesday\n");
              break;
        case 4 :printf("thursday\n");
              break;
        case 5 :printf("friday\n");
              break;
        case 6:printf("saturday\n");
              break;
        case 7:printf("sunday\n");
              break;
        default:printf("not a valid day\n");
        }
        return 0;
        
 }*/
 /*#include <stdio.h>
 int main(){
    int num;
    printf("enter no.");
    scanf("%d",&num);
    if(num>=0){
        printf("positive\n");
        if(num%2==0){
            printf("even\n");}
            else{
                printf("odd\n");
            }
        }
    else{
        printf("neg\n");
    }
    return 0;
        
    
 }*/
 /*#include <stdio.h>
 int main(){
    int marks;
    printf("marks:");
    scanf("%d",&marks);
    if(marks>=30){
       printf("pass\n");
    }
    else{
        printf("fail\n");
    }
    return 0;
 }*/

/* #include <stdio.h>
 int main(){
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>=0 && marks<=30){
        printf("fail\n");
    }
    elseif(marks>=30 && marks<=100){
        printf("pass\n");
    }
    else{
        printf("not valid");
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks<30){
        printf("c");
    }
    else if(marks>=30 && marks<70){
          printf("b");
    }
    else if(marks>=70 && marks<90){
          printf("a");
    }
    else{
        printf("a+");
    }
    return 0;
}*/


//imp question
/*#include <stdio.h>
int main(){
    int x=2;
    if(x=0){
        printf("xis equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }
}*/

/*#include <stdio.h>
int main(){
    char ch;
    printf("enter ch");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("LOWERCASE");
    }
    else if(ch>='A' && ch<='Z') {
        printf("UPPERCASE");
    }
    else {
        printf("not a letter ");
    }
    return 0;
}*/

//Write a program to check if given character is digit or not
/*#include <stdio.h>
int main(){
    char ch;
    printf("enter ch");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("digit");
    }
    else{
        printf("not digit");
    }
    return 0;

}*/

// Write a program to print the smallest number of two
#include <stdio.h>
int main(){
    int a,b;
    printf("no a and b");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("b is smallest");
    }
    else{
        printf("a is smallest");
    }
    return 0;
}

