#include<iostream>
using namespace std;
#include<fstream>
main()
{
ifstream fin;
	fin.open("file.txt",ios::in);
	int item;
while(!fin.eof())
	{
		cout<<"hello";
		fin>>item;
		//cout<<item;
	
	}
}
