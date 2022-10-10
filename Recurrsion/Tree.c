#include <stdio.h>
int func(int x){
    if(x>0){
        printf("%d\n",x);
        func(x-1);
        func(x-1);
    }
}
void funB(int y);
void funcA(int y){
    if(y>0){
        printf("%d",y);
        funB(y-1);
    }
}
void funB(int y){
    if(y>0){
        printf("%d",y);
        funcA(y-1);
    }
}

int main(){
    int a = 3;
    funcA(a);
} 