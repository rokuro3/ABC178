#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cal(ll x1, ll y1, ll x2, ll y2){
    return  abs(x1 - x2) + abs(y1 - y2);
}
void solve(long long N, std::vector<long long> x, std::vector<long long> y){
    ll ans = cal(x.at(0), y.at(0), x.at(1), y.at(1));
    for(ll i=0; i<N; i++){
        for(ll j=i+1; j<N; j++){
            ll tmp =  cal(x.at(i), y.at(i), x.at(j), y.at(j));
            if (tmp > ans) ans = tmp;
        }
    }
    cout << ans << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
    }
    solve(N, std::move(x), std::move(y));
    return 0;
}
