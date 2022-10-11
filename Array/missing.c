#include<stdio.h>
int main()
{
    int A[] = {1,2,3,4,5,6,8,9,10,11,12};
    int sum = 0, n;
    n=12;
    int i,s;
    for ( i = 0; i < n-1; i++)
    {
        sum = sum + A[i];
    }
        s=n*(n+1)/2;
        printf("Missing Element is %d\n",s-sum);
    int A2[] = {6,7,8,9,10,11,13,14,15,16,17};
    int diff = 6;
    int j;
    for ( j = 0; j < 11; j++)
    {
        if(A2[j]-j != diff)
        {
            printf("missing element %d\n",j+diff);
            break;
        }
    }
     int A3[] = {6,7,8,9,10,11,13,14,16,17,18};   
     
    int k;
    for ( k = 0; k < 11; k++)
    {
        if(A3[k]-k != diff)
        {
            printf("missing element %d\n",k+diff);
            diff++;
        }
    } 
    int A4[] = {3,7,4,9,12,6,1,11,2,10};
    int H[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int l;
    for ( i = 0; i < 9; i++)
    {
        H[A[i]]++;
    }
    for ( l = 0; l <=12; l++)
    {
        if (H[l] == 0)
        {
            printf("Missing Element is %d\n",l);
        }
        
    }
    
}