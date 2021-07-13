#include<iostream>
#include<conio.h>
using namespace std;
  class demo
   {
	   int a; 
	   int b;
	   int c;
   public:
		   demo(int x,int y, int z)
	        {
		   this->a=x;
		   this->b=y;
		   this->c=z;
		   }
		bool   operator==(demo& other)
		   {
			   return (this->a==other.a && this->b==other.b && this->c==other.c);
		   }
   };
  void main()
  {
	  demo d1(10,20,30);
	demo  d2(40,50,60);
	if(d1==d2)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	getch();
  }
