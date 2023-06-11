#include<iostream>

bool xy[101][101] = {0,};

int main(){
  int n,x,y;
  int w=0;
  std::cin >> n;
  while(n--){
    std::cin >> x >> y;
    for(int a=x;a<x+10;a++){
      for(int b=y;b<y+10;b++){
        if(!xy[a][b]){
          xy[a][b] = 1;
          w++;
        }
      }
    }
  }
  std::cout << w <<"\n";
}