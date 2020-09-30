#include<bits/stdc++.h>
using namespace std;
int main()
{
   string numbers = "0123456789",
lower_case = "abcdefghijklmnopqrstuvwxyz",
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
special_characters = "!@#$%^&*()-+";
int n;
string s1;
cin>>n;
getline(cin,s1);
int n=0,l=0,u=0,s=0,c=0;
if(n<6)
c++;
bool k=true;
for(int i=0;i<s1.length();i++)
{
   if(k==false)
   break;
    for(int j=0;j<numbers.length();j++)
    {
        if(s1[i]==numbers[j])
        k=false;
    }
    
}

    return 0;
}