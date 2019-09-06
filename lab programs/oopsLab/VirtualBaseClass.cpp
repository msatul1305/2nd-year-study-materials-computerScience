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
class Midsem:virtual public Student
{
	protected:
	float mid[5];
	public:
		void getmid()
		{  cout<<"\nEnter midsem marks";
		   for(int i=1;i<=5;i++)
		   {
			cout<<"\nEnter marks in Subject "<<i<<" \n";
			cin>>mid[i-1];
		   }
	    }
	    void putmid()
	    {   cout<<"\nMarks secured in Midsem";
	    	for(int i=1;i<=5;i++)
		   {
			cout<<"\nMarks in Subject "<<i<<" ";
			cout<<mid[i-1];
		   }
		}
	
};
class Endsem:virtual public Student
{
	protected:
	float end[5];
	public:
		void getend()
		{  cout<<"\nEnter endsem marks";
		   for(int i=1;i<=5;i++)
		   {
			cout<<"\nEnter marks in Subject "<<i<<" \n";
			cin>>end[i-1];
		   }
	    }
	    void putend()
	    {  cout<<"\nMarks secured in Endsem";
	    	for(int i=1;i<=5;i++)
		   {
			cout<<"\nMarks in Subject "<<i<<" ";
			cout<<end[i-1];
		   }
		}
	
};
class Result:public Midsem,public Endsem
{
	double avg;
	public:
		void getavg()
		{
			avg=(mid[0]+mid[1]+mid[2]+mid[3]+mid[4]+end[0]+end[1]+end[2]+end[3]+end[4])/5;
		}
		void putavg()
		{
			putS();
			putmid();
			putend();
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
	r.getmid();
	r.getend();
	r.getavg();
	r.putavg();
}
