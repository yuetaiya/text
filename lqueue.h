#pragma once
#include<iostream>
class lqueue
{
public:
struct lque
{
    int data;
    lque *next;
    lque *pre;
    lque();
    lque(int val);
};
lque * head;
lque * tail;
public:
 
lqueue();
~lqueue();

void push(int val);
int pop();
int top();
int size();
bool empty();
void print();




};