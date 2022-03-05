#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

bool palindrome(string str, int start, int end){
	if(end-start==1 || end-start==0){
		return 1;
	}
	else{
		if(str[start]!=str[end]){
			return 0;
		}else{
			return palindrome(str,start+1,end-1);
		}
	}
}

int main(){
	string str;
	cin>>str;
	int s = str.length();
	cout<<s<<endl;
	
	int result=palindrome(str,0,s-1);
	
	if(result){
		cout<<"true";
	}else{
	    cout<<"false";
	}
	
}