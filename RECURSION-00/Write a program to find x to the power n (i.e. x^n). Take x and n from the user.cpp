// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
// Do this recursively.

#include<iostream>
#include<cmath>
using namespace std;

int exp(int a, int b){

	if(b==0){
		return 1;
	}else{
		return (a* exp(a,b-1));
	}
}

int main(){
	
	int x,n;
	cin>>x>>n;
	
	int result=exp(x,n);
	cout<<result;
	

}