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

#include"Heap.h"
#include"BloomFilter.h"
#include"consistenhash.h"
#include<sstream>
using namespace std;





int main()
{
  ConsistenHash ch(1000);
  ch.addnode("无敌少侠");
  ch.addnode("熊出没");
  ch.addnode("国宝特工");
   ch.addnode("猪猪侠");
  map<string,int>node;
  node["无敌少侠"]=0;
  node["熊出没"]=0;
  node["国宝特工"]=0;
  node["猪猪侠"]=0;
  ch.removenode("无敌少侠");
  for(int i=0;i<10000;i++)
  {
    string name="用户"+to_string(i);
    string str=ch.getkey(name);
    if(str=="无敌少侠"){node["无敌少侠"]++;}
    if(str=="熊出没"){node["熊出没"]++;}
    if(str=="国宝特工"){node["国宝特工"]++;}
    if(str=="猪猪侠"){node["猪猪侠"]++;}
  }
  

  for(auto a:node)
  {
   cout<<a.first<<":"<<a.second<<endl;
  }



} 