#include<iostream>
#include"sort.h"
using namespace std;

void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}

void choice(int a[],int n)
{

for(int j=0;j<n-1;j++)
{
    int min=j;
for(int i=j+1;i<n;i++)
{
    if(a[i]<a[min])
    {
        min=i;
    }
}
swap(a[j],a[min]);

} 

}

void insert(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
      int j=i-1;
      int tem=a[i];
      while(j>=0&&tem<a[j])
      {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=tem;
    }
}

void shell(int a[],int n)
{
    int gra =n/2;

    while(gra!=0)
    {
      for(int j=0;j<n;j++)
      {
        if((j+gra)>=n)break;
        if(a[j]>a[j+gra])swap(a[j],a[j+gra]);
      }
      gra=gra/2;
    }

    for(int i=1;i<n;i++)
    {
       int tem=a[i];
       int j=i-1;
          while(j>=0&&tem<a[j])
       {
          a[j+1]=a[j];
          j--;
       }
       a[j+1]=tem;
    }


    
}