#include<iostream>
#include<conio.h>
template<class T1,class T2>
class demo
{
public:
	T1 a;
	T2 b;
	template <class T>          //khalun d sobt int float bind aahet mhnun char sathi navin function template ghetly
	T fun(T x)
	{
		T c=x;
		return c;
	}
};
void main()
{
	demo<int,float>d;
	std::cout<<d.fun<char>('A');
	getch();
}