#include <bits/stdc++.h>

using namespace std;

vector<int> ar[100001];
int dis[100001],vis[100001];

void bfs(int node)
{
	vis[node]=1;
	queue<int> q;
	q.push(node);
	dis[node]=0;

	while(!q.empty())
	{
		int cur=q.front();
		q.pop();

		for(int child : ar[cur] )
		{
			if(vis[child]==0)
			{
				vis[child]=1;
				q.push(child);
				dis[child]=dis[cur]+1;
			}
			
		}
	}	
	

}

int main()
{
    
  	 
	int t,n,a=0,b=0,m,i,j,k,c,sum;
    cin>>t;
	while(t--)
	{
	cin>>n>>m;
	for(i=1;i<=n;i++)ar[i].clear(),vis[i]=0;
	
	while(m--)
		cin>>a>>b,
		ar[a].push_back(b),
		ar[b].push_back(a);
	

	bfs(1);

	cout<<dis[n]<<"\n";

	}
    	
    	
    
    
	
	
}
