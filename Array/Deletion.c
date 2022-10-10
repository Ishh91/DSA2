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
void Delete(struct Array *arr, int index){
     if(index>=0 && index <= arr->length){
        for (int i = index; i < arr->length-1; i++)
        {
            arr->A[i] = arr->A[i+1];
            /* code */
        }
       
        arr->length--;
        
     }
}
int main(){
    struct Array arr = {{2,5,3,4,6},10,5};
    Delete(&arr,3);
    Display(arr);
   
}