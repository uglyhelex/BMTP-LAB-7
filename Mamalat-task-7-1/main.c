#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 1251 & cls");
    char sentence[1000];
    printf("������ ������� ���������� ��� ���������� �����: ");
    gets(sentence);
    int count_p = 0;
    int count_punctuation = 0;
    for (int i = 0; sentence[i] != '\0' && sentence[i] != '\n'; i++) {
        if (sentence[i] == '�' || sentence[i] == '�') {
            count_p++;
        } else if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            count_punctuation++;
        }
    }
    if (count_p > 0) {
        printf("ʳ������ ������� '�' � ������: %d\n", count_p);
    } else {
        printf("������ '�' �������. ʳ������ ��������� �����: %d\n", count_punctuation);
    }
    return 0;
}
