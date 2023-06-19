/******************************************************************************

                 Robocontest.uz Bayroq masalasi yechimi c++ da 

*******************************************************************************/

#include<iostream>                                                                                                      

using namespace std;

int main()

{

long int i=1,s=0,fib=2,r,n; 

    cin>>n;

    while (i<n)

{

    r=s+fib; 

  s=fib; 

  fib=r;

    i=i+1;

}

    cout<<fib;

    return 0;

}