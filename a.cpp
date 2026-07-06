#include<iostream>
#include"queue.h"
#include"lqueue.h"
#include"erfen.h"
#include"diguierfen.h"
#include"sort.h"
#include<time.h>
using namespace std;


void cr(int a[],int n)
{
for(int i=1;i<n;i++)
{
  int tem=a[i];
  int j;
  for(j=i-1;j>=0&&tem<a[j];j--)
  {
    a[j+1]=a[j];
  }
  a[j+1]=tem;
}


}
void shel(int a[] ,int n)
{
  for(int gap=n/2;gap>0;gap/=2)
  {
   for(int i=gap;i<n;i++)
   {
    int tem=a[i];
    int j;
    for(j=i-gap;j>=0&&tem<a[j];j-=gap)
    {
      a[j+gap]=a[j];
    }
    a[j+gap]=tem;
   }
  }
}




int main()
{
    
    const int count=50000;
    int *arr=new int[count];
     int *brr=new int[count];
      int *crr=new int[count];
       int *drr=new int[count];
       srand(time(NULL));
       for(int i=0;i<count;i++)
       {
        int val=rand()%count;
        arr[i]=val;
        brr[i]=val;
        crr[i]=val;
        drr[i]=val;
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
       kuaisu(drr,0,count);
       end=clock();
       cout<<"kuaisu"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;


      /*int a[]={3,3,623,46,3452,3,5,43,45,4,55,3,2};
      kuaisu(a,0,12);
      for(int i=0;i<13;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
*/


} 