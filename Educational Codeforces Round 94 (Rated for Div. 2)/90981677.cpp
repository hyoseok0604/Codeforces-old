/*
    Contest Name : Educational Codeforces Round 94 (Rated for Div. 2)
    Problem Title : E - Clear the Multiset
    Problem Url : https://codeforces.com/contest/1400/problem/E
    Verdict : Wrong answer on test 3
    Time : 31 ms
    Memory : 300 KB
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

int main(){
    fastIO();

    int n;
    cin >> n;

    int arr[n];
    vector<int> v(n);
    rep(i, 0, n) cin >> arr[i], v[i] = arr[i];

    sort(arr, arr + n);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    // 연속된 값을 제거하는 것이 이득인 경우 r - l + 1 - min이 나타나는 횟수 + min 값 <= r - l + 1
    // 연속된 구간에서 count의 min 값 - min이 나타나는 횟수 <= 0

    int ans = 0;

    map<int, int> m;

    // 0을 제외한 모든 수를 한번씩 제거를 했다고 가정한다면
    rep(i, 0, n){
        int tmp = arr[i];
        int cnt = 0;
        while(i < n && tmp == arr[i]){
            i++;
            cnt++;
        }
        m[tmp] = cnt;
        i--;
    }

    // 0을 제거하는 과정
    int p = 0;
    int zc = m[p];
    ans += zc;
    m[p] -= zc;
    while(zc != 0){
        p++;
        zc = min(zc, m[p]);
        m[p] -= zc;
    }

    rep(i, 0, v.size()){
        if(m[v[i]] == 0) continue;

        int l = i, r = i;
        while(r + 1 < v.size() && m[v[r+1]] != 0 && v[r] == v[r+1] - 1){
            r++;
        }

        // [l, r] 연속 구간

        int mn = 1e9;
        int mc = 1;
        rep1(i, l, r){
            if(mn == m[v[i]]) mc++;
            if(mn > m[v[i]]) mn = m[v[i]], mc = 1;
        }

        ans += r - l + 1;
        ans -= max(0, mc - mn);

        i = r;
    }

    cout << ans;
}