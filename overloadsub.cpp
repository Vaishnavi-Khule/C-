#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int a;
	int b;
	int*p;
public:
	demo()
	{
		a=10;
		b=20;
		p=(int*)malloc(5*sizeof(int));
	}
	int* operator[](int x)
	{
		cout<<this.[x];
		return (this->p)[x];
	}
};
void main()
{
	demo d;
	cout<<d[0];
}