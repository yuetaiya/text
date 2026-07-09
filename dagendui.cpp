#include<iostream>
#include"dagendui.h"
using namespace std;
dagendui::dagendui()
{
    this->data=nullptr;
   data=new int[5];
   capacity=5;
    this->size=0;
}

dagendui::~dagendui()
{
    delete[] data;
}

void dagendui::expand()
{
    int* newdata=new int[2*capacity];
    for(int i=0;i<size;i++)
    {
        newdata[i]=data[i];
    }
    delete[]data;
    data=newdata;
    capacity*=2;
}
void dagendui::up()
{
    if(size==0)return;
    int i=size-1;
     int tem=data[i];
    
     while(i>0)
     {
        if(tem>data[(i-1)/2])
        {
            data[i]=data[(i-1)/2];
            i=(i-1)/2;
        }
        else
        {
        break;
        }
     }
    data[i]=tem;
}

void dagendui::down()
{
  if(size==0)return;
  int tem=data[0];
 
  int n=(size-1)/2;
  
  int i=0;
  while(i<=n)
  {
int p=-1;
   if(i*2+2<size) p=data[i*2+1]>data[i*2+2]?(i*2+1):(i*2+2);
   else p=i*2+1;
   if(data[p]>tem)
   {
    data[i]=data[p];
    i=p;
   }
   else
   {
    break;
   }
  }
  data[i]=tem;

}

void dagendui::push(int val)
{
     if(size==capacity)expand();
     data[size]=val;
     size++;
     up();
}

int dagendui::pop()
{
    int a=data[0];
   data[0]=data[size-1];
   size--;
   down();
   return a;
}

void dagendui::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

bool dagendui::empty()
{

    return size==0;

}

int dagendui::top()
{
    if(size==0)return -1;
 return data[0];
}


void dagendui::sort()
{
int i=0;



}