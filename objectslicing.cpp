#include<iostream>
#include<conio.h>
class person
{
	char name[10];
	int age;
public:
	person(const char * name="",int age=0)
	{
		strcpy(this->name,name);
		this->age=age;
	}
	char* getname()
	{
		return this->name;
	}
	int getage()
	{
		return age;
	}
	void display()
	{
		std::cout<<"name="<<this->name<<std::endl;
		std::cout<<"age="<<this->age<<std::endl;
	}
};
     class employee:public person
	 {
		 int id;
		 float salary;
	 public:
		 employee(const char* name=" ",int age=0,int id=0,float salary=0.0f):person(name,age)
		 {
			 this->id=id;
			 this->salary=salary;
		 }
		 int getid()
		 {
			 return this->id;
		 }
		 float getsalary()
		 {
			 return salary;
		 }
		 void display()
		 {
			 person::display();
			 std::cout<<"id="<<this->id<<std::endl;
			 std::cout<<"salary="<<this->salary<<std::endl;
		 }
	 };

	 void main()
	 {
		 person p("rutu",10);
		 p.display();
		 employee e( "champa",20,15551,500000);
		 e.display();
		 p=e;          //only parent's data member from child object will be copied.
		 p.display();
		// person*ptr=NULL;
		// ptr=&e;
		 //ptr->display();
		// person & ref=e;         //reference v ariable only points to parent's member
		// ref.display();
		// p.display();
		 getch();
	 }



