// Problem Level: HARD
// Problem Description:
// Given an integer array (of length n), find and return all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important.
// Input format :
// Line 1 : Size of array
// Line 2 : Array elements (separated by space)

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

int subset(int a[],int n,int output[][200]){
	
	if(n<=0){
		output[0][0]=0;
		return 1;
	}
	
	int smalloutput = subset(a+1,n-1,output);
	
	for(int i=0; i<smalloutput;i++){
		int num = output[i][0]+1;         // WE CONSIDERED A VARIABLE AS NUM FOR EASY UNDERSTANDING OF CODE
		output[i+smalloutput][0] = num;
		for(int j=num;j>1;j--){
			output[i+smalloutput][j] = output[i][j-1];
		} 
		output[i+smalloutput][1] = a[0];
	}
	
	return 2*smalloutput;
}



int main(){
	int n,i;
	cout<<"enter the size of array ";
	cin>>n;
	int a[n],output[200][200];
	cout<<"enter the elements inside the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int result=subset(a,n,output);
	for(i=0;i<result;i++){
		for(int j=0;j<output[i][0];j++){
			cout<<output[i][j+1]<<" ";
        }
        cout<<endl;
	}
	
}
