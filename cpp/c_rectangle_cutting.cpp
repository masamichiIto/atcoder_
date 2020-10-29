# include<bits/stdc++.h>
using namespace std;

/*
長方形の中心と，与えられた座標の両方を通る直線が長方形の面積を二等分する
-> 面積の大きくない方の面積の最大値は長方形の面積の半分
-> 与えられた座標が，中心ならば，分け方は複数通りある
*/

int main(){
    int W,H,x,y;
    cin >> W >> H >> x >> y;
    printf("%lf %d\n", double(W)*double(H)/2, 2*x == W&&2*y == H);
}