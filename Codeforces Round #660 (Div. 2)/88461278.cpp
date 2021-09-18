/*
    Contest Name : Codeforces Round #660 (Div. 2)
    Problem Title : A - Captain Flint and Crew Recruitment
    Problem Url : https://codeforces.com/contest/1388/problem/A
    Verdict : Accepted
    Time : 46 ms
    Memory : 3600 KB
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
#define rep(i, a, b) for(int i = a ; i < b ; i++)
#define repR(i, a, b) for(int i = a ; i > b ; i--)

int main(){

    TC{
        int n;
        cin >> n;

        if(n <= 30) cout << "NO\n";
        else{
            if(n == 36) cout << "YES\n5 6 10 15\n";
            else if(n == 44) cout << "YES\n6 7 10 21\n";
            else if(n == 40) cout << "YES\n6 9 10 15\n";
            else cout << "YES\n6 10 14 " << n - 6 - 10 - 14 << '\n';
        }
    }
}