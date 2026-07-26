#include"consistenhash.h"
#include<functional>
ConsistenHash::ConsistenHash(size_t virtualnode)
{
    this->virtualnode=virtualnode;
}

size_t ConsistenHash::Hash(const std::string &key)//通过服务器名称返回哈希值
{
    return std::hash<std::string>{}(key);
}

std::string ConsistenHash::virtual_name(const std::string &node,size_t t)//定义虚拟服务器名称
{
     std::string str=node+"#"+std::to_string(t);
     return str;


}


void ConsistenHash::addnode(const std::string &node)//增加物理服务器(虚拟服务器跟着增加)
{
  physicalnode.insert(node);
  for(int i=0;i<virtualnode;i++)
  {
    std::string str=virtual_name(node,i);
    size_t Hs=Hash(str);
    ring[Hs]=node;
  }      
}

void ConsistenHash::removenode(const std::string &node)//删除指定物理服务器
{
    if(physicalnode.erase(node)==0)return;
    for(int i=0;i<virtualnode;i++)
    {
        std::string str=virtual_name(node,i);
        size_t hs=Hash(str);
        ring.erase(hs);
    }
}

std::string ConsistenHash::getkey(const std::string &key)
{
  if(ring.empty())
  {
    throw std::runtime_error("no node int the ring");
  }
  size_t hs=Hash(key);
  auto it=ring.lower_bound(hs);
  if(it==ring.end())it=ring.begin();
  return it->second;
}