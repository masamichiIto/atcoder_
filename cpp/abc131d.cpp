#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int> > tasks;
int main(void){
    cin >> n;
    for (int i = 0; i < n; i++) { int a, b;
        cin >> a >> b;
        tasks.emplace_back(b, a); // 〆切 (, 所要時間)
    }
    
    sort(tasks.begin(), tasks.end());
    int sum = 0;
    bool isyes = true;
    for (auto v : tasks) {
        sum += v.second;
        if (sum > v.first) {
            isyes = false;
            break;
        }
    }
    cout << (isyes ? "Yes" : "No") << endl;
    return 0;
}