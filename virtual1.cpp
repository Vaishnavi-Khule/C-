#include<iostream>
#include<conio.h>
class person
{
	
	char name[20];
	int age;
public:
	person(const char* name="",int age=0)
	{
		strcpy(this->name,name);
		this->age=age;
	}
	char* get_name()
	{
		return this->name;
	}
	int get_age()
	{
		return age;
	}
	 void display()
	{
		std::cout<<"name"<<this->name<<std::endl;
		std::cout<<"age"<<this->age<<std::endl;
	}
};
   class emp:public person
   {
	   int id;
	   float salary;
   public:
	   emp(const char* name="",int age=0,int id=0,float salary=0.0f):person(name ,age)
	   {
		   this->id=id;
		   this->salary=salary;
	   }
	   int get_id()
	   {
		   return this->id;
	   }
	   float get_salary()
	   {
		   return this->salary;
	   }
	   void display()
	   {
		   person::display();
		   std::cout<<"id"<<this->id<<std::endl;
		   std::cout<<"salary"<<this->salary<<std::endl;
	   }
   };
 void main()
   {
	  /* emp e("namita",20,50,44444);
	   person *ptr;
	   ptr=&e;
	  ptr->display();*/
	   person p("namita",20);
	   emp *ptr=static_cast<emp*>(&p);
	   ptr->display(); ///after use of virtual object tyape che function call hotat here objet is person tyape hence this get happen.
	   
	   getch();
   }