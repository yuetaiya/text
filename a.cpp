#include<iostream>
#include"queue.h"
#include"lqueue.h"
#include"erfen.h"
#include"diguierfen.h"
#include"sort.h"

#include<cmath>
#include<time.h>
#include"priorityqueue.h"

#include"hashtable.h"


using namespace std;





int main()
{
hashtable hash;
hash.insert(10);

 
hash.insert(20);

 
hash.insert(30);

 
hash.insert(40);

 
hash.insert(10);

hash.remove(10);

hash.insert(10);
cout<<hash.getsize()<<endl;
hash.print();
 


 /* const int count=50000000;
    int *arr=new int[count];
     int *brr=new int[count];
      int *crr=new int[count];
       int *drr=new int[count];
       int *err=new int[count];
       int *frr=new int[count];
       int *grr=new int[count];
        int *hrr=new int[count];
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
        hrr[i]=val;
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

        begin=clock();                                                                                           
       heapsort(grr,count);
       end=clock();
       cout<<"heapsort"<<(end-begin)*1.0/CLOCKS_PER_SEC<<"s"<<endl;
*/



} 