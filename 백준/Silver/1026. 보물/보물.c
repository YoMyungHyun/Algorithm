#include <stdio.h>
#include <stdlib.h>
int arr[51];
int compare(const void *a,const void *b)
{
    int A = *(int*)a;
    int B = *(int*)b;
    if (A > B)
        return -1;
    else if (A < B)
        return 1;
    else
        return 0;        
}
void treasure()
{
    int N;
    int i,j;
    int num;
    int sum = 0;
    int arr2[101] = { 0 };
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);
        arr2[num]++;
    }
    qsort(arr, N, sizeof(int), compare);
    j = 0;
    for (i = 0; i < N; i++)
    {
        while (1)
        {
            if (arr2[j]==1)
            {
                sum += (arr[i] * j);
                j++;
                break;
            }
            else if (arr2[j] > 1)
            {
                sum += (arr[i] * j);
                arr2[j]--;
                break;
            }
            j++;
        }
    }
    printf("%d", sum);
}
int main()
{
    treasure();
}
