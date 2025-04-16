#include<stdio.h>

int main() {
    int distance[4];    // 배열: 사각형의 네 변까지의 거리를 저장할 용도
    int x, y, w, h;     // x, y: 점의 좌표, w, h: 사각형의 우측 하단 좌표 (가로, 세로 길이)
    
    scanf("%d %d %d %d", &x, &y, &w, &h);    // 점의 좌표와 사각형의 크기를 입력받음
    
    int x1, y1;
    x1 = w - x;     // x1: 우측 경계까지의 거리
    y1 = h - y;     // y1: 상단 경계까지의 거리 계산
    
    // 네 변까지의 거리를 배열에 저장
    distance[0] = x;    // 좌측 경계까지의 거리
    distance[1] = y;    // 하단 경계까지의 거리
    distance[2] = x1;   // 우측 경계까지의 거리
    distance[3] = y1;   // 상단 경계까지의 거리

    // 배열의 첫 번째 요소로 최소 거리를 초기화
    int min = distance[0];
    for (int i = 1; i < 4; i++) {    // 네 거리 중 가장 작은 값을 찾기 위한 반복문
        if (min > distance[i])
            min = distance[i];
    }
    
    printf("%d", min);
    
    return 0;
}
