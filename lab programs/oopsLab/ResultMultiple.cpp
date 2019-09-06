#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
	char name[30];
	char cl;
	int roll;
	public:
		void get()
		{
			cout<<"\n Enter name of student: ";
			fflush(stdin);
			gets(name);
			cout<<"\n Enter class: ";
			cin>>cl;
			cout<<"\n Enter roll number: ";
			cin>>roll;
		}
		void putS()
		{
			cout<<"\nStudent name: ";
			puts(name);
			cout<<"\nClass: "<<cl;
			cout<<"\nRoll no.: "<<roll;
		}
};
class Marks
{
	protected:
	float mark[5];
	public:
		void getmarks()
		{
		   for(int i=1;i<=5;i++)
		   {
			cout<<"\nEnter marks in Subject "<<i<<" \n";
			cin>>mark[i-1];
		   }
	    }
	    void putmarks()
	    {
	    	for(int i=1;i<=5;i++)
		   {
			cout<<"\nMarks in Subject "<<i<<" ";
			cout<<mark[i-1];
		   }
		}
	
};
class Result:public Student,public Marks
{
	double avg;
	public:
		void getavg()
		{
			avg=(mark[0]+mark[1]+mark[2]+mark[3]+mark[4])/5;
		}
		void putavg()
		{
			putS();
			putmarks();
			cout<<"\nAverage: "<<avg;
     		if(avg>35.0)
			cout<<"\nStatus: Pass \n";
			else
			cout<<"\nStatus: Fail \n";
		}
};
int main()
{
	Result r;
	r.get();
	r.getmarks();
	r.getavg();
	r.putavg();
}
