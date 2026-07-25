#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Heap
{
private:
vector<int>heap;

void up(int val);
void down(int val);

public:

void push(int val);
void pop();

int top();
bool empty();

void print();





};