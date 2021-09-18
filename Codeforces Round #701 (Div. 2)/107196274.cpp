/*
    Contest Name : Codeforces Round #701 (Div. 2)
    Problem Title : A - Add and Divide
    Problem Url : https://codeforces.com/contest/1485/problem/A
    Verdict : Wrong answer on pretest 2
    Time : 15 ms
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
        int a, b;
        cin >> a >> b;

        int ans = 1e9;
        if(a < b) cout << "1\n";
        else if(a == b) cout << "2\n";
        else{
            rep1(i, b, sqrt(a)){
                if(i == 1) continue;
                int cnt = i - b;
                int tmp = a;
                while(tmp != 0){
                    tmp /= i;
                    cnt++;
                }
                ans = min(ans, cnt);
            }
            cout << ans << '\n';
        }
    }
}