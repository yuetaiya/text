#include<iostream>
#include"queue.h"
#include"lqueue.h"
#include"erfen.h"
#include"diguierfen.h"
#include"sort.h"
#include"dagendui.h"
#include<time.h>
#include"priorityqueue.h"
using namespace std;


int main()
{
  priorityqueue que([](int a,int b){return a>b;});
srand(time(NULL));
for(int i=0;i<10;i++)
{
  que.push(rand()%100);
}
while(!que.empty())
{
cout<<que.top()<<" ";
que.pop();
}
cout<<endl;
  /* const int count=50000;
    int *arr=new int[count];
     int *brr=new int[count];
      int *crr=new int[count];
       int *drr=new int[count];
       int *err=new int[count];
       int *frr=new int[count];
       int *grr=new int[count];
       srand(time(NULL));
       for(int i=0;i<count;i++)
       {
        int val=rand()%count;
        arr[i]=val;
        brr[i]=val;
        crr[i]=val;
        drr[i]=val;
        err[i]=val;
        frr[i]=val;
        grr[i]=val;
       }
       clock_t begin,end;

       begin=clock();
       bubblesort(arr,count);
       end=clock();
       cout<<"bubblesort"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;
       

       begin=clock();
       choice(brr,count);
       end=clock();
       cout<<"choice"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;

       begin=clock();
       insert(crr,count);
       end=clock();
       cout<<"insert"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;

       begin=clock();
       shell(drr,count);
       end=clock();
       cout<<"shell"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;

        begin=clock();                                                                                           
       quick(err,0,count);
       end=clock();
       cout<<"quick"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;

        begin=clock();                                                                                           
       quick(frr,0,count);
       end=clock();
       cout<<"mergesort"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;
*/

      /*int a[]={3,3,623,46,3452,3,5,43,45,4,55,3,2};
       mergesort(a,0,12);
      for(int i=0;i<13;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
*/



} 