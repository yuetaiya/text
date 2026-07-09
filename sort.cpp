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
    int size=n/2;

    for(int gap=size;gap>0;gap/=2)
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

int speed(int a[],int l,int r)
{
   int tem=a[l];
  
   while(r>l)
   {
   while(r>l&&a[r]>=tem){r--;}
   if(r==l){a[l]=tem;return l;}
   a[l]=a[r];
   while(r>l&&a[l]<=tem){l++;}
   if(r==l){a[l]=tem;return l;}
   a[r]=a[l];
   }
   return -1;
}

void quick(int a[],int l,int r)
{
    int i=l;
    int j=r;
    if(l>=r)return;
    int mid=speed(a,l,r);

    
   quick(a,i,mid-1);
   quick(a,mid+1,j);
   
}

void merge(int a[],int l,int mid,int r)
{
int b[r-l+1];
int b1=0;
int i=l;
int j=mid+1;

while(i<=mid&&j<=r)b[b1++]=a[i]<=a[j]?a[i++]:a[j++];

while(i<=mid)b[b1++]=a[i++];

while(j<=r)b[b1++]=a[j++];

for(int k=0;k<(r-l+1);k++)a[l+k]=b[k];


}

void mergesort(int a[],int l,int r)
{
    if(l>=r)return;
    int mid=((r+l)/2);
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);


}



