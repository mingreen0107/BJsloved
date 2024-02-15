#include <stdio.h>
#include <string.h>

#define MAX_N 100

// ���� �Ծ��� Ȯ���ϴ� �Լ�
int checkNicknames(char si[][21], char ti[][21], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((strcmp(si[i], si[j]) == 0 && strcmp(si[i], ti[j]) == 0) && i != j)
                // ���� �Ծ��� �����ϴ� ���
                return 0;
        }
    }
    // ���� �Ծ��� �������� �ʴ� ���
    return 1;
}

int main() {

    int N;
    char si[MAX_N][21]; // �̸��� �����ϴ� �迭
    char ti[MAX_N][21]; // ���� �����ϴ� �迭
    scanf("%d", &N);// ��� ��
    // �� ����� �̸��� �� �Է�
    for (int i = 0; i < N; i++) {
        scanf("%s %s", si[i], ti[i]);
    }
    // ���� �Ծ� Ȯ�� �Լ� ȣ��
    int possible = checkNicknames(si, ti, N);
    // ��� ���
    if (possible) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}