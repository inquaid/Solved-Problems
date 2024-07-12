#include<bits/stdc++.h>
using namespace std;

typedef long long              ll;
typedef double                 dl;
typedef vector<int>            vi;
typedef vector<ll>             vl;
typedef map<int,int>           mi;
typedef map<int,vector<int> >  mvi;
typedef map<ll,ll>             ml;
typedef pair<int,int>          pi;
typedef pair<ll,ll>            pl;
typedef vector<pi>             vpi;
typedef vector<pl>             vpl;
typedef set<int>               si;
typedef set<ll>                sl;

const double PI=          acos(-1);
const int MOD=            1000000007;
const int infinity=       (2147483647);

#define pb                push_back
#define ppb               pop_back
#define mp                make_pair
#define ff                first
#define ss                second
#define ms(a,b)           memset(a,b,sizeof(a))
#define mem(a,n,b)        for(int ind=0;ind<n;ind++){a[int]=b;}
#define mem2d(a,n,m,b)    for(int i=0;i<n;i++){for(int j=0;j<m;j++){a[i][j]=b;}}
#define rep(n,i)          for(int i=0;i<n;i++)
#define rev(n,i)          for(int i=n-1;i>=0;i--)
#define rep1(n,i)         for(int i=1;i<=n;i++)
#define stlloop(v)        for(typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define sc                scanf
#define pf                printf
#define sf(a)             scanf("%d",&a)
#define sfl(a)            scanf("%lld",&a)
#define sff(a,b)          scanf("%d%d",&a,&b)
#define sffl(a,b)         scanf("%lld%lld",&a,&b)
#define sfff(a,b,c)       scanf("%d%d%d",&a,&b,&c)
#define sfffl(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c)
#define EPS               10E-10
#define sqr(x)            ((x)*(x))
#define all(a)            a.begin(),a.end()
#define rall(a)           a.rbegin(),a.end()
#define endl              '\n'
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*(b/gcd(a,b)))
#define intlimit          2147483647
#define fios();           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file();           freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define testcase(t)       for(int z=1;z<=t;z++)
#define printcase         printf("Case %d: ",z)
#define linecase          printf("Case %d:\n",z)
#define caseprint         cout<<"Case "<<z<<": "

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=n;i>m;i--){
        cout<<i<<' ';
    }
    for(int i=1;i<=m;i++){
        cout<<i<<' ';
    }
    cout<<endl;
    return;
}

int main(){
    fios();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;
}