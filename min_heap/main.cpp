// min_heap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "min_heap.h"

#include <iostream>
using namespace std;
typedef struct _test_ {
	char x;
	float y;
}test;
typedef struct _cmp_ {
	bool operator()(test t1, test t2) {
		return t1.y < t2.y;
	}
}cmp;
typedef struct _find_
{
	bool operator()(test t1, test t2) {
		return t1.x == t2.x;
	}
}find_str;
int main()
{
	min_heap<test, find_str, cmp> *mheap = new min_heap<test, find_str, cmp>();
	test t1, t2, t3, t4;
	t1.x = '1';
	t2.x = '2';
	t3.x = '3';
	t4.x = '4';
	t1.y = 4.1;
	t2.y = 3.1;
	t3.y = 2.2;
	t4.y = 1.1;
	mheap->push_heap(t1);
	mheap->push_heap(t2);
	mheap->push_heap(t3);
	mheap->push_heap(t4);
	test tmp;
	tmp.x = '4';
	cout << mheap->find_heap(tmp) << endl;
	tmp.x = '2';
	mheap->remove_heap(tmp);
	cout << mheap->find_heap(tmp) << endl;
	cout << mheap->pop_heap().x << endl;
	cout << mheap->pop_heap().x << endl;
	cout << mheap->pop_heap().x << endl;
	system("pause");
    return 0;
}

