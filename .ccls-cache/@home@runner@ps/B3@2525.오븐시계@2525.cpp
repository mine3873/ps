#include<iostream>

int main(){
  int h,m,t;
  std::cin >> h >> m >> t;
  if(t + m >= 60){
    h += (m+t)/60;
    if(h >= 24)
      h -= 24;
    m = (m+t)%60;
  }
else
  m += t;
  std::cout<<h<<" "<<m;
}