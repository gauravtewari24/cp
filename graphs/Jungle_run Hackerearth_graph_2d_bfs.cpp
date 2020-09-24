#include <bits/stdc++.h>

using namespace std;
//mem(a, b) memset(a, (b), sizeof(a))
typedef long long ll;
#define pb push_back
#define f(i,a,b) for (ll i=a ; i<b ; i++)
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define faster ios::sync_with_stdio(0);cin.tie(0);
typedef pair<int, int> p;
typedef vector<int> vi;
typedef vector<ll> vil;
typedef vector<string> vs;
typedef vector<p> vii;
typedef vector<vi> vvi;
typedef map<int,int> mp;
typedef set<int> se;
typedef multiset<int> MSETI;

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
struct duo{
    ll x,y;
};

bool mycomp(duo a,duo b) { return a.x < b.x ;}

bool comp(int a,int b){
	return a<b;
}
int n;
char ar[31][31];
bool vis[31][31];
int dist[31][31];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
int N;
 
bool isValid(int x , int y)
{
	if(x > N || x < 1 || y > N || y < 1) return false;
	
	if(vis[x][y] || ar[x][y] == 'T') return false;
	
	return true;
}
 
void bfs(int srcX , int srcY)
{
	queue< pair<int,int> > q;
	q.push( {srcX , srcY} );
	dist[srcX][srcY] = 0;
	vis[srcX][srcY] = 1;
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		int d = dist[x][y];
		q.pop();
		
		for(int i=0;i<4;i++)
		{
			int newX = x + dx[i];
			int newY = y + dy[i];
			
			if(isValid(newX , newY))
			{
				dist[newX][newY] = d + 1;
				vis[newX][newY] = 1;
				q.push( {newX , newY} );
			}
		}
	}
	
}
int main()
{
// Code has been written under codearena fight.
int srcX , srcY , endX , endY;
	cin>>N;
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j] == 'S') srcX = i , srcY = j;
			if(ar[i][j] == 'E') endX = i , endY = j;
		}
	}
	
	bfs(srcX , srcY);
	cout<<dist[endX][endY];
}