#include <bits/stdc++.h>

using namespace std;
int fibonacci(int n) {
   int a = 1, ta, b = 1, tb,
       c = 1, rc = 0, tc, d = 0, rd = 1;
 
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            tc = rc;
            rc = rc*a + rd*c;
            rd = tc*b + rd*d;
        }
 
        ta = a; tb = b; tc = c;
        a = a*a  + b*c;
        b = ta*b + b*d;
        c = c*ta + d*c;
        d = tc*tb+ d*d;
 
        n = n / 2;
    }
    return rc;
 }
 int main(int argc, char const *argv[])
 {
     int ans=fibonacci(45);
     cout<<ans;
     return 0;
 }