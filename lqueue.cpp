#include<iostream>
#include"lqueue.h"
using namespace std;
lqueue::lque::lque()
{
        data=0;
        next=nullptr;
        pre=nullptr;
}

lqueue::lque::lque(int val)
{
    data=val;
    next=nullptr;
    pre=nullptr;

}

 lqueue::lqueue()
{
lque *Lque=new lque;
head=Lque;
tail=Lque;

}

lqueue::~lqueue()
{
    lque *del=head->next;
    head->next=nullptr;
    while(del!=head)
    {
        lque*n=del->next;
        delete del;
        del=n;
    }
    delete head;
    head=nullptr;
}

void lqueue::push(int val)//尾增
{
    tail->next=new lque(val);
    tail->next->pre=tail;
    tail=tail->next;
    tail->next=head;
}

void lqueue::print()
{
    if(head==tail)return;
lque*a=head->next;
    while(a!=head)
    {
        cout<<a->data<<endl;
        a=a->next;
    }
}

int lqueue::pop()
{
    if(tail==head)return -1;
    lque *del=head->next;
    head->next=del->next;
    int a=del->data;
    delete del;
    return a;
}


int lqueue::top()
{
if(head==tail)return -1;
return head->next->data;

}

int lqueue::size()
{
    int s=0;
    lque *a=head;
   while(a->next!=head)
   {
    s++;
    a=a->next;
   }
   return s;
}

bool lqueue::empty()
{
    if(head==tail)
    {
        return true;
    }
    else
    {
        return false;
    }
}