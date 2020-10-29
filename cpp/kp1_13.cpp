#include<bits/stdc++.h>
using namespace std;

/*
declare: vector<type> variable name
if you write "vector<type> variable name(number)", you can initiate an vector
specified length of vector.
*/

int main(){
    //文字列
    string str;

    str = "abcd";//'a','b','c','d'というcharの列を代入

    cout << str.at(0) << endl;
    cout << str.size() << endl;

    //配列
    vector<int> vec; //int型の配列変数vecを宣言
    vec = {25, 100, 64};
    cout << vec.at(0) << endl;
    cout << vec.size() << endl;

    //3この入力を受け取れるように3要素の配列{0, 0, 0}で初期化
    vector<int> vec2(3);
    
    //atを使って一つずつ入力
    cin >> vec2.at(0) >> vec2.at(1) >> vec2.at(2);

    cout << vec2.at(0) + vec2.at(1) + vec2.at(2) << endl;

    vector<int> vec3(4);
    for(int i=0; i < 4; i++){
        cin >> vec3.at(i);
    }

    int N;
    cin >> N;
    vector<int> math(N),eng(N);
    for(int i=0; i < N; i++){
        cin >> math.at(i);
    }
    for(int i=0; i < N; i++){
        cin >> eng.at(i);
    }
    for(int i=0; i < N; i++){
        cout << math.at(i) + eng.at(i) << endl;
    }

    vector<int> vec4 = {1,2,3};
    vec4.push_back(10);//末尾に10を追加

    //vecの全要素を出力
    for(int i=0; i < vec4.size(); i++){
        cout << vec4.at(i) << endl;
    }
}