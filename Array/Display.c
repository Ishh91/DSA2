#include<stdio.h>
struct Array
{
    /* data */
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    printf("\nElement are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
            /* code */
    }
    
}
void Append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++] = x;
    }
}
int main(){
    struct Array arr = {{2,5,3,4,6},10,5};
    Append(&arr,10);
    Display(arr);
   
}