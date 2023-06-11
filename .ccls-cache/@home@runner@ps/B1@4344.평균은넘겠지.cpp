#include<iostream>
#include<vector>

int main(){
  int c,n,t;
  double sum;
  std::cout<<std::fixed;
  std::cout.precision(3);
  std::cin>>c;
  while(c--){
    sum=0;
    t=0;
    std::cin >> n;
    std::vector<int> score(n);
    for(int k =0;k<n;k++){
      std::cin >> score[k];
      sum += score[k];
    }
    sum /= n;
    for(int k=0;k<n;k++){
      if(sum < score[k])
        t++;
    }
    std::cout << (double)t/n*100<<"%"<<"\n";
  }
}