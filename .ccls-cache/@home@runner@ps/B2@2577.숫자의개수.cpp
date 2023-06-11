#include<iostream>

int main(){
  int a,b,c;
  int num[10] ={0,};
  std::cin >>a>>b>>c;
  a = a*b*c;
  while(a >= 1){
    num[a%10]++;
    a = a/10;
  }
  for(int k=0;k<10;k++)
    std::cout<<num[k]<<"\n";
}