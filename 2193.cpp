#include <cstdio>
long long dp[92][2] = {{0,1},{1,0}};
int main()
{
	int n = 0;
	scanf("%d", &n);

	for(int i = 2; i <n; i++) {
  		dp[i][0] = dp[i-1][0] + dp[i-1][1];
		dp[i][1] = dp[i-1][0];
	}

	printf("%lld\n", dp[n-1][0] + dp[n-1][1]);

	return 0;
}
