#include <stdio.h>
#include <string.h>

#define MAX_N 100

// 별명 규약을 확인하는 함수
int checkNicknames(char si[][21], char ti[][21], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((strcmp(si[i], si[j]) == 0 && strcmp(si[i], ti[j]) == 0) && i != j)
                // 별명 규약을 위배하는 경우
                return 0;
        }
    }
    // 별명 규약을 위배하지 않는 경우
    return 1;
}

int main() {

    int N;
    char si[MAX_N][21]; // 이름을 저장하는 배열
    char ti[MAX_N][21]; // 성을 저장하는 배열
    scanf("%d", &N);// 사람 수
    // 각 사람의 이름과 성 입력
    for (int i = 0; i < N; i++) {
        scanf("%s %s", si[i], ti[i]);
    }
    // 별명 규약 확인 함수 호출
    int possible = checkNicknames(si, ti, N);
    // 결과 출력
    if (possible) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}