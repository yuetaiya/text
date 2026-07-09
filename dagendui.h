#pragma once
#include<iostream>
using namespace std;
class dagendui
{
private:
int *data;
int size;
int capacity;

public:
dagendui();
~dagendui();
void expand();

void up();
void down();
void push(int val);
int pop();
bool empty();
int top();
void print();




};