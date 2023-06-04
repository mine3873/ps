#include <iostream>
int selfNumber(int n) {
  int sum = n;
  while (n >= 1) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool num[10010] = {
    0,
};

int main() {
  for (int i = 1; selfNumber(i) <= 10010; i++) {
    num[selfNumber(i)] = true;
  }
  for (int i = 1; i <= 10000; i++) {
    if (!num[i])
      std::cout << i << "\n";
  }
  return 0;
}