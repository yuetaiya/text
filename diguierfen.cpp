#include<iostream>
#include"diguierfen.h"
using namespace std;
int binarysearch(int arr[],int i,int j,int val)
{
if(i>j)return -1;
int mid=i+((j-i)/2);
if(arr[mid]==val)return mid;
if(val>arr[mid])
{
    i=mid+1;
}
else 
{
    j=mid-1;
}
return binarysearch(arr,i,j,val);


}