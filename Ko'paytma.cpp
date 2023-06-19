/******************************************************************************

                 Robocontest.uz Ko'paytma masalasi yechimi c++ da 

*******************************************************************************/

#include<bits/stdc++.h>

#define int long long

using namespace std;

int32_t main(){

    int n, m = 0;

    cin >> n;

    if (n == 0) return cout << -1,0;

    if (n > 0){

        int x = sqrt(n);

        if (x * x == n) m = 1;

    }

    if (n < 0) n = -n;

    int i = 2, j = 1, p = 1;

    while (n > 1){

        while (n % i == 0){

            j++; n /= i;

        } p *= j; j = 1; i++;

    }

    return cout << p + m, 0;

}