#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rite freopen("output.txt","w",stdout)
#define read freopen("input.txt","r",stdin)
bool isodd(int n){
	return (n&1);
}
int getbit(int n,int i){
	int mask=(1<<i);
	int bit=(n&mask)>0?1:0;
	return bit;
}
void setbit(int &n,int i){
	int mask=(1<<i);
	n=(n | mask);
}
void clearbit(int &n,int i){
	int mask=~(1<<i);
	n=n&mask;
}
void updatebit(int &n,int i,int v){
	int mask=~(1<<i);
	int cleared_n= n&mask;
	n=cleared_n|(v<<i);
}
void clearlastbits(int &n,int i){
	//i is the number of bots getting cleared
	int mask=(-1<<i);
	n= n&mask;
}
void clearrangebits(int &n,int i,int j){
	int ones=(~0);
	int a=ones<<(j+1);//111100000 style mask
	int b=~((~0)<<i); //000000111 style mask
	int mask=a|b;     //111100111 style mask 
	n=n&mask;
}
void replacebits(int &n,int m,int i, int j){
	clearrangebits(n,i,j);
	n= (n | (m<<i));
}

vector<int> decimaltobinary(int n){
	std::vector<int> v;
	while(n>0){
		int t;
		t=getbit(n,0);
		v.push_back(t);
		n=n>>1;
	}
	reverse(v.begin(), v.end());
	return v;
}

int countbits(int n){
	int ans=0;
	while(n>0){
		n=n&(n-1);
		ans++;
	}
	return ans;
}

ll int pow_opt(int a,int n){
	ll int ans=1;
	while(n>0){
		int last_bit=(n&1);
		if(last_bit){
			ans=ans*a;
		}
		a=a*a;
		n=n>>1;
	}
	
	return ans;
}
void multipily(int *a,int &n,int no){
	int carry=0;
	for (int i = 0; i < n; ++i)
	{
		int product=a[i]*no+carry;
		a[i]=product%10;
		carry=product/10;
	}
	while(carry){
		a[n]=carry%10;
		carry=carry/10;
		n++;
	}
}
void big_factorial(ll int number){
	int *a=new int [100000000];
	for (int i = 0; i < 100000000; ++i)
	{
		a[i]=0;
	}
	a[0]=1;
	int n=1;
	for (int i = 2; i <=number; ++i)
	{
		multipily(a,n,i);
	}
	for (int i = n-1; i >=0; i--)
	{
		cout<<a[i];
	}
}

int main()
{
	
	#ifndef ONLINE_JUDGE
    read;
    rite;
    #endif

	int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        ll val_a = bitset<64>(a).to_ullong();
        ll val_b = bitset<64>(b).to_ullong();
        ll val=val_a^val_b;
        string binary = bitset<64>(val).to_string();
        cout<<binary<<"\n";
        string ans=binary.substr(63-(a.length()-1),63);
        cout<<ans<<"\n";
    }
	

	return 0;
}