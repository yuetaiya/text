#include<iostream>
#include"priorityqueue.h"
#include<functional>
priorityqueue::priorityqueue(Comp comp)
{
    size=0;
    cap=10;
    que=new int[cap];

    this->comp=comp;
}

priorityqueue::~priorityqueue()
{
delete[]que;
que=nullptr;
}

void priorityqueue::expand()
{
    int *que_=new int[2*cap];
    for(int i=0;i<size;i++)que_[i]=que[i];

    delete[]que;
    que=que_;
    cap*=2;

}

void priorityqueue::up(int size,int val)
{
while(size>0)
{
    int fa=(size-1)/2;
    if(comp(val,que[fa]))
    {
        que[size]=que[fa];
        size=fa;
    }
    else
    {
        break;
    }

}
que[size]=val;

}

void priorityqueue::down(int i,int val)
{
    while(i<(size/2))
    {
       int chioes=i*2+1;
        if((chioes+1)<size&&comp(que[chioes+1],que[chioes]))chioes+=1;
        
    if(comp(que[chioes],val))
    {
      que[i]=que[chioes];
      i=chioes;
    }
    else
    {
        break;
    }
    }
    que[i]=val;
}

void priorityqueue::push(int val)
{
    if(size==cap)expand();

 if(size==0)
{
    que[size]=val;
}
else
{
    up(size,val);
}
size++;
}

int priorityqueue::pop()
{
 if(size==0)throw "container is empty";
 size--;
 int tem=que[size];
 if(size>0)
 {
    down(0,que[size]);
 }
 return tem;

}

bool priorityqueue::empty(){return size==0;}

int priorityqueue::top()
{
    if(size==0)
    throw "数组为空";
    return que[0];
}

