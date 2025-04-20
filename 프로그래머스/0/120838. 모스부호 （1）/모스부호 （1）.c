#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* letter) {
    char *buf = strdup(letter);    // 1) strtok 전용 복사본 생성
    if (!buf) return NULL;

    const char *morse[26] = {    // 2) 모스코드 테이블 (인덱스 i → 'a'+i)
        ".-",   "-...", "-.-.", "-..",  ".",    "..-.",
        "--.",  "....", "..",   ".---", "-.-",  ".-..",
        "--",   "-.",   "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--",  "-..-",
        "-.--", "--.."
    };

    // 3) 결과 버퍼 할당 (입력 길이 + 널종료)
    size_t len = strlen(buf) + 1;
    char *answer = malloc(len);
    if (!answer) {
        free(buf);
        return NULL;
    }
    memset(answer, 0, len);

    // 4) 공백으로 자른 뒤 변환
    int idx = 0;
    char *cut_morse = strtok(buf, " ");
    while (cut_morse != NULL) {
        for (int i = 0; i < 26; i++) {
            if (strcmp(cut_morse, morse[i]) == 0) {
                answer[idx++] = 'a' + i;
                break;
            }
        }
        cut_morse = strtok(NULL, " ");
    }
    answer[idx] = '\0';

    free(buf);
    return answer;
}
