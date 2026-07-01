#include<iostream>
using namespace std;
class queuearr
{
public:
    int* data = nullptr;
    int max;
    int size;
    int first;
public:
    queuearr() :max(3), first(-1), size(0)
    {
        data = new int[max];
    }
    ~queuearr()
    {
    if (data !=nullptr)
            delete[]data;
    }

    void kuo()
    {
        if (size < max)return;
        int* temp = new int[max * 2];
        int a = first;
        for (int i = 0; i < size; i++)
        {
            a = a % (max);
            temp[i] = data[a];
            a++;
        }
        delete[]data;
        first = 0;
        data = temp;
        max *= 2;
        cout << "扩容成功" << max << endl;
    }


    void push(int val)
    {
        kuo();
       
        if (first == -1)first = 0;
        int a = first + size;
        a = a % (max);
        data[a] = val;
        size++;
    }
    int pop()
    {
        if (size == 0)return -1;
        int a = data[first];
        first++;
        first = first % (max);
        size--;
        return a;
}
    void print()
    {
        int a = first;
        for (int i = 0; i < size; i++)
        {
            a = a % (max);
            cout << data[a] << endl;
            a++;
        }
    }
    
    int top()
    {
        if (size ==0)return-1;
        return data[first];
    }

};

int main()
{
    queuearr q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i);
    }
    for (int i = 0; i < 3; i++)
    {
        q.pop();
    }
    for (int i = 0; i < 4; i++)
    {
        q.push(i);
    }
  
    for (int i = 0; i < 6; i++)

    {
        cout << q.data[i] << " ";
    }
    cout << endl;
    
    q.print();
}