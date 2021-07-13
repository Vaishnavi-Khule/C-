#include<iostream>
#include<conio.h>
class demo
{

	int a;
	int b;
	int c;
public:
	demo()
	{
	}
	demo(int x,int y,int z)
	{
		this->a=x;
		this->b=y;
		this->c=z;
	}
	friend std::ostream& operator<<(std::ostream& os,demo &other)
};
std::ostream& operator<<(std::ostream& os,demo &other)
{
	os<<other.a;
	os<<other.b;
	os<<other.c;
	return os;
}

void main()
{
	demo d1(10,20,30),d2(50,20,50);
	std::cout<<d1<<std::cout<<d2<<std::endl;
	getch();
}