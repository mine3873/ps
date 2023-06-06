#include<iostream>

int main(){
  int n,max = -1;
  std::cin >> n;
  double score[n];
  double sum = 0;
  for(int k = 0;k < n;k++){
    std::cin >> score[k];
    if(score[k] > max)
      max = score[k];
  }
  for(int k = 0;k < n;k++){
    score[k] = score[k]/max*100;
    sum += score[k];
  }
  std::cout << sum / n <<std::endl;
}