#include<iostream>

int main(){
  int n;
  std::cin>>n;
  for(int k=0;k<n;k++){
    for(int i=0;i<n-k-1;i++)
      std::cout<<" ";
    for(int i=0;i<2*k+1;i++)
      std::cout<<"*";
    std::cout<<"\n";
  }
  for(int k=0;k<n-1;k++){
    for(int i=0;i<=k;i++)
      std::cout<<" ";
    for(int i=0;i<2*(n-k-1)-1;i++)
      std::cout<<"*";
    std::cout<<"\n";
  }
}