#include<stdio.h>
void main(){
    int arr[10]={1,2,3,4};
    int n=5;
    int element=8;
    for(int i=n;i>0;i--){
        int arr[i]=arr[i-1];}
        arr[0]=element;
        n++;
    
        printf("new array\n");
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
}