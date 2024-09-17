//https://www.acmicpc.net/problem/1629
#include<stdio.h>

long long A,B,C;

long long solve(long long b){
    if(b == 0) return 1;
    if(b == 1) return A % C;
    long long num = solve(b/2) % C;
    if(b % 2) return ((A % C) * (num * num % C)) % C;
    else return num * num % C;
}

int main(){
    scanf("%lld %lld %lld",&A,&B,&C);
    printf("%lld", solve(B));
    return 0;
}