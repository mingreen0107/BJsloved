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

	//while문으로 T랑 갈 때까지 가고
	//scanf함수으로 () 받고
	//()가 아닐경우 pop해서 Y or N 확인 후
	//stack 초기화

	

	return 0;
}