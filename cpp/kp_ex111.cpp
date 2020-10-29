#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  string op;
  cin >> N >> A;
  N += 1;
  // ここにプログラムを追記
  for(int i = 1; i < N; i++){
      cin >> op >> B;
      if(op == "+"){
          A += B;
          cout << i << ":" << A << endl;
      }
      else if(op == "-"){
          A -= B;
          cout << i << ":" << A << endl;
      }
      else if(op == "*"){
          A *= B;
          cout << i << ":" << A << endl;
      }
      else if(op == "/"){
          if(B == 0){
              cout << "error" << endl;
              break;
          }
          A /= B;
          cout << i << ":" << A << endl;
      } 
  }
}
