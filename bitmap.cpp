#include<iostream>
using namespace std;
#include"bitmap.h"
bitmap::bitmap(size_t max)
{
    this->max=max;
    size_t cap=max/64+1;
    bits.resize(cap,0);
}

void bitmap::set(size_t x)
{
    if(x>max)return;
size_t idx=x/64;
size_t off=x%64;
bits[idx]|=1ull<<off;

}

bool bitmap::find(size_t x)
{
    if(x>max)return false;
    size_t idx=x/64;
    size_t off=x%64;
    size_t a=bits[idx];
   return((bits[idx]&1ull<<off)!=0);

}