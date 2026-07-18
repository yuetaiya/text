#pragma once
#include<iostream>
using namespace std;
void bubblesort(int a[],int n);//冒泡排序
void choice(int a[],int n);//选择排序
void insert(int a[],int n);//插入排序
void shell(int a[],int n);//希尔排序*插入排序优化版
int speed(int a[],int l,int r);
void quick(int a[],int l,int r);
void merge(int a[],int l,int mid,int r);
void mergesort(int a[],int l,int r);//归并排序
void heapsort(int a[],int size);//堆排序
void radixsort(int a[],int size);//基数排序