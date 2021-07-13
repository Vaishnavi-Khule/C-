#include<iostream>
#include<conio.h>
class employee
{
	char name[10];
	int id;
protected:
	float salary;
public:
	employee(const char* name="",int id=0,float salary=0.0f)
	{
		strcpy(this->name,name);
		this->id=id;
		this->salary=salary;
	}
	char* get_name()
	{
		return name;
	}
	int get_id()
	{
		return this->id;
	}
	float get_salary()
	{
		return this->salary;
	}
	virtual void display()
	{
		std::cout<<"name"<<this->name<<std::endl;
		std::cout<<"id"<<this->id<<std::endl;
		std::cout<<"salary"<<this->salary<<std::endl;
	}
	virtual float calc_income()
	{
		return (this->salary);
	}
};
class manager:public employee
{
	int bonus;
public:
	manager(const char* name="",int id=0,float salary=0,int bonus=0):employee(name,id,salary)
	{
		this->bonus=bonus;
	}
	int get_bonus()
	{
		return bonus;
	}
	 void display()
	{
		employee::display();
		std::cout<<"bonus"<<this->bonus<<std::endl;
	}
	float calc_income()
	{
		return (this->salary +this->bonus);
	}
};
 class salesman:public employee
 {
	 int comm;
 public:
	 salesman(const char* name="",int id=0,float salary=0.0f,int comm=0):employee(name,id,salary)
	 {
		 this->salary=salary;
	 }
	 int get_comm()
	 {
		 return comm;
	 }
	 void display()
	 {
		 employee::display();
		 std::cout<<"commision"<<this->comm<<std::endl;
	 }
	 float calc_income()
	 {
		 return (this->salary+this->comm);
	 }
 };
 float calc_total_salary(employee* eptr[],int n)
 {
	 int i;
	 float total_salary=0.0f;
	 for(i=0;i<n;i++)
	 {
		 total_salary=total_salary+eptr[i]->get_salary();
	 }
	 return total_salary;
 }
 float calc_total_income(employee* eptr[],int n)
 {
	 int i;
	 float total_income=0.0f;
	 for(i=0;i<n;i++)
	 {
		 total_income=total_income+eptr[i]->calc_income();
	 }
	 return total_income;
 }
 void main()
 {  
	 float  total_income,total_salary;
	 employee* eptr[3];
	 eptr[0]=new employee( "champa",20,3000);
	 eptr[0]->display();
	 eptr[1]=new manager("sudhip",40,3000,1000);
	 eptr[1]->display();
	 eptr[2]=new salesman("srt",66,3000,500);
	 eptr[2]->display();
	 total_income=calc_total_income(eptr,3);
	 total_salary=calc_total_salary(eptr,3);
	 std::cout<<"total income="<<total_income<<std::endl;
	 std::cout<<"total salary="<<total_salary<<std::endl;
	 getch();
 }
 
			 




















