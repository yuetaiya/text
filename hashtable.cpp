#include<iostream>
#include"hashtable.h"
#include<cmath>

using namespace std;
node::node()
{
   sta = state::empty;
}

hashtable::hashtable()
{
  size=3;
  num=0;
  loadfactor=0.7;
  Node=new node[size];
}

bool panduan(int val)//判断素数
{

   if((val%2)==0)return false;
   int sqrtval=sqrt(val);
   for(int i=3;i<=sqrtval;i+=2)
   {
      if((val%i)==0)return false;
   }
   return true;

}
void hashtable::expand()
{
 int newsize=size*2+1;
 for(;;newsize+=2)
{
   if(panduan(newsize))break;
}

node* oldNode=Node;
 Node=new node[newsize];

num=0;
int oldsize=size;
size=newsize;
for(int i=0;i<oldsize;i++)
{
    if(oldNode[i].sta==state::exist)
    {
      insert(oldNode[i].data);
    }

}
delete[]oldNode;


}

void hashtable::insert(int val)
{
    if(num>((double)size*loadfactor))expand();//判断扩容
    int key=(val%size+size)%size;
    int start=key;
       
       while(Node[key].sta==state::exist)
       {
         if(Node[key].data==val)return;
        key++;
        if(key==(size))key=0;
        if(key==start)return;
       }
  
      Node[key].data=val;
      Node[key].sta=state::exist;
      num++;
    
    


}

int hashtable::find(int val)
{
  int key=((val%size)+size)%size;
  int start=key;
  while(Node[key].sta!=state::empty)
  {
   if(Node[key].data==val&&Node[key].sta==state::exist)return key;
   key++;
   if(key==size)key=0;
   if(start==key)return -1;
  }
  return -1;
}

void hashtable::remove(int val)
{
int state_=find(val);
if(state_==-1)return;
Node[state_].sta=state::del;

}

void hashtable::print()
{
    for(int i =0;i<size;i++)
    {
      if(Node[i].sta==state::exist)
      {
         cout<<Node[i].data<<"["<<i<<"]"<<" ";
      }
    }
    cout<<endl;


}

int hashtable::getnum()
{
   return num;
}

int hashtable::getsize()
{
   return size;
}