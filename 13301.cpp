#include <iostream>

using namespace std;

long long dp[82];

int main() {
  int N;
  cin >> N;
  dp[0] = 1;
  dp[1] = 1;

  for(int i=2; i<=N; i++){
    dp[i] = dp[i-1] + dp[i-2];
  }

  long long ans = (dp[N]* 2 + dp[N-1] *2);

  cout << ans;
  return 0;
} 