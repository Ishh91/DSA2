#include <stdio.h>
int main()
{
    int lastDuplicate = 0;
    int A[20] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int i, j;
    for (i = 0; i < 10; i++)
    {
        if (A[i] == A[i + 1] && A[i] != lastDuplicate)
        {
            printf("%d\n", A[i]);
            lastDuplicate = A[i];
        }
    }
    for (i = 0; i < 9; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while (A[j] == A[i])
                j++;
            printf("%d is appearing %d times\n", A[i], j - i);
            i = j - 1;
        }
    }
}