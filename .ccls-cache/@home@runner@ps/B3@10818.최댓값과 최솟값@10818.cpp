#include<iostream>
#include<limits.h>

int main(){
  int n;
  std::cin >> n;
  int num[n],max = INT_MIN,min = INT_MAX;
  for(int k = 0;k < n; k++){
    std::cin >> num[k];
    if(max < num[k])
      max = num[k];
    if(min > num[k])
      min = num[k];
  }
  std::cout << max << " " << min << std::endl;
}