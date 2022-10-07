
/*

Jai Bhawani!

*/



#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;


#define F                   first
#define S                   second
#define pb                  push_back
#define int					long long
#define pq_max        		priority_queue <int>
#define pq_min       		priority_queue <int, vi, greater<int>>
#define bug(...)       		__f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       		for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      		for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  		for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define lcm(a,b) 			(a*(b/__gcd(a,b)))
#define ull 				unsigned long long
#define vl 					vector<int>
#define vvl 				vector<vector<int>>
#define vul 				vector<ull>
#define vvul 				vector<vector<ull>>
#define mm 					1000000007
#define ull 				unsigned long long
#define uset 				unordered_set
#define umap 				unordered_map
#define mset 				multiset
#define mmap 				multimap
#define GARUDA 		ios_base::sync_with_stdio(false);cin.tie(NULL);  
#define rep(n) 				for(int i=0;i<n;i++)
#define lop(a,n) 			for(int a=0;a<n;a++)
#define REP(a,i,n)			for(int a=i;a<n;a++)
#define precise(x,y) 		fixed<<setprecision(y)<<x
#define setbits(x) 			__builtin_popcountll(x)
#define ordered_set 		tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}


const int N = 200005;


ull power(ull x, ull y){
   if(y==0){
       return 1;
    }
   ull temp=power(x,y/2);
    temp=temp*temp;
    if(y%2!=0){
   temp=x*temp;
   }
   return temp;
}


int factorial(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}


int nCr(int n, int r) {
    int denominator=factorial(r);
    int numerator=1;
    for(int i=n;i>=n-r+1;i--){
        numerator*=i;
    }
    return numerator/denominator;
}


void solve(){

    int n;
    string ans = "";
    vector <string> v;
    map <string, int> m;
    cin>>n;

    rep(n){
        string s;
        cin>>s;
        v.push_back(s);
        m[s]++;
    }

    rep(n){

        bool mil_gaya = false;

        for(int j=0 ; j <v[i].length() ; j++){
            string s1 = v[i].substr(0,j);
            string s2 = v[i].substr(j,v[i].length()-j);
            if(m.find(s1) != m.end() && m.find(s2) != m.end()){
                mil_gaya = true;
                break;
            }
        }

        if(mil_gaya){
            ans += '1';
        }
        else{
            ans += '0';
        }
    }

    cout<<ans<<endl;

}

int32_t main(){

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
*/

    int testcases=1;
    cin>>testcases;
    for(int testcase_no=1;testcase_no<=testcases;testcase_no++){
        solve();
    // cout<<"Case #"<<testcase_no<<": "<<"OUTPUT"<<endl;
    }
    return 0;
}