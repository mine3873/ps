#include<iostream>

int main(){
  int h,m;
  std::cin >> h >> m;
  if(m >= 45)
    m -= 45;
  else {
    if(h == 0)
      h = 23;
    else
      h--;
    m += 15;
  }
  std::cout << h << " " << m << std::endl;
}