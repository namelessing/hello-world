#include <cstdio>

int dp[1002][10] = {{1,1,1,1,1,1,1,1,1,1}};

int main()
{
	int n = 0;
	scanf("%d", &n);

	for(int i = 1; i < n; i++) {
		for(int digit = 0; digit <=9; digit++) {
			if(digit == 0) dp[i][digit] = dp[i-1][digit] % 10007;
			else dp[i][digit] = (dp[i-1][digit] + dp[i][digit-1] ) % 10007;
		}
	}

	int sum = 0;
	for(int i = 0; i<= 9; i++) {
		 sum =(sum+ dp[n-1][i] ) % 10007;
	}
	printf("%d\n", sum);

	return 0;
}
