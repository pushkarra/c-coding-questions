#include<bits/stdc++.h>
using namespace std;

string number_string(int p){
	if(p==0 || p==1){
		return "";
	}else if(p==2){
		return "abc";
	}else if(p==3){
		return "def";
	}else if(p==4){
		return "ghi";
	}else if(p==5){
		return "jkl";
	}else if(p==6){
		return "mno";
	}else if(p==7){
		return "pqrs";
	}else if(p==8){
		return "tuv";
	}else if(p==9){
		return "wxyz";
	}
}


void modified_subsequences(int n, string output){
	
	if(n==0){
		cout<<output<<endl;
		return;
	}
	
	int r = n%10;
	n =n/10;
	
	string input = number_string(r);
	
	modified_subsequences(n , input[0] + output);
	modified_subsequences(n , input[1] + output);
	modified_subsequences(n , input[2] + output);
	
}

int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	string output="";

	modified_subsequences(n,output);
		
}
	
	