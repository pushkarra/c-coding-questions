#include<bits/stdc++.h>
using namespace std;

//we are using here recursive approach
int binary_recursive(int a[],int x,int l,int r){
	if(l>r){
		return -1;
	}
	int mid=((l+r)/2);
	if(a[mid]==x){
		return mid;
	}
	if(x<a[mid]){
		return binary_recursive(a,x,l,mid-1);
	}else{
		return binary_recursive(a,x,mid+1,r);
	}

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
	int low=0,high=n-1;
	int result=binary_recursive(a,x,low,high);
	cout<<result;
	return 0;
	
}
