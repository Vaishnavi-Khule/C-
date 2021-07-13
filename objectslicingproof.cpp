#include<iostream>
#include<conio.h>
class parent1
{
	double a;
};
class parent2
{
	double b;
};
class parent3
{
	double c;
};
class child:public parent1,public parent2,public parent3
{
	double d;
};
void main()
{
	child ch;
	std::cout<<"size"<<sizeof(ch)<<std::endl;
parent1 *ptr1=&ch;
parent2 *ptr2=&ch;
parent3 *ptr3=&ch;
child *ctr=static_cast<child*>(ptr3); //downcasting from ptr3 16=10h;gets subtracted to get address of object
child *ctr1=static_cast<child*>(ptr2);//downcasing from ptr2 8 gets subtracted to get address of object of child
std::cout<<"child adddress"<<&ch<<std::endl;
std::cout<<"parent1 adddress"<<ptr1<<std::endl;     //child address itself
std::cout<<"parent2 adddress"<<ptr2<<std::endl;    //next 8 bits
std::cout<<"parent3 adddress"<<ptr3<<std::endl;      //next 8
std::cout<<"child address"<<ctr<<std::endl;
getch();
}