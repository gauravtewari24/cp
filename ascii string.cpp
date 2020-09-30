#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    int n=1;
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        n++;
    }
    if(n>2)
    return false;
    else
    {
        return true;
    }
    
}
int main()
{
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    string s2="";
    vector <int> prime;
    for(int i=0;i<s1.length();i++)
    {
        if(isPrime(int(s1[i])))
        {
            prime.push_back(int(s1[i]));
        }
    }
    sort(prime.begin(),prime.end());
    for(int i=0;i<prime.size();i++)
    {
        s2.push_back(char(prime[i]));
    }
    
    vector <int> Notprime;
    for(int i=0;i<s1.length();i++)
    {
        if(!isPrime(int(s1[i])))
        {
            Notprime.push_back(int(s1[i]));
        }
    }
    sort(Notprime.begin(),Notprime.end());
    for(int i=Notprime.size()-1;i>=0;i--)
    {
        s2.push_back(char(Notprime[i]));
    }
    for(int i=0;i<s2.length();i++)
    cout<<s2[i];
    return 0;
}
