#include<iostream>

int main(){
  //6n(n-1)/2-5n = 3n*n-8n
  int n,i=1,m=1;
  std::cin >> n;
  while(true){
    if(n <= i)
      break;
    i += 6*m;
    m++;
  }
  std::cout << m << "\n";
}