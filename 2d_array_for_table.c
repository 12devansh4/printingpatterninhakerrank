//create a 2d array , storing the tables of 2 and 3;
#include<stdio.h>
void table(int arr[][10],int n, int m ,int  number );
int main(){
    int arr[2][10];
    table(arr,0,10,2);
     table(arr,1,10,3);

    return 0;
}
void table(int arr[][10], int n ,int m,int  number){
    for(int i=0;i<m;i++){
        printf("%d\n",number*(i+1));
    }
}