#include <stdio.h>

int stack[50];
int top = -1;

int isEmpty() {
	if (top == -1) {
		printf("YES");
		return 1;
	}
	return 0;
}

void push(char data) {
	top++;
	stack[top] = data;
}

char pop() {
	if (!isEmpty())
		return stack[top--];
}

int main() {

	int T;

	scanf("%d", &T);

	//while������ T�� �� ������ ����
	//scanf�Լ����� () �ް�
	//()�� �ƴҰ�� pop�ؼ� Y or N Ȯ�� ��
	//stack �ʱ�ȭ

	

	return 0;
}