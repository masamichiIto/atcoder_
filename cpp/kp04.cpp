# include <bits/stdc++.h>
using namespace std;

int main(){
    int name;
    name = 10;

    cout << name << endl;
    cout << name + 2 << endl;
    cout << name * 3 << endl;

    int name2 = 1;
    cout << "name2: " << name2 << endl;

    int a = 10;
    int b;
    b = a;
    a = 5;
    cout << a << endl;
    cout << b << endl;

    int c = 10, e = 5;
    cout << "c: " << c << endl;
    cout << "e: " << e << endl;

    /*error 
    int a = 0;
    int a = 5;

    int 100hello
    int na+me
    int int
    */

   int i = 10;
   double d = 0.5;
   string s = "Hello";

   cout << i << endl;
   cout << d << endl;
   cout << s << endl;
   //型変換
   cout << "<型変換>" << endl;
   cout << i + d << endl;
   cout << i * d << endl;
   cout << i * d /2 << endl; //小数点以下でも残る
}