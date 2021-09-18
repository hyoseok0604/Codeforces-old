/*
    Contest Name : Codeforces Round #680 (Div. 2, based on Moscow Team Olympiad)
    Problem Title : C - Division
    Problem Url : https://codeforces.com/contest/1445/problem/C
    Verdict : Wrong answer on pretest 3
    Time : 30 ms
    Memory : 100 KB
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
		lli p, q;
        cin >> p >> q;
        if(p % q != 0) cout << p << '\n';
        else{
            vector<lli> v;
            v.push_back(1);
            lli z = sqrt(q);
            rep(i, 2, z){
                if(q % i == 0) v.push_back(i), v.push_back(q / i);
            }

            if(q % z == 0) v.push_back(z);
            sort(v.begin(), v.end());

            lli x = p / q;
            bool f = true;
            rep2(i, v.size() - 1, 0){
                if((x * v[i]) % q != 0){
                    f = false;
                    cout << x * v[i] << '\n';
                    break;
                }
            }

            if(f) cout << "1\n";
        }
    }
}