#include<iostream>
#include<conio.h>
class data
{
public:
	int max(int x,int y)
	{
		if(x>y)
			return x;
		else
			return y;
	}
	int max(int * a,int n)
		{
			int m,i;
			for(i=0;i<n;i++)
				{
					if(a[i]>a[i+1])
						{
							m=a[i];
					}
					else
						m=a[i+1];
			}
			return m;
	}
	_
		void max(int *a,int n,)