#include<bits/stdc++.h>
using namespace std;

// 関数定義
/*
返り値の型 関数名(引数1の型 引数1の名前,.....){
    処理;
}

返り値がない場合: 返り値の型はvoidにする
*/
int my_min(int x, int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}

void hello(string text){
    cout << "Hello, " << text << endl;
    return;
}

int input(){
    int x;
    cin >> x;

    return x;
}

void add5(int x){
    x += 5;
    cout << x << endl;
}

/*
プロトタイプ宣言
関数の名前と，引数と返り値の型だけ先に指定する書き方
*/

void HELLO();

int main(){
    int answer = my_min(10,5);
    cout << answer << endl;

    hello("Tom");
    hello("C++ and Python3");

    int num = input();
    cout << num + 5 << endl;

    int number = 19;
    add5(number);//numberの値は引数xにコピーされる
    cout << number << endl; //numberはそのまま

    HELLO();
}

void HELLO(){
    cout << "HELLO!!!!" << endl;
}