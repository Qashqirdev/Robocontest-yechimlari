/******************************************************************************

                 Robocontest.uz Dasturchilar kuni masalasi yechimi c++ da 

*******************************************************************************/

#include <iostream>

#include <math.h>

using namespace std;

int main()

{

  unsigned int n,m;

  cin>>n;

  m=n;

  int a[4];

  for (int i=0; i<4; i++)

  {

    a[i]=0;

  }

  for (int i=3; i>=0; i--)

  {

    a[i]=n%10;

    n=n/10;

  }

  if ((m%4==0 && m%100!=0) || (m%400==0))

  {

    cout<<"12/09/";

    for (int i=0; i<4; i++)

    {

      cout<<a[i];

    }

  } 

  else

  {

    cout<<"13/09/";  

    for (int i=0; i<4; i++)

    {

      cout<<a[i];

    }

  } 

  return 0;

}