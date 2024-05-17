#include<cstdio>

int a[10001], n, t, i;

int main() {
	for (scanf("%d", &n); n--;)
		scanf("%d", &t), a[t]++;

	for (i = 1; i < 10001; i++)
		while (a[i]--)
			printf("%d\n", i);
}