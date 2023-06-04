#include <iostream>

int main() {
  int x;
  std::cin >> x;
  int i = 1;
  while (x > i) {
    x -= i;
    i++;
  }
  if (i % 2)
    std::cout << i - x + 1 << "/" << x << "\n";
  else
    std::cout << x << "/" << i - x + 1 << "\n";
  return 0;
}