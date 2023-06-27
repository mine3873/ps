#include<iostream>
#include<math.h>

int main(){
  int n,m;
  std::cin >> n >> m;
  int score[n],temp,ans = -3000000;
  for(int i = 0;i<n;i++)
    std::cin >> score[i];
  for(int i = 0; i < n; i++){
    for(int k = i + 1;k < n;k++){
      for(int j = k + 1; j < n;j++){
        temp = score[i] + score[k] + score[j];
        if(m == temp){
          std::cout << m << "\n";
          return 0;
        }
        if(abs(m - temp) < abs(m - ans) and temp < m)
          ans = temp;
      }
    }
  }
  std::cout << ans << "\n";
}