#include<stdio.h>
int fun(int x){
    static int n = 0;
    if(x>0){
        n++;
        return fun(x-1) + n;
    }
    return 0;
}
int main(){
    int a;
    a = fun(5);
    printf("%d",a); 
    return 0;
}