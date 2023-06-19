/******************************************************************************

                 Robocontest.uz Max masalasi yechimi c++ da 

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


int main()
{
   long int a[5],s=0;
   cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
   sort(a,a+5);
   for(int i=0;i<5;i++){
      s+=a[i];
   }
  cout<<s-a[4]<<" "<<s-a[0];
  return 0;
}