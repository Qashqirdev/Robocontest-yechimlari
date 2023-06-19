// Robocontest.uz Tenglik masalasi yechimi 4%
#include <iostream>

using namespace std;

int main()
{
   int x1,y1,x2;
   cin>>x1>>y1>>x2;
  if(x1+y1==x2 || x1+x2==y1 || x2+y1==x1){
    cout<<"YES";
  }else{
   	cout<<"NO"; 
  }

    return 0;
}
