/*
    Contest Name : Codeforces Round #722 (Div. 2)
    Problem Title : B - Sifid and Strange Subsequences
    Problem Url : https://codeforces.com/contest/1529/problem/B
    Verdict : Accepted
    Time : 78 ms
    Memory : 900 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    TC{
        int n;
        cin >> n;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        sort(a, a + n);

        vector<int> negz;
        int pos = -1;
        
        rep(i, 0, n){
            if(a[i] <= 0) negz.push_back(a[i]);
            else{
                pos = a[i];
                break;
            }
        }
        
        if(pos == -1) cout << negz.size() << '\n';
        else{
            bool f = true;
            negz.push_back(pos);
            rep(i, 0, negz.size()){
                if(abs(negz[i] - negz[i-1]) < pos) f = false;
            }

            if(f) cout << negz.size() << '\n';
            else cout << negz.size() - 1 << '\n';
        }
    }
}