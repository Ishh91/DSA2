
struct Node
{
    struct Node *lchild;
    struct Node *rchild;
    int data;
    /* data */
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct **Q;
};
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
}
void enqueue(struct Queue *q, Node * x)
{
    if (q->rear == q->size - 1)
        printf("Queue is Full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
Node * dequeue(struct Queue *q)
{
    struct x = NULL;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue q){
    return q.front == q.rear;
}