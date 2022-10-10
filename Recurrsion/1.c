#include <stdio.h>
int func(int x){
    if(x>0){
        printf("%d\n",x);
        func(x-1);
    }
}
int main(){
    int a = 3;
    func(a);
}