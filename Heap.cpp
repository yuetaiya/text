#include<iostream>
#include"Heap.h"
using namespace std;
void Heap::up(int idx)
{

  for(int i=idx;i>0;)
  {
    if(heap[(i-1)/2]<heap[i])
    {
        swap(heap[(i-1)/2],heap[i]);
        i=(i-1)/2;
    }
    else
    {
        return;
    }
  }
 
}

void Heap::down(int idx)
{
    int n=heap.size();
    while(true)
  {
   int left=idx*2+1;
   int right=idx*2+2;
   int max=idx;
   if(left<n&&heap[left]>heap[max])
   {
    max=idx*2+1;
   }
   if(right<n&&heap[right]>heap[max])
   {
    max=idx*2+2;
   }

   if(idx==max)break;

   swap(heap[max],heap[idx]);
   idx=max;

  }
} 

void Heap::push(int val)
{
 heap.push_back(val);
 up(heap.size()-1);


}

void Heap::pop()
{
    if(heap.empty())return;
    swap(heap[0],heap.back());
    heap.pop_back();
    if(!heap.empty())down(0);
}

int Heap::top()
{
    return heap[0];
}

bool Heap::empty()
{
    return heap.empty();
}

void Heap::print()
{
    for(int a:heap)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}