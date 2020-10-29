#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1;
    str2 = ", world!";

    cout << str1 << str2 << endl;

    string str = "Hello";
    cout << str.size() << endl; //.size()で文字列の長さを取得
    //.at(i)でi番目の文字を取得できるでぃ!
    cout << str.at(0) << endl;
    cout << str.at(4) << endl;

    //cahr型では''を使う.1文字だけ格納できるよ
    char c = 'a';
    cout << c << endl;

    //文字列の書き換え -> string.at(i) = hofe
    str.at(0) = 'T';

    cout << str << endl;

    string strin;
    cin >> strin;

    int cnt = 0;
    for(int i = 0; i < strin.size(); i++){
        if(strin.at(i)=='O'){
            cnt++;
        }
    }
    cout << cnt << endl;
    //全角文字を扱うときは，u32string等の型を利用しましよう
}