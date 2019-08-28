#include <bits/stdc++.h>
using namespace std;

int main(){
		
  	int amin=INT_MAX;
  	int amax=INT_MIN;
  
  	vector<int> a(10,8); //initialised a vector with 10 values with the value "8"
  	vector<int> b{6464,4664866,5466646,431355,18646};
  	
  	for(vector<int>::iterator i=b.begin();i<b.end();i++)
    {	
     	amin=min(amin,*i);
      	amax=max(amax,*i);
    }
  	
  	cout<<"The minimum and maximum values of the vector are: "<<amin<<" "<<amax;
	return 0;  
}
