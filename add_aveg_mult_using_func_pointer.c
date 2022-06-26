//write a function to calculate the sum, product & average of 2 number
// print that average in the main function
#include<stdio.h>
void doing(int a,int b,int *sum, int *prod, int *avg);
int main(){
    int a=4,b=6,sum,prod,avg;
    doing(a,b,&sum,&prod,&avg);
    printf("sum=%d,prod=%d,avg=%d",sum,prod,avg);
    return 0;
}
void doing(int a,int b,int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
    
}
