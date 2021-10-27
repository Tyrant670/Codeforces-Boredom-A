#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    vector<ll> v(100005,0);
    //map<int,int> m;
    int mx=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v[arr[i]]++;
        mx=max(mx,arr[i]);
    }
    //sort(arr,arr+n,greater<int>());
    //int cnt=0;

    vector<ll> vr(100005,0);
    vr[0]=0;
    vr[1]=v[1];
    for(ll i=2;i<=100000;i++){
        //cnt+=arr[i];
        vr[i]=max(vr[i-1],vr[i-2]+(v[i]*i));
    }

    cout<<vr[mx]<<endl;

}


int main()
{
    ll tc;
    //cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }

    return 0;
}