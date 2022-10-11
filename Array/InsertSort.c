#include <stdio.h>
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElement are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void InsertSort(struct Array *arr, int x)
{
    int i=arr->length-1;
    if(arr->length == arr->size)
    {
        return;
    }
    while (arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
    
}
int isSorted(struct Array arr)
{
 int i;
 for(i=0;i<arr.length-1;i++)
 {
 if(arr.A[i]>arr.A[i+1])
 return 0;
 }
 return 1;
}


int main(){
    struct Array arr1 = {{2,3,9,16,28,21,28,32,35},10,9};
    InsertSort(&arr1, 14);
    printf("%d\n",isSorted(arr1));
    Display(arr1);
    return 0;
}