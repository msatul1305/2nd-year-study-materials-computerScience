#include<bits/stdc++.h>
using namespace std;
main(){
	int n=10;
	int a[n]={0,1,2,3,4,15,6,7,8,9};
	int no;
	int pos=-1,noc[n]={0};
	sort(a,a+n);
		for(int i=0;i<n;i++){
			int ub=n,lb=0,mid;
			mid=(ub+lb)/2;
			no=a[i];
			while(lb<=ub||pos==-1){
				noc[i]++;
				mid=(lb+ub)/2;
				if(a[mid]==no){
					pos=mid+1;
					break;
				}
				else if(a[mid]>no){
					ub=mid-1;
				}
				else if(a[mid]<no){
					lb=mid+1;
				}
			}
			if(pos==-1)cout<<"NOT FDOUND!";
			else cout<<"Found at pos "<<pos<<" with no of comparisions= "<<noc[i]<<endl;
			
		}
		float avg=0;
		sort(noc,noc+n);
		for(int i=0;i<n;i++){
			avg+=noc[i];
		}
		avg=avg/n;
		int q=0;
		cout<<"best case complexity= "<<noc[0];
		cout<<"worst case complexity= "<<noc[n-1];
		cout<<"avg case "<<avg;
}
