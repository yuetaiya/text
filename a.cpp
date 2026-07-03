#include<iostream>
#include"queue.h"
#include"lqueue.h"
#include"erfen.h"
#include"diguierfen.h"
using namespace std;



void maopao(int a[],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-1;j++)
   {
    if(a[j]>a[j+1])swap(a[j],a[j+1]);
   }


 }
}



int main()
{
int a[]={5,46,73,3,5764,34,2,775};
maopao(a,8);
for(int i=0;i<8;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;

return 0;
} 