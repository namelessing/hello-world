#include <cstdio>

int dp[1000003]={0,};

int main()
{
	int n = 0;
	scanf("%d", &n);

	for(int i = 2; i <= n; i++) {

		dp[i] = dp[i-1] + 1;
		if(i % 2 == 0 ) dp[i] = (dp[i] > dp[i/2]+1)? dp[i/2]+1 : dp[i];
		if(i % 3 == 0 ) dp[i] = (dp[i] > dp[i/3]+1) ? dp[i/3]+1 : dp[i];
	}

	printf("%d\n", dp[n]);

	return 0;
}
