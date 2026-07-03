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

void xuanze(int a[],int n)
{
int min=0;
for(int j=0;j<n;)
{
for(int i=j;i<n;i++)
{
    if(a[i]<a[min])
    {
        min=i;
    }
}
swap(a[j],a[min]);
j++;
min=j;
}




}