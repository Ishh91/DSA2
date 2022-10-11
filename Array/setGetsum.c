#include<stdio.h>
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
    for(int i=0;i<arr.length;i++)
    {
        printf("%d\n", arr.A[i]);
    }
}
int Get(struct Array arr, int index)
{
    if (index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
    
}
void Set(struct Array *arr, int index, int x)
{
    if (index>=0 && index<arr->length)
    {
        arr->A[index] = x;
    }
}
int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;

}
int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;

}
int Sum(struct Array arr){
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}
int main()
{
    struct Array arr1 = {{2,3,5,7,9,4,23,56,65},10,9};
    printf("%d\n",Get(arr1,4));
    printf("%d\n",Max(arr1));
    printf("%d\n",Min(arr1));
    printf("%d\n",Sum(arr1));
   Set(&arr1,5, 17);
    Display(arr1);
    return 0;
}