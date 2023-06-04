#include <iostream>
#include <math.h>

bool is_primeNumber(int i) {
  if (i == 2)
    return 1;
  if (i % 2 == 0 or i == 1)
    return 0;
  for (int k = 3; k <= sqrt(i); k += 2) {
    if (i % k == 0)
      return 0;
  }
  return 1;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  for (int i = n; i <= m; i++) {
    if (is_primeNumber(i))
      std::cout << i << "\n";
  }
  return 0;
}