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
vi ar[100001];
vi res;
int in[100001];
 
bool kahn(int n)
{
    priority_queue<int, vector<int> , greater<int> > q;
    
    f(i,1,n+1)
    {
        if(in[i]==0)q.push(i);
    }
    while(!q.empty())
    {
        int a=q.top();
        res.push_back(a);
        
        q.pop();
        for(int child: ar[a])
        {
            in[child]--;
            if(in[child]==0)q.push(child);
        }
        
    }
    return res.size()==n;
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
   	 
	ll t,n,a=0,b=0,m,d,i,j,k,c,sum;
    cin>>n>>m;
    
    f(i,0,m)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        in[b]++;
    }
    
    if(!kahn(n))
    {
        cout<<"Sandro fails.";
        
    }
    else
    {
        for(int ch: res)
        {
            cout<<ch<<" ";
        }
    }
    
	
	
}
 