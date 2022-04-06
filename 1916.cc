#include <iostream>

using namespace std;

long long int dp[200] = {0,};

long long int dp_fibo (int n) {
  if (n == 1) {
    return 1;
  } else if (n == 2) {
    return 1;
  } else if (dp[n] != 0) {
    return dp[n];
  }
  return dp[n] = dp_fibo(n-1) + dp_fibo(n-2);
}

int main (void) {
  int n;
  cin >> n;
  long long int r = dp_fibo(n);
  cout << r % 10009;
  return 0;
}