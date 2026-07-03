#include<iostream>
#include"queue.h"
#include"lqueue.h"
#include"erfen.h"
#include"diguierfen.h"
#include"sort.h"
using namespace std;


int main()
{
int a[]={5,46,73,3,5764,34,2,775};
bubblesort(a,8);
for(int i=0;i<8;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;

return 0;
} 