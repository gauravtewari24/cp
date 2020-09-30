#include<bits/stdc++.h>
using namespace std;
int c=1;
string fun(string s1)
{
    c=0;
    string s2="";
    for(int i=0;i<s1.length();i+=1)
    {
        if(s1[i]==s1[i+1])
        {
            i++;
            c++;
            continue;
        }
        else if(s1[i]!=s1[i+1])
        s2+=s1[i];
        else 
        {
            s2+=s1[i];
        }
        
    }
    return s2;
}
int main()
{
    string s1,s2;
    getline(cin,s1);
 
    while(c)
    s1=fun(s1); 
    if(s1.length()==0)
    cout<<"Empty String";
    else
    for(int i=0;i<s1.length();i++)
    cout<<s1[i];
    return 0;
}