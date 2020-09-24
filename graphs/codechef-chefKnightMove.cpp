#include<bits/stdc++.h>
typedef long long ll;

#define f(i,a,b) for (ll i=a ; i<b ; i++)
#define fr(i,a,b) for (ll i=a ; i>=b ; i--)

#define faster ios::sync_with_stdio(0);cin.tie(0);


 
using namespace std;
char ar[31][31];
bool vis[31][31];
int dist[31][31];
int dx[] = {-2 , -1 , 1 , 2,2,1,-1,-2};
int dy[] = {1 , 2, 2 , 1,-1,-2,-2,-1};
int N;
 
bool isValid(int x , int y)
{
	if(x > 8|| x < 1 || y > 8 || y < 1) return false;
	
	if(vis[x][y]) return false;
	
	return true;
}

int endx,endy;
 
int bfs(int srcX , int srcY)
{
	queue< pair<int,int> > q;
	q.push( {srcX , srcY} );
	dist[srcX][srcY] = 0;
	vis[srcX][srcY] = 1;
	if(srcX==endx&&srcY==endy)return 0;
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		int d = dist[x][y];
		q.pop();
		
		
		for(int i=0;i<8;i++)
		{
			int newX = x + dx[i];
			int newY = y + dy[i];
			
			if(isValid(newX , newY))
			{
				dist[newX][newY] = d + 1;
				vis[newX][newY] = 1;
				q.push( {newX , newY} );
			}
			if(newX==endx&&newY==endy)return dist[newX][newY];
		}
	}
	
}
int getX(char a)
{
    return a-'a'+1;
}
 
int main()
{
	int t,x,y;
	cin>>t;
	char a,b;
	while(t--)
	{
	    
	    f(i,1,9)
	    {
	        f(j,1,9)vis[i][j]=0;
	    }
	 cin>>a>>b;
	 int x=getX(a);
	 int y=b-'0';
	 
	 cin>>a>>b;
	 
	 endx=getX(a);
	 endy=b-'0';
	 
	 
	 cout<< bfs(x,y)<<endl;
	 
	 
	 
	}
	
	
}