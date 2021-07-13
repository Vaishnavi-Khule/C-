#include<iostream>
#include<conio.h>
class base
{
protected:
	int a;
base()
{
	this->a=10;
}
};
class child1:public base
{
public:
	int b;
	child1()
	{
		this->b=20;
	}
	void display()
	{
		std::cout<<a;
		std::cout<<b;
	}
};
class child2:public base
{
public:
	int c;
	child2()
	{
		this->c=30;
	}
	void display()
	{
		std::cout<<a;
		std::cout<<c;
	}
};
void main()
{
	child1 c;
	c.display();
		child2 d;
		d.display();
		getch();
}

