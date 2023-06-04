#include <iostream>

long long num[101] = {0, 1, 1, 1, 2, 2, 0};

int main() {
  int T, n;
  std::cin >> T;
  for (int k = 6; k <= 100; k++)
    num[k] = num[k - 1] + num[k - 5];
  while (T--) {
    std::cin >> n;
    std::cout << num[n] << "\n";
  }
  return 0;
}