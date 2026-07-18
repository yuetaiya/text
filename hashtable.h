#pragma once
#include<iostream>
using namespace std;
enum state
{
    empty,//空
    exist,//存在
    del,
};
struct node
{
    int data;
    state sta;
    node();
};

class hashtable
{
private:
node* Node;
int size;//大小
int num;//使用个数
double loadfactor;//装载因子

void expand();

public:

hashtable();

void insert(int val);
void remove(int val);
int find(int val);

void print();

int getnum();
int getsize();


};
