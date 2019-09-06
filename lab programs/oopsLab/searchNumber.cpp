#include<iostream>
using namespace std;
class arr{
	int *a;
	public:
		arr()
		{
			char ch='y';
			int i=0;
			a=new int[5];
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
			
		}
		void disp()
		{
			for(int i=0;i<5;i++)
			cout<<a[i]<<"\t";
		}
		void search(int item)
		{
			int c=0;
			for(int i=0;i<5;i++)
			{
			if(a[i]==item)
			{
			cout<<"\n"<<item<<" found at "<<i+1<<" position\n";
			c=1;
			}
			}
			if(c==0)
			cout<<"item not found";
		}
};
main()
{
	arr a;
	a.disp();
	int item;
	cout<<"\nenter the item to be searched:";
	cin>>item;
	a.search(item);
}
