#pragma once
#include<functional>
#include<iostream>
using namespace std;

class priorityqueue
{
public:
using Comp=function<bool(int,int)>;

priorityqueue(Comp comp=greater<int>());

~priorityqueue();
private:
int *que;
int size;
int cap;
Comp comp;

void expand();
void up(int size,int val);
void down(int i,int val);

public:
void push(int val);
int pop();
int top();
bool empty();


};