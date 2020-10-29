#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
参考: https://note.mu/peacockred/n/n2c30ec6ddb72
*/

int main(){
    const ll mod = 1000000007;
    int N, M;
    cin >> N >> M;
    vector<int> S(N), T(M);
    for(int i; i < N; i++){
        cin >> S[i];
    }
    for(int i; i < M; i++){
        cin >> T[i];
    }

    vector<vector<ll>> sum(N+1, vector<ll>(M+1, 0));//(N+1)*(M+1)の0行列のようなもの
    //sum[i][j]: N = i, M = jの時の答え．ただし()は抜く
    //初期条件(sum[i][j] = 0 (i = 0 or j = 0))をみたす形で初期化
    for(int i = 1; i < N+1; i++){
        for(int j = 1; j < M+1; j++){
            //sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + dp[i][j]
            //dp[i][j] はS[i-1] == T[j-1]の時 = sum[i-1][j-1] + 1,else 0
            sum[i][j] = (sum[i-1][j] + sum[i][j-1]) % mod;
            sum[i][j] %= mod;
            sum[i][j] -= sum[i-1][j-1];
            sum[i][j] %= mod;
            if(S[i-1] == T[j-1]){
                sum[i][j] += (sum[i-1][j-1]+1)%mod;
                sum[i][j] %= mod;
            }
        }
    }
    ll res = (sum[N][M]+1)%mod;//除外していた()を加える
    if(res < 0) res += mod;
    cout << res << endl;

    return 0;
}