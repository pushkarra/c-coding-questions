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


int modified_subsequences(int n, string output[]){
	
	if(n==0){
		output[0]="";
		return 1;
	}
	
	int r = n%10;
	n =n/10;
	int smallOutputSize = modified_subsequences(n,output);
	string input = number_string(r);
	
	int ans_size = smallOutputSize*(input.size());
	string temp[ans_size];
	int k=0;
	
	for(int i=0;i<smallOutputSize;i++){
		for(int j=0;j<input.size();j++){
			temp[k] = output[i]+input[j];
			k++;
		}
	}
	
	for(int i=0; i<ans_size;i++){
		output[i] = temp[i];
	}
	
	return ans_size;
	
}



int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	string* output = new string[100];      
	
	int result = modified_subsequences(n,output);
	
	cout<<"The subsequences of the string are: ";
	for(int i=0;i<result;i++){                  
		cout<<output[i]<<endl;
	}
	
	cout<<result;
}
