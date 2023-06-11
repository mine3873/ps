#include<iostream>

int main(){
  int a,b,t;
  std::cin >> a>>b;
  t = a/100;
  a = (a%10)*100 + (a%100)/10 * 10+ t;
  t = b/100;
  b = (b%10)*100 + (b%100)/10*10+t;
  std::cout<<(a>b?a:b)<<"\n";
}