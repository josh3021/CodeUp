#include <stdio.h>

long long int n;

//제곱근 함수
int sqrt(long long int n)
{
  double s=0;
  double t=0;

  s = n / 2;
  for (;s != t;)
  {
      t = s;
      s = ( (n / t) + t) / 2;
  }
  return s;
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}