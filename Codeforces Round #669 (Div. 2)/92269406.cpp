/*
    Contest Name : Codeforces Round #669 (Div. 2)
    Problem Title : C - Chocolate Bunny
    Problem Url : https://codeforces.com/contest/1407/problem/C
    Verdict : Idleness limit exceeded on pretest 1
    Time : 0 ms
    Memory : 0 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    // fastIO();

    int n;
    cin >> n;

    vector<int> v;

    rep(i, 1, n){
        int mx = 0;
        int mxcnt = 0;

        rep1(j, i + 1, n){
            cout << "? " << i << ' ' << j;
            cout.flush();

            int k;
            cin >> k;
            if(k > mx) mx = k, mxcnt = 1;
            else if(k == mx) mxcnt++;
        }

        if(n - mx == mxcnt) v.push_back(mx);
        else v.push_back(n);
    }

    bool used[n+1];
    mset(0, used);

    cout << "! ";
    rep(i, 0, v.size()){
        cout << v[i] << ' ';
        used[v[i]] = true;
    }

    rep1(i, 1, n){
        if(used[i] == false){
            cout << i;
        }
    }

    cout.flush();
}