#include <stdio.h>
#include <string.h>

typedef long long int lli;

int main() {
  // input
  lli X; scanf("%lld", &X);

  // compute
  lli money = 100, cnt = 0;
  while (money < X) {
    money = (lli)(money * 1.01);
    cnt++;
  }

  // output
  printf("%lld\n", cnt);
  return 0;
}
