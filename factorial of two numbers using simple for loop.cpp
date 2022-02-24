#include <iostream>
using namespace std;

int fact(int num){
	int mul=1;
	for(int i=num;i>=1;i--){
		mul=mul*i;
	}
	return mul;
}

int main(){
	int a,c;
	cout<<"enter a number ";
	cin>>a;
	c=fact(a);
	cout<<"the factrial of number is "<<c;
	return 0;
}