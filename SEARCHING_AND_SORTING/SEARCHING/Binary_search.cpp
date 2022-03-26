#include<bits/stdc++.h>
using namespace std;

//we are using here iterative approach
int binary_search(int a[],int n,int x){
	int low=0, high = n-1;
	
	while(low<=high){
		int mid=((low+high)/2);
		
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]>x){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	
	return -1;
}

int main(){
	int n,i,x;

	cout<<"enter the size of the array ";
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the element you want to find in the array ";
	cin>>x;
	
	int result=binary_search(a,n,x);
	cout<<result;
	return 0;
	
}
