#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, j;

    printf("약수 출력 프로그램\n정수를 입력해보거라 : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("%d의 약수 : ", i);
        for(j = 1; j <= num; j++){
            if(i % j == 0){
                //aliquot = num / j;
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
    return 0;
}