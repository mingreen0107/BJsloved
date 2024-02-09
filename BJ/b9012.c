#include <stdio.h>
#include <string.h>

int main() {

	int T, j, count;
	char str[51];
	scanf("%d", &T);

	while (T--) {
		scanf("%s", str);
		j = 0;
		count = 0;

		while (j < strlen(str)) {
			if (str[j] == '(')
				count++;
			else
				count--;

			if (count < 0) {
				printf("NO\n");
				break;
			}
			j++;
		}
		if (count == 0) printf("YES\n");
		else if (count > 0)printf("NO\n");
	}
	return 0;
}