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

#include"BloomFilter.h"
using namespace std;



int main()
{
    BloomFilter Bloom;
    vector<int> vec;
    map<int,int> unmap;
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
      int a=rand()%10;
      if(!Bloom.find("a"))
      {
        Bloom.insert("a");
        unmap.insert(make_pair(a,1));
      }
      else{
        unmap[a]++;
      }
       vec.push_back(a);
    }

    for(auto a:vec)
    {
      cout<<a<<" ";
    }
    cout<<endl;
    for(auto a:unmap)
    {
       cout<<a.first<<"重复"<<a.second<<endl;
    }
   
} 