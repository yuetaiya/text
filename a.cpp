#include<iostream>
#include"queue.h"
#include"lqueue.h"
#include"erfen.h"
#include"diguierfen.h"
#include"sort.h"
#include<time.h>
using namespace std;


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



} 