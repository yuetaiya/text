#pragma once
#include<iostream>
#include<vector>
#include<cstdint>
class bitmap
{
private:
std::vector<uint64_t>bits;
size_t max;
public:
explicit bitmap(size_t max);//explicit 禁止隐士转换
void set(size_t x);
bool find(size_t x);



};