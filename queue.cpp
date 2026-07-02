#include<iostream>
#include"queue.h"
using namespace std;
queue::queue():que(nullptr),front(0),rear(0), cap(3)
{

    que=new int[cap];

}

void queue::expand(int val)
{
int *newque=new int[val];
int newfront=0;
int newrear=0;
int newcap=val;
for(int i=0;i<(cap-1);i++)
{
    newque[i]=que[(front+i)%cap];
    newrear++;
}

front=newfront;
cap=newcap;
delete[]que;
que=newque;
rear=newrear;


}

void queue::push(int val)
{
if(((rear+1)%cap)==front)
{
   expand(2*cap);
}
que[rear]=val;
rear=(rear+1)%cap;


}

int queue::pop()
{
    if(front==rear)return -1;

int a=que[front];
front=(front+1)%cap;
return a;
}

int queue::top()
{
    if(front==rear)return -1;
return que[front]; 


}

int queue::gitcap()
{
    return cap;
}

int queue::back()
{
    if(front==rear)return -1;
   return(que[(rear-1)%cap]);
}

bool queue::empty()
{
    if(rear==front)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int queue::size()
{
    if(front == rear)return -1;
    return((rear-front+cap)%cap);
    
}