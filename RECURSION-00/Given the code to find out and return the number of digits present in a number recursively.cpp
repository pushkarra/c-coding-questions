// Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.

#include<iostream>
#include<cmath>
using namespace std;

int digits(int x){
	
	if(x/10==0){
		return 1;
	}else{
		return 1+digits(x/10);
	}
}

int main(){
	int x;
	cin>>x;
	int result=digits(x);
	cout<<result;
	
	
}