#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int k = a;
  while (--b) {
    a *= k;
    a %= c;
  }
  std::cout << a << "\n";
  return 0;
}