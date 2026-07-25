#pragma once
#include<iostream>
#include<vector>
#include<functional>
#include<string>
class BloomFilter
{
  private:
  std::vector<size_t> bits;
  size_t bitsize;
  public:
   
  BloomFilter(int bitsize=1234);
  size_t hash1(const std::string &val);
  size_t hash2(const std::string &val);

  void insert(std::string val);
  bool find(std::string val);
  void clear();







};