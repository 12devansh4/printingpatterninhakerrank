// will the address output same 
#include<stdio.h>
void address(int n);
int main(){
    int n=4;
    printf("%p\n",&n);
    address(n);
}
void address(int n){
    printf("%p\n",&n);
}
// address of both n will be different because of copy at other place 
// of memory.