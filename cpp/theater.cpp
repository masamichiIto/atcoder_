#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,l,r,seet,spectator;
    scanf("%d", &N);
    spectator = 0;
    for(int i = 0; i < N; i++){
        cin >> l >> r;
        seet = r - l + 1;
        spectator += seet;
    }
    cout << spectator << endl;
}