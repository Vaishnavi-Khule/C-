#include<iostream>
#include<conio.h>
class demo
{
public:
	int a;
	int b;
	int c;

	demo()
	{
	}
	demo(int x,int y,int z)
	{
		this->a=x;
		this->b=y;
		this->c=z;
	}
demo operator+(demo& d2)
{
	demo x;
	x.a=this->a+d2.a;
	x.b=this->b+d2.b;
	x.c=this->c+d2.c;
	return x;
}
};

void main()
{
	demo d1(10,20,30);
	demo d2(40,50,60);
	demo d3=d1+d2;
	std::cout<<d3.a<<std::endl;
	std::cout<<d3.b<<std::endl;
	std::cout<<d3.c<<std::endl;
	getch();
}