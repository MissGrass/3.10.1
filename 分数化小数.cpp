#include<stdio.h>
#define maxn 100
int main() {
	int a, b, c, count = 1;
	while (scanf("%d%d%d", &a, &b, &c) && (a != 0 && b != 0 && c != 0)) {
		for (int i = 0; i < c; i++) {
			if (i == 0)
				printf("Case %d:",count++);
			printf("%d", a / b);
			if (i == 0)
				printf(".");
			a = (a % b) * 10;
		}
		if (a / b >= 5)
			printf("%d", a / b + 1);
	}
	
	return 0;
}
