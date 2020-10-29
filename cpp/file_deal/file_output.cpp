#include<stdio.h>
#include<math.h>
#define N 360

int main(void){
    FILE *out_file;
    double x, dphi;

    dphi = 2*M_PI/N;

    out_file = fopen("trifunc.txt","w");

    for(int i = 0; i <= N; i++){
        x = i*dphi-M_PI;
        fprintf(out_file,"%15.7e\t%15.7e\t%15.7e\t%15.7e\n", x, sin(x), cos(x), tan(x));
    }
    fclose(out_file);

    return 0;
}