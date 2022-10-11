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
void Reverse(struct Array *arr)
{
    int *B;
    int i, j;

    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}
void Reverse2(struct Array *arr)
{
    int i,j;
    for ( i = 0, j = arr->length - 1; i < j; i++, j--)
    {
       swap(&arr->A[i],&arr->A[j]);
    }
    
}

int main()
{
    struct Array arr1 = {{2, 3, 5, 7, 9, 4, 23, 56, 65}, 10, 9};
    Reverse(&arr1);
    Reverse2(&arr1);
    Display(arr1);
    return 0;
}