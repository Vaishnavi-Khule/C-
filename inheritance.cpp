#include<iostream>
#include<conio.h>
class parent
{
public:
	parent()
	{
		std::cout<<"inside parent constructor";
	}
	~parent()
	{
		std::cout<<"inside parent destructor";
	}
};
class child:public parent
{ 
public:
	child()
	{
		std::cout<<"inside child constructor";
	}
	~child()
	{
		std::cout<<"inside child destructor";
	}
};
int main()
{
	child c;
	return 0;
	getch();
}
