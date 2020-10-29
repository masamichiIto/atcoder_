#include<bits/stdc++.h>
using namespace std;

/*
範囲for文
for(配列の要素の型 x : 配列変数){
    変数　を使う
}
*/

int main(){
    vector<int> a = {1,3,1,2,5,10};
    for(int x : a){
        if(x == 1){
            continue;
        }
        if(x == 5){
            break;
        }

        cout << x << endl;
    }
    
    string str = "hello";
    for(char c : str){
        if(c == 'l'){
            c = 'L';
        }
        cout << c;
    }
    cout << endl;

    int N;
    cin >> N;

    int cnt = 0;
    while(N > 0){
        if(N % 2 > 0){
            break;
        }
        N = N / 2;
        cnt++;
    }
    cout << cnt << endl;
}