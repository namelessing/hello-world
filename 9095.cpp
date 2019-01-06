#include <cstdio>

int dp[12] = {0,};
int main()
{
	int n = 0, ca = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	scanf("%d", &ca);
	for(int i = 0; i < ca; i++) {

		scanf("%d", &n);

		for(int i = 4; i <= n; i++) {
			dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
		}
	
		printf("%d\n", dp[n]);
	}
	return 0;
}
