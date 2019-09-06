#include<iostream>
using namespace std;
class student
{
	protected:
	char name[100],branch[50];
	int roll;
	public:
	void getd()
	{
		cout<<"enter the name and branch";
		cin.getline(name,100);
		cin.getline(branch,50);
		cout<<"enter the roll number";
		cin>>roll;
	}
};
class marks:public student
{
	protected:
	int m1,m2,m3,m4,m5;
	public:
	void getmarks()
	{
	cout<<"enter thye marks of 5 subjects";
	cin>>m1>>m2>>m3>>m4>>m5;	
	}
};
class result:public marks
{
	int total,avg;
	public:
	void calc()
	{
		total=m1+m2+m3+m4+m5;
		avg=total/5;
	}
	void show()
	{
		cout<<"name is"<<name<<endl;
		cout<<"branch is "<<branch<<endl;
		cout<<"roll no is "<<roll<<endl;
		cout<<"marks of 5 subjects are:"<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;
		cout<<"total marks is: "<<total<<"/500"<<endl;
		cout<<"avergae is: "<<avg;
	}
};
main()
{
	result r1;
	r1.getd();
	r1.getmarks();
	r1.calc();
	r1.show();
	
}
