#include<iostream>
using namespace std;
int binary(int num,int *arr)
{
	int i=num;
	if(num<0)
	i=-i;
	int k=0;
	while(i!=0)
	{
		arr[k]=i%2;
		i/=2;
		k++;
	}
	if(num>=0)
	arr[k]=0;
	else
	arr[k]=1;
	return k;
}

int signCalculate(int a,int b)
{
	if(a==b)
	return 0;
	else
	return 1;
}
void print(int *arr,int k)
{
	for(int i=k;i>=0;i--)
		cout<<arr[i]<<" ";
	//cout<<"\n";
}

void adjust(int *arr1,int &n1,int *arr2,int &n2)
{
	if(n1%2==1)
	{
		arr1[n1]=0;
		n1++;
	}	
	if(n2*2>n1)
	{
		while(n1<n2*2)
		{
			arr1[n1]=0;
			n1++;
		}
	}
    else if(n1/2>n2)
    {
    	while(n1/2!=n2)
    	{
    		arr2[n2]=0;
    		n2++;
		}
	}
}

void neg(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		arr[i]=1;
		else
		arr[i]=0;
	}
	int car=1;
	for(int i=0;i<size;i++)
	{
		if((arr[i]+car)==2)
		{
			arr[i]=0;
			car=1;
		}
		else if((arr[i]+car)==1)
		{
			arr[i]=1;
			car=0;
		}
		else if((arr[i]+car)==0)
		{
			arr[i]=0;
			car=0;
		}
	}
}

int sum(int *arr,int *arr1,int size)
{
	int car=0;
	for(int i=0;i<size;i++)
	{
		if((arr[i]+arr1[i]+car)==3)
		{
			arr[i]=1;
			car=1;
		}
		else if((arr[i]+arr1[i]+car)==2)
		{
			arr[i]=0;
			car=1;
		}
		else if((arr[i]+arr1[i]+car)==1)
		{
			arr[i]=1;
			car=0;
		}
		else if((arr[i]+arr1[i]+car)==0)
		{
			arr[i]=0;
			car=0;
		}
	}
	return car;
}

int sub(int *arr,int *arr1,int size)
{
	neg(arr1,size);
	int car=sum(arr,arr1,size);
	neg(arr1,size);
	return car;
}

int shift(int *A,int *Q,int size)
{
	int E=A[size-1];
	for(int i=size-1;i>=1;i--)
		A[i]=A[i-1];
	A[0]=Q[size-1];
	for(int i=size-1;i>=1;i--)
		Q[i]=Q[i-1];
	Q[0]=0;
	return E;
}
int overflow(int *A,int *B,int size)
{
	int car=sub(A,B,size);
	return car;
}

void divide(int *arr1,int n1,int *B,int n2,int sign)
{
	adjust(arr1,n1,B,n2);
	int A[n2],Q[n2],E=0;
	print(arr1,n1-1);
	cout<<"\n";
	//print(B,n2-1);
	//cout<<"\n";
	int sc=n2,size=n2;
	for(int i=0;i<n2;i++)
	{
		Q[i]=arr1[i];
		A[i]=arr1[i+n2];
	}
	
	int chk=overflow(A,B,size);
	if(chk==0)
	{
		sum(A,B,size);
		while(sc!=0)
		{
			int E=shift(A,Q,size);
			if(E==0)
			{
				E=sub(A,B,size);
				if(E==0)
					sum(A,B,size);
				else
					Q[0]=1;
			}
			else
			{
				sub(A,B,size);
				Q[0]=1;
			}
			sc--;
			print(A,n2-1);
			print(Q,n2-1);
			cout<<"\n";
		}
		
		cout<<"remainder:";
		print(A,n2-1);
		cout<<"\nquotient:";
		cout<<sign<<" ";
		print(Q,n2-1);
	}
	else
		cout<<"overflow\n";
}
main()
{
	int num1,num2,arr1[50],arr2[50];
	cin>>num1>>num2;
	int n1=binary(num1,arr1);
	int n2=binary(num2,arr2);
	cout<<num1<<":";
	print(arr1,n1);
	cout<<"\n"<<num2<<":";
	print(arr2,n2);
	cout<<"\n";
	int sign=signCalculate(arr1[n1],arr2[n2]);
	cout<<"steps\n";
	divide(arr1,n1,arr2,n2,sign);
}
