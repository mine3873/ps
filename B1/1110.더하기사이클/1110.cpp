#include<iostream>

int main(){
  int n,count = 0,temp;
  std::cin >> n;
  temp = n;
  
  do{
    temp = (temp / 10 + temp % 10)%10 + (temp % 10)*10;
    count++;
  }
  while(temp != n);
  std::cout << count << std::endl;
}