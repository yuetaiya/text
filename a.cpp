#include<iostream>
#include"queue.h"
#include"lqueue.h"
using namespace std;




int main()
{
lqueue a;
a.push(1);
a.push(2);
a.push(3);
a.push(4);
a.pop();
a.print();
cout<<a.size()<<endl;
return 0;
} 