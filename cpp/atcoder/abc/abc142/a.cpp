# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double res;
    cin >> n;
    cout.precision(10);
    res = (double)(n - n/2) / (double)n;
    cout << res << endl;
    return 0;
}