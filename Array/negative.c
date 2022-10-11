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
void Negative(struct Array *arr)
{
    int i= 0;
    int j = arr->length-1;
    while (i<j)
    {
        while(arr->A[i]<0)
            i++;
        while(arr->A[i]>= 0)
            j--;
    if (i<j)
        {
            swap(&arr->A[i],&arr->A[j]);
        }
        
    }
    


}
int main(){
    struct Array arr1 = {{-6,3,-8,10,5,-7,-9,12,-4,2},3,5};
    Negative(&arr1);
    Display(arr1);
    return 0;
}