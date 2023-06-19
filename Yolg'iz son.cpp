/******************************************************************************

                 Robocontest.uz Yolg'iz son masalasi yechimi c++ da 

*******************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n,s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
				if(a[i]==a[j])
				s++;
		}
		if(s==1){
			cout<<a[i];
		}
		s=0;
	}
}