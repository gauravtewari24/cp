#include <bits/stdc++.h>

using namespace std;

//mem(a, b) memset(a, (b), sizeof(a))

typedef long long ll;

#define f(i,a,b) for (ll i=a ; i<b ; i++)
#define fr(i,a,b) for (ll i=a ; i>=b ; i--)

#define faster ios::sync_with_stdio(0);cin.tie(0);
typedef pair<int, int> p;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<p> vii;
typedef vector<vi> vvi;
typedef map<int,int> mp;
typedef set<int> se;
typedef multiset<int> MSETI;


// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal


// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


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
char a[10001][10001];
int vis[10001][10001];
int n,m;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isValid(int x,int y){
    if(x<1||y<1||x>n||y>m)return false;
    
    if(vis[x][y]==true||a[x][y]=='#')return false;
    
    return true;
    
}

void dfs(int x,int y)
{
    vis[x][y]=1;
    
    f(i,0,4)
    {
        if(isValid(x+dx[i],y+dy[i]))
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
}

int main()
{
    faster

	//freopen("input.txt","r",stdin);
	//g++ myC.cpp -o myC
        //myC
	/*ofstream myfile;
   	myfile.open ("example.txt");
  	myfile << "Writing this to a file.\n";
 	 myfile.close();*/
   	 

    cin>>n>>m;
    
    f(i,0,n)f(j,0,m)cin>>a[i][j];
    
    int c=0;
    f(i,1,n+1)
    {
        f(j,1,m+1)
        {
            if(vis[i][j]== false&&a[i][j]=='.')
            {dfs(i,j);c++;}
            
        }
        
    }
    
	cout<<c;
	
}
