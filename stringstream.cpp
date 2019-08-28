// C++ program to remove spaces using stringstream 
#include<bits/stdc++.h> 
using namespace std; 

void count(string str){
	stringstream ss(str);
  	string word;
  	long long int count=0;
  	while(!ss.eof()){
    	ss>>word;
      	count++;
    }
  	cout<<"The count is : "<<count<<endl;
}

void frequency(string str){
	stringstream ss(str);
  	string temp;
  	map<string,int> M;
  	while(!ss.eof()){
    	ss>>temp;
      	M[temp]++;
    }
  	for(auto i:M)
      cout<<i->first<<" = "<<i->second<<endl;
}

void removespace(string str){
	stringstream ss(str);
  	string temp,word;
  	
  	while(!ss.eof()){
  		ss>>temp;
      	word+=temp;
    }
  	cout<<word<<endl;
}

int main(){
string s="Raja Reddy is the best there ever was";
count(s);
frequency(s);
removespace(s);

return 0;
}
