/*
    Contest Name : Codeforces Round #709 (Div. 2, based on Technocup 2021 Final Round)
    Problem Title : D - Playlist
    Problem Url : https://codeforces.com/contest/1484/problem/D
    Verdict : Wrong answer on pretest 2
    Time : 31 ms
    Memory : 200 KB
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



void f(int vtx){

}

int main(){
    fastIO();

    TC{
        int n;
        cin >> n;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        int gap[n];
        mset(0, gap);

        bool isRm[n];
        mset(0, isRm);

        queue<int> q;
        vector<int> ans;
        rep(i, 0, n) q.push(i);

        while(!q.empty()){
            int now = q.front() % n;
            int next = (now + gap[now] + 1) % n;
            q.pop();

            // cout2(now, next);

            if(isRm[now] || isRm[next]){
                // cout << "A\n";
                continue;
            }

            if(__gcd(a[now], a[next]) == 1){
                q.push(now);
                gap[now]++;
                isRm[next] = true;
                ans.push_back(next);
            }
        }

        cout << ans.size() << ' ';
        rep(i, 0, ans.size()) cout << ans[i] + 1 << ' ';
        cout << '\n';
    }
}