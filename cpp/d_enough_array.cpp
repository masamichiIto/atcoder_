# include<bits/stdc++.h>
using namespace std;

/*
考え方
S(l,r) = sum_l^r A_k とした時，
・ S(a,b) < S(a, b+1)
・ S(a,b) > S(a+1,b)
が成り立つ．ここから，

あるl,rに対して，S(l,r) >= Kならば，S(l,x) >= K for x >= r

である．つまり，左端lを固定した時，S(l,r) >= Kとなる最小のrを見つければ，部分列の左端がlの時に，条件を満たす物の個数を求めることが可能
配列Aの要素数はNなので，そのようなrに対して，条件を満たすものの個数は，N-r+1である．
*/

int main(){
    int N;
    long long int K;
    cin >> N >> K;
    vector<long long int> A(N);
    //入力
    for(int ii = 0; ii < N; ++ii){
        cin >> A[ii]; 
    } 
    long long int ans = 0;
    long long int sum = 0;

    int r = 0;
    for(int i = 0; i < N; ++i){
        while(sum < K){
            //cout << "i" << i << endl;
            if(r == N)break; //rが0始まりのため
            else{
                sum += A[r];
                //cout << " sum"<< sum << endl;
                r++;
                //cout << "r" << r << endl;
            }
        }
        if(sum < K)break;
            ans += N-r+1;//rが0始まりのため
            //cout << "ans" << ans << endl;
            sum =  sum - A[i];
            //cout << "A[i]" << A[i] << endl;
            //cout << "sum" << sum << endl;
    }
    cout << ans << endl;
    return 0;
}