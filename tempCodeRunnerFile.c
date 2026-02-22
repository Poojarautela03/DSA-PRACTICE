g;
    dowork(a,b,&sum,&pdt,&avg);
    printf("sum=%d, pdt=%d,avg=%d\n,sum,pdt,avg");
    return 0;
}
void work(int a,int b,int *sum,int *pdt,int *avg){
    *sum=a+b;