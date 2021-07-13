#include<iostream>
#include<conio.h>
class demo
{
	int a;
	int b;
	
public:
	demo()
	{
		a=10;
		b=10;
	}
	void gun(int a,int b)
	{
		a=this->a;
		b=this->b;
		std::cout<<a<<b;
	}
};
int main()
{
	demo d;
	d.gun(50,50);
	getch();
}