#include<iostream>
#include"erfen.h"
using namespace std;
int erfen(int a[],int val,int last)
{
      int first=0;
      while(first<=last)
      {
        int b=(last+first)/2;
        if(a[b]==val)return b;
        if(val>a[b])
        {
            first=b+1;
        }
        else{
            last=b-1;
        }
      }
      return -1;
}