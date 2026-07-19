#include<iostream>
#include"listhashtable.h"
#include<algorithm>
#include<math.h>
using namespace std;

listhashtable::listhashtable()
{
 num=0;
 cap=6;
 loadfactor=0.7;

 table.resize(cap);
}

listhashtable::~listhashtable()
{

}

// 判断是否素数（扩容找素数容量用）
bool issushu(int val)
{
    if (val <= 1) return false;
    if (val == 2) return true;
    if (val % 2 == 0) return false;
    int sqrtval = sqrt(val);
    for (int i = 3; i <= sqrtval; i += 2)
    {
        if (val % i == 0)
            return false;
    }
    return true;
}

void listhashtable::expand()
{
   int newcap=2*cap+1;
    while(!issushu(newcap))
    {
      newcap+=2;
    }
    int oldcap=cap;
    cap=newcap;
    vector<list<int>>oldtable=table;
    table.clear();
    table.resize(newcap);
    num=0;
    for(auto a:oldtable)
    {
        for(auto b:a)
        {
          insert(b);
        }
    }


}

void listhashtable::insert(int val)
{
 if( (double)num / table.size() >= loadfactor )
    expand();
  int key=(val%table.size()+table.size())%table.size();
  if(table[key].empty())
    {
     num++;
     table[key].emplace_back(val);

    }
    else
    {
       auto it=::find(table[key].begin(),table[key].end(),val);
       if(it==table[key].end())
       {
         //key不存在
         table[key].emplace_back(val);
         num++;
       }
    }

}

void listhashtable::remove(int val)
{
    int key=(val%table.size()+table.size())%table.size();
    auto it=::find(table[key].begin(),table[key].end(),val);
    if(it==table[key].end())return;
    table[key].erase(it);
    num--;
}


bool listhashtable::find(int val)
{
 int key=(val%table.size()+table.size())%table.size();
auto it=::find(table[key].begin(),table[key].end(),val);
 if(it==table[key].end())return false;
 return true;
}

void listhashtable::print()
{
    for(int i=0;i<table.size();i++)
    {
       for(auto a:table[i])
       {
        cout<<a<<"["<<i<<"]"<<" ";
       }
       cout<<endl;
    }
}

int listhashtable::getcap()
{
    return cap;
}

int listhashtable::getnum()
{
   return num;
}