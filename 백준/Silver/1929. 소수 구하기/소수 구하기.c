#include <stdio.h>

int main(void) {
    int m, n;
    // arr[i] == 0 : i가 아직 소수 후보
    // arr[i] == 1 : i가 합성수(소수 아님)로 판명됨
    int arr[1000001] = {0,};
    arr[1] = 1;               // 1은 소수가 아니므로 미리 표시함

    scanf("%d %d", &m, &n);   

    // 에라토스테네스의 체
    // 2부터 n까지 순회하고 소수인 i의 배수들을 모두 합성수로 표시함
    for (int i = 2; i <= n; i++) {
        if (arr[i])          // 이미 합성수로 표시된 i는 건너뜀
            continue;
        // i가 소수일 때
        for (int j = 2; i * j <= n; j++) {
            arr[i * j] = 1;  // i의 배수 i*j를 합성수로 표시
        }
    }

    for (int i = m; i <= n; i++) {    //arr[i]가 0인 값만 소수
        if (arr[i] == 0)
            printf("%d\n", i);
    }

    return 0;
}
