/* 
When I wrote this, only God and I understood what I was doing
Now, God only knows
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define tc ll t; cin>>t; while(t--)
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

const int mod = 1'000'000'007;
const int N = 3e5;

vi v[N];
int a[N];



/* ========== YOUR CODE HERE ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    vector<int> v1, v2;
    int f = 0; int s = 0;
    int t; cin>>t;
    for(int k = 0; k < t; k++) {
        int m, n; cin>> m >> n; int lead = 0;
        if(m>n){
            lead = m - n;
            v1.pb(lead);
        }else{
            lead = n - m;
            v2.pb(lead);
        }
    }

    //Find max element of v1 
    int max1 = 0;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] > max1) max1 = v1[i];
    }

    //Find max element of v2
    int max2 = 0;
    for(int i = 0; i < v2.size(); i++) {
        if(v2[i] > max2) max2 = v2[i];
    }

    if(max1 > max2) cout<<1<<" "<<max1<<endl;
    else cout<<2<<" "<<max2<<endl;


       
    



    



    return 0;
}