//
// Created by Administrator on 2022/1/10.
//

#include <bits/stdc++.h>

#include <memory>

using namespace std;

struct T {
	T(int x)
	{
		p = new int(x);
	}
	
	~T()
	{
		delete p;
		p = nullptr;
	}
	int *p;
};

void print(T arg)
{
	cout << *arg.p << endl;
}

int main()
{
	T a = T(123);
	print(a);
	cout << *a.p << endl;
	return 0;
}