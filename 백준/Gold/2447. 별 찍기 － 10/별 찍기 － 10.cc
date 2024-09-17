//https://www.acmicpc.net/problem/2447
#include<stdio.h>

void print(int x,int y, int n){
    if((x/n)%3 == 1 && (y/n)%3 == 1) printf(" ");
    else{
        if(n / 3 == 0) printf("*");
        else print(x,y,n/3);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int y = 0; y < n; y++){
        for(int x=0; x < n; x++)
            print(x,y,n);
        printf("\n");
    }
    return 0;
}