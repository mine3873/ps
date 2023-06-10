#include<iostream>

int main(){
  int a,b,c,m;
  std::cin >> a>>b>>c;
  if(a==b and b==c)
    m=10000+a*1000;
  else if(a==b or a==c)
    m = 1000 + a*100;
  else if(b==c)
    m = 1000 + b*100;
  else{
    if(a>b and a>c)
      m = a*100;
    else if(b >a and b>c)
      m = b *100;
    else
      m = c*100;
  }
  std::cout << m;
}