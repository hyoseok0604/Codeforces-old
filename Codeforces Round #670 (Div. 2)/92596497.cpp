/*
    Contest Name : Codeforces Round #670 (Div. 2)
    Problem Title : B - Maximum Product
    Problem Url : https://codeforces.com/contest/1406/problem/B
    Verdict : Accepted
    Time : 62 ms
    Memory : 1400 KB
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
    fastIO();

    TC{
        int n;
        cin >> n;

        int zero = 0, p = 0, m = 0;
        int arr[n];
        vector<int> ap;
        vector<int> am;
        rep(i, 0, n){
            cin >> arr[i];
            if(arr[i] == 0) zero++;
            if(arr[i] < 0) m++, am.push_back(arr[i]);
            if(arr[i] > 0) p++, ap.push_back(arr[i]);
        }

        lli ans = LLONG_MIN;

        sort(am.begin(), am.end());
        sort(ap.begin(), ap.end());

        for(int k = 0 ; k <= 5 ; k++){
            if(p >= 5 - k && m >= k){
                lli tmp = 1;
                if((5 - k) % 2 == 0){ // 결과 음수
                    for(int i = 0 ; i < k ; i++){
                        tmp *= am[am.size() - 1 - i];
                    }
                    for(int i = 0 ; i < 5 - k ; i++){
                        tmp *= ap[i];
                    }
                }else{ // 결과 양수
                    for(int i = 0 ; i < k ; i++){
                        tmp *= am[i];
                    }
                    for(int i = 0 ; i < 5 - k ; i++){
                        tmp *= ap[ap.size() - 1 - i];
                    }
                }
                ans = max(ans, tmp);
            }
        }

        if(zero > 0){
            ans = max(ans, 0LL);
        }

        cout << ans << '\n';
    }
}