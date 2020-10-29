//http://www.yamamo10.jp/yamamoto/lecture/2007/5E_comp_app/C/9_file_html/node4.html#prog:file_out

#include<stdio.h>

int main(void){
    FILE *in_file;
    double x[500], y1[500], y2[500],y3[500];
    int i,j;
    in_file = fopen("trifunc.txt","r");

    for(i=0; i <= 499; ++i){
        if(EOF == fscanf(in_file, "%lf%lf%lf%lf", &x[i], &y1[i],&y2[i],&y3[i])) break;
    }
    fclose(in_file);

    for(j=0; j < i; ++j){
        printf("%10.7f\t%10.7f\t%10.7f\t%10.7f\n", x[j],y1[j],y2[j],y3[j]);
    }

    return 0;
}