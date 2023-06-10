#include<iostream>

int main(){
  int x,y;
  std::cin >> x >> y;
  std::cout<<(x>0?(y>0?1:4):(y>0?2:3));
}