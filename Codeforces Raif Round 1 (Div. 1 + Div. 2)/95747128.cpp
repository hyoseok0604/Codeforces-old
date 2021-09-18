/*
    Contest Name : Codeforces Raif Round 1 (Div. 1 + Div. 2)
    Problem Title : B - Belted Rooms
    Problem Url : https://codeforces.com/contest/1428/problem/B
    Verdict : Accepted
    Time : 46 ms
    Memory : 1300 KB
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

        string s;
        cin >> s;

        bool able[n];
        mset(0, able);
        bool left = true;
        bool right = true;

        rep(i, 0, s.length()){
            if(s[i] == '-'){
                able[i] = true;
                able[(i+1)%n] = true;
            }

            if(s[i] == '<'){
                right = false;
            }

            if(s[i] == '>'){
                left = false;
            }
        }

        if(right || left) cout << n << '\n';
        else{
            int ans = 0;
            rep(i, 0, n){
                if(able[i]) ans++;
            }

            cout << ans << '\n';
        }
    }
}