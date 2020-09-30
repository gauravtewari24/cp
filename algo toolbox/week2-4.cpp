#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll operation(ll a, ll b, char op)
{
    if (op == '*')
        return a * b;
    else if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
}

int main(){
    string s;
    cin>>s;

    ll num=(s.length()+1)/2;
    ll minimum[num][num];
    ll maximum[num][num];

    memset(minimum, 0, sizeof(minimum)); // initialize to 0
    memset(maximum, 0, sizeof(maximum));

    for (ll i = 0; i < num; i++){
        minimum[i][i]=s[i*2]-48;
        maximum[i][i]=s[i*2]-48;
    }
    for (ll s1 = 0; s1 < num-1; s1++){
        for (ll i = 0; i < num - s1 -1; i++){
            ll j = i + s1 + 1;
            ll minimumValue = LLONG_MAX;
            ll maximumValue = LLONG_MIN;

            for (ll k = i; k < j; k++){

                ll a = operation(minimum[i][k], minimum[k + 1][j], s[2 * k + 1]);
                ll b = operation(minimum[i][k], maximum[k + 1][j], s[2 * k + 1]);
                ll c = operation(maximum[i][k], minimum[k + 1][j], s[2 * k + 1]);
                ll d = operation(maximum[i][k], maximum[k + 1][j], s[2 * k + 1]);

                minimumValue = min(minimumValue, min(a, min(b, min(c, d))));
                maximumValue = max(maximumValue, max(a, max(b, max(c, d))));
            }

            minimum[i][j] = minimumValue;
            maximum[i][j] = maximumValue;

        }    
    }
    cout << maximum[0][num - 1];
}