#include <stdio.h> 
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int ans = 0;

	for (int i = 0; i < a; i++) {
		int c;
		scanf("%d", &c);
		
		if (c % b == 0) {
			ans++;
		}		
	}
	printf("%d\n", ans);
	
	return 0;
}

