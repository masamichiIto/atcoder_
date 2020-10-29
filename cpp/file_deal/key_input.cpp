//http://www.isc.meiji.ac.jp/~re00079/EX2.2011/20110622.html
#include<stdio.h>

int main(void){
    int i, n;
    int data[10];

    for(i=0; i < 10; i++){
        printf("%d番目のデータ : ", i+1);
        scanf("%d", &(data[i]));
    }
    //画面に表示
    for(i=0; i<10; i++){
        printf("%d\n",data[i]);
    }
}