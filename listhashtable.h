#pragma once
#include<vector>
#include<list>
class listhashtable
{
private:
std::vector<std::list<int>> table;

int num;
int cap;

double loadfactor;

void expand();
public:
listhashtable();
~listhashtable();
public:
void insert(int val);
void remove(int val);
bool find(int val);

void print();

int getcap();

int getnum();



};