#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,x,div;
    cin >> N >> x;
    vector<int> l(N);
    for(int i = 0; i < N; i++){
        cin >> l.at(i);
    }
    sort(l.begin(), l.end());
    x = x-accumulate(l.begin(), l.end(),0); //accmulate(vectorの最初, vectorの最後, 初期値(=0とする))でvectorの要素の合計が得られる．
    div = x / l.at(0);
    cout << N + div << endl;
    return 0;
}