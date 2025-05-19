//
// Created by Rafal Nowak on 23/04/2022.
//
#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = { 0 };
int front_index = 0;
int rear_index = 0;

int isQueueEmpty(void)
{
    return front_index == rear_index;
}

int isQueueFull(void)
{
    return (rear_index - front_index) == QUEUE_SIZE;
}

int Dequeue(void)
{
    if (!isQueueEmpty())
    {
        int val = queue_table[front_index % QUEUE_SIZE];
        front_index++;
        return val;
    }

    return -1;
}

int Front(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[front_index % QUEUE_SIZE];
    }

    return -1;
}

void Enqueue(int val)
{
    if (!isQueueFull())
    {
        queue_table[rear_index % QUEUE_SIZE] = val;
        rear_index++;
    }
}