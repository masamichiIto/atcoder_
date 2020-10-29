#include<bits/stdc++.h>
using namespace std;

/*
再帰関数:ある関数の中で同じ関数を呼び出すことを再帰呼び出しいう．再帰を行う関数を
再帰関数と呼ぶ.

ベースケース: 再帰呼び出しを行わずに完了できる処理をベースケースという
再帰ステップ: 再帰呼び出しを行い，その血Kかを用いて行う処理のことを再帰ステップという

*/

int sum(int n){
    if(n == 0){
        return 0;
    }
    //sum関数の中でsum関数を呼び出している
    int s = sum(n - 1);
    return s + n;
}

int array_sum_from_i(vector<int> &data, int i){
    //ベースステップ
    if(i == data.size()){
        return 0;
    }
    //再帰ステップ
    int s = array_sum_from_i(data, i+1);
    return s + data.at(i);
}

int array_sum(vector<int> &data){
    return array_sum_from_i(data, 0);
}
bool has_divisor(int N, int i){
    if(N == i){
        return false;
    }
    if(N % i == 0){
        return true;
    }
    return has_divisor(N ,i+1);
}
bool is_prime(int N){
    if(N == 1){return false;}
    else if(N == 2){return true;}
    else{return !has_divisor(N,2);}//Nが素数である<=>約数を持たない
}
int main(){
    cout << sum(2) << endl; //0 + 1 + 2 = 3
    cout << sum(4) << endl; //0 + 1 + 2 + 3 + 4 = 10
    cout << sum(10) << endl; // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

    vector<int> a = {0,1,4,7,2,5,9};
    cout << array_sum(a) << endl; // 0 + 1 + 4 + 7 + 2 + 5 + 9
    cout << is_prime(1) << endl;
    cout << is_prime(145) << endl;
    cout << is_prime(7919) << endl;
}