#include<bits/stdc++.h>
using namespace std;

/*
多次元配列
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))で宣言
初期値は省略可能
変数名.at(i).at(j)でi行目のj列目にアクセスできる
変数名.size()で行数
変数名.at(0).size()で列数
*/

int main(){
    //int型の2次元配列(3*4)の宣言
    vector<vector<int>> data(3,vector<int>(4));

    //入力
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> data.at(i).at(j);
        }
    }

    int cnt = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(data.at(i).at(j) == 0){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
