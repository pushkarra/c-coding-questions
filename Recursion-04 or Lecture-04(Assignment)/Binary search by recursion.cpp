// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :
// Line 1 : Array size
// Line 2 : Array elements (separated by space)
// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5

// Sample Output:
// 3


#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int x, int l, int r){
	
	if(l>r){
		return -1;
	}
	
	int mid=((l+r)/2);
	if(a[mid]==x){
		return mid;
	}
	if(a[mid]>x){
		return binary(a,x,l,mid-1);
	}else{
		return binary(a,x,mid+1,r);
	}
}


int main(){
	int n,i,x;
	cout<<"enter the size of array ";
	cin>>n;
	int a[n];
	cout<<"enter the elements inside the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the element inside the array you want to find ";
	cin>>x;
	int l=0,r=n-1;
	
	cout<<binary(a,x,l,r);
}