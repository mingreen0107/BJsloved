#include <stdio.h>
#include <stdlib.h>

int main() {

	int N, M;
	int sum = 0, near = 0;

	scanf("%d %d", &N, &M);

	int* card = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &card[i]);

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = card[i] + card[j] + card[k];
				if (sum > near && sum <= M)
					near = sum;
			}
		}
	}
	printf("%d\n", near);

	return 0;
}