#include<stdio.h>
int main(){
    int c1,c2;
    scanf("%d %d",&c1,&c2);
    int time=(c2-c1 +50)/100;
    int h,m,s;
    s=time%60;
    h=time/3600;
    m=(time-3600*h)/60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;

}
