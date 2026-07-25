#include"BloomFilter.h"
using namespace std;
BloomFilter::BloomFilter(int bitsize)
{
   int idx=bitsize/64+1;
   bits.resize(idx,0);
   this->bitsize=bitsize;
}


size_t BloomFilter::hash1(const string &val)
{
  size_t key=231;
 size_t res=0;
  for(char a:val)
  {
    res=res*123+key+a;
  }
  return res;
}

size_t BloomFilter::hash2(const string &val)
{
  size_t key=3421;
  size_t res=0;
  for(char a:val)
  {
  res=res*43+key+a;

  }
  return res;
}
void BloomFilter::insert(string val)
{
  size_t h1=hash1(val);
  size_t h2=hash2(val);

  size_t idx1=h1/64;
  size_t off1=h1%64;
  bits[idx1]|=1ull<<off1;

  size_t idx2=h2/64;
  size_t off2=h2%64;
  bits[idx2]|=1ull<<off2;

}

bool BloomFilter::find(string val)
{
  size_t h1=hash1(val);
  size_t h2=hash2(val);
  
  size_t idx1=h1/64;
  size_t off1=h1%64;

  size_t idx2=h2/64;
  size_t off2=h2%64;

  if((bits[idx1]&1ull<<off1)!=0&&(bits[idx2]&1ull<<off2)!=0)
  {
   return true;
  }
  else
  {
    return false;
  }
}

void BloomFilter::clear()
{
  bits.clear();
  bitsize=0;
}
