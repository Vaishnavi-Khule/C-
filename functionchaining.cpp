#include<iostream>
#include<conio.h>
class demo
{
	int a;
public:
	demo()
	{
	}
	 demo &fun()
	{
		std::cout<<"i am in fun";
		return (*this);
	 }

	  demo &sun()
	{
		std::cout<<"i am in sun";
		return (*this);
	 }

	   demo &gun()
	{
		std::cout<<"i am in gun";
		return (*this);
	 }
};
void main()

{
	demo d;
	d.fun().sun().gun();
	demo d1;demo d2;demo d3;
	d1=d2=d3;

	getch();
}

