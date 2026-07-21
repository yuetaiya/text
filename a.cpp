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

#include"listhashtable.h"

#include<unordered_set>
#include<unordered_map>
#include<map>
#include<stdlib.h>
#include<time.h>
#include"bitmap.h"
using namespace std;



int main()
{
   bitmap bm(100);

    vector<int> vec;
    map<int,int> unmap;
    srand(time(NULL));
    for(int i=0;i<1000;i++)
    {
      int a=rand()%1000;
       vec.push_back(a);
       if(bm.find(a))
       {
        unmap[a]++;
       }
       else
       {
        bm.set(a);
       unmap.insert(make_pair(a,1));
       }
    }
   
   cout<<endl;
   for(auto a:unmap)
   {
    if(a.second>1)
    {
      cout<<a.first<<"重复"<<a.second<<"次"<<endl;
    }
   }
   cout<<endl;


    
} 