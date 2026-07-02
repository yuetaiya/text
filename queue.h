#pragma once
#include<iostream>
using namespace std;
class queue
{
    private:
    int *que;
    int front;
    int rear;
    int cap;

    public:
    queue();

    void expand(int val);
    void push(int val);
    int pop();
    int top();
    int gitcap();
int back();




};