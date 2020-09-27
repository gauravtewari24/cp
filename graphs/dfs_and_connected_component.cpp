#include <bits/stdc++.h>

using namespace std;

//mem(a, b) memset(a, (b), sizeof(a))

typedef long long ll;

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


// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)

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
int vis[100001];
vector<int> v[100001];



void dfs(int x)
{
	vis[x]=1;

	for(int ch : v[x])
	{
		if(!vis[ch])
		dfs(ch);
	}
}
int main()
{
    faster
  	 
	ll t,n,a=0,m,b=0,i,j,k,c,sum;
	cin>>n>>m>>k;

	f(i,0,m)
	{
		cin>>a>>b;
		a--;b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int size=0;
//cout<<v[0][1];
	
	f(i,0,n)
	{
		if(!vis[i])
		{
			dfs(i);
			//cout<<size;
			size++;
		}
	}
	//cout<<vis[2];
	
	if(size>k)
	cout<<"-1";
	else
	{
		cout<<m-n+k;
	}

	
    	
    	
    	
    
    
	
	
}
