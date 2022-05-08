// Problem Statement: Print Subsets of Array
// Problem Level: HARD
// Problem Description:
// Given an integer array (of length n), find and print all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print the subsets in different lines.
// Input format :
// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)

// Constraints :
// 1 <= n <= 15

// Sample Input:
// 3
// 15 20 12

// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12


#include<bits/stdc++.h>
using namespace std;


void subset(int a[],int n,int output[],int sz){
	
	if(n==0){
		for(int k=0;k<sz;k++){
			cout<<output[k]<<" ";
        }
        cout<<endl;
		return;
	}
	
	int temp[sz+1],i;
	
	for(i=0;i<sz;i++){
		temp[i]=output[i];
	}
	temp[i]=a[0];
	
	subset(a+1,n-1,temp,sz+1);
	subset(a+1,n-1,output,sz);

}





int main(){
	int n,i,sz=0;
	cout<<"enter the size of array ";
	cin>>n;
	int a[n],output[n];
	cout<<"enter the elements inside the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	subset(a,n,output,sz);
	
}