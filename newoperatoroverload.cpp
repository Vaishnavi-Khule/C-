#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<new>
void * operator new(size_t size)
{
	
		void * p=NULL;
		p=malloc(size);
		std::cout<<"overloaded new     "<<size<<std::endl;
		return p;
}
class demo
{
	int a;
	int b;
	float f;
public:
	demo(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	
};
void main()
{
int *i=new int(55);
demo *d=new demo(10,20);
double *f=new double(26662.222);
int *ptr=new int[5];
double *dt=new double[6];
dt[1]=10;
std::cout<<dt[1];

getch();
}