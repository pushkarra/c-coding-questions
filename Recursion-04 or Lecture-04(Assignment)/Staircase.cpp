// A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
// Input format :
// Integer N

// Output Format :
// Integer W

// Constraints :
// 1 <= N <= 30

// Sample Input 1 :
// 4

// Sample Output 1 :
// 7

// Sample Input 2 :
// 5

#include<bits/stdc++.h>
using namespace std;


int count(int n){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	
	return count(n-1)+count(n-2)+count(n-3);
}

int main(){
	cout<<"enter the no. of stairs ";
	int n;
	cin>>n;
	
	cout<<count(n);
}