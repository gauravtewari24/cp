#include<bits/stdc++.h>
typedef long long ll;

#define f(i,a,b) for (ll i=a ; i<b ; i++)
#define fr(i,a,b) for (ll i=a ; i>=b ; i--)

#define faster ios::sync_with_stdio(0);cin.tie(0);


 
using namespace std;
 struct edge{
   int a;
   int b;
   int w;
 };
edge ar[100001];
 int pa[100001];
int find(int x){
    if(pa[x]==-1)return x;
    
    return pa[x]=find(pa[x]);
}  
void merge(int x,int y){
    
    pa[x]=y;
}
bool comp(edge x,edge y){
    return x.w<y.w;
} 
int main()
{
    int n,m,w,a,b;
	cin>>n>>m;
	
	f(i,1,n+1){
	    pa[i]=-1;
	}
	f(i,0,m){
	    cin>>ar[i].a>>ar[i].b>>ar[i].w;
	}
	
	int sum=0;
	sort(ar,ar+m, comp);
	
	f(i,0,m){
	    a=find(ar[i].a);
	    b=find(ar[i].b);
	    
	    if(a!=b)
	    {
	        sum+=ar[i].w;
	        merge(a,b);
	    }
	}
	cout<<sum;
	
}