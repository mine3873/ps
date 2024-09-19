#include<stdio.h>
#include<math.h>
void print(int n){
    if(n == 0){
        printf("-");
        return;
    }
    print(n-1);
    for(int i = 0; i < pow(3,n - 1); i++)
        printf(" ");
    print(n-1);
}

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        print(n);
        printf("\n");
    }
    return 0;
}