#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
 int i,j,k;
 int brr[6];
 i=l;
 j=m+1;
 k=l;
 while(i<=m&&j<=r)
 {
  if(arr[i]<=arr[j])
  {
   brr[k]=arr[i];
   i++;
  }
  else
  {
   brr[k]=arr[j];
   j++;
  }
  k++;
 }
 while(i<=m)
 {
   brr[k]=arr[i];
   i++;
   k++;
 }
 while(j<=r)
 {
   brr[k]=arr[j];
   j++;
   k++;
 }
 for(int x=l;x<=r;x++)
 arr[x]=brr[x];
}
void mergeSort(int arr[],int l,int r)
{
 if(l<r)
 {
  int m=(l+r)/2;
  //cout<<m<<endl;
  mergeSort(arr,l,m);
  mergeSort(arr,m+1,r);
  merge(arr,l,m,r);
 }
}
void printArray(int A[6],int size)
{
 int i=0;
 for(i=0;i<size;i++)
 cout<<A[i]<<" ";
 cout<<endl;
}
int main()
{
 int arr[6]={12,11,9,6,13,1};
 cout<<"initial array:"<<endl;
 printArray(arr,6);
 mergeSort(arr,0,5);
 cout<<endl<<"sorted array:\n";
 printArray(arr,6);
 return 0;
}
