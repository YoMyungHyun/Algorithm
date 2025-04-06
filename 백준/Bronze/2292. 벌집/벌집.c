#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int sum = 1, sum1 = 1;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1");
        return 0;
    } // n이 1일 경우에 1 출력 후 종료
    while (1) // 무한루프를 돌린다. 결국엔 n값을 찾아버리기 때문
    {
        sum = sum + 6 * i; // b숫자 정하는 식
        sum1 = sum1 + 6 * (i - 1); // a숫자 정하는 식
        i++; // i값을 기억해주면서 가자.
        if ((n > sum1) && (n <= sum)) // a ~ b값 사이일 경우 출력.
        // a는 자기 자신보다 1 크므로, '>'을 사용, b는 자기 자신값 포함 '<=' 사용
        {
            printf("%d", i); // 출력 후 종료
            break;
        }
    }
}