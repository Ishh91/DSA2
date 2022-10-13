#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
    /* data */
};
void create(struct stack *st)
{
    printf("Enter Size: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}
void Display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d\n", st.s[i]);
        /* code */
    }
    printf("\n");
}
void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
int Peek(struct stack *st, int pos)
{
    int x = -1;
    if (st->top - pos + 1 < 0)
    {
        printf("Invalid Position");
    }
    else
    {
        x = st->s[st->top - pos + 1];
    }
    return x;
}
int stackTop(struct stack *st)
{
    if (st->top == -1)
    {
        return -1;
    }
    return st->s[st->top];
}
int isEmpty(struct stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack st)
{

    return st.top == st.size - 1;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 16);
    push(&st, 30);
    printf("%d \n", Peek(&st, 2));
    printf("%d \n", Peek(&st, 3));
    printf("%d \n", pop(&st));
    printf("%d \n", stackTop(&st));
    printf("Display\n");
    Display(st);
    return 0;
}