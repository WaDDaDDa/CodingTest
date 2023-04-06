
//문제 설명
//정수 n이 매개변수로 주어질 때, n 이하의 홀수가 오름차순으로 담긴 
// 배열을 return하도록 solution 함수를 완성해주세요.
//
//제한사항
//1 ≤ n ≤ 100
//입출력 예
//n	        result
//10    [1, 3, 5, 7, 9]
//15    [1, 3, 5, 7, 9, 11, 13, 15]
//입출력 예 설명
//입출력 #1
//
//10 이하의 홀수가 담긴 배열[1, 3, 5, 7, 9]를 return합니다.
//입출력 #1
//
//15 이하의 홀수가 담긴 배열[1, 3, 5, 7, 9, 11, 13, 15]를 return합니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>

int* solution(int n) 
{

    //if (n <= 0) {
    //    return NULL;
    //}
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*n/2);
    
    //if (answer == NULL) {
    //    return NULL;
    //}                            위와 아래의 null체크는 문제 조건이 모든수일경우 해야함.

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        int Value = i % 2;
        if (0 == Value)   // 짝수면 건너 뛴다..
        {
            continue;
        }

        answer[count] = i; // i가 홀수면 count=0부터 넣고 
        count++;           // count를 1증가 시킨다.
    }
    return answer;
}

int* solution2(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(200);
    int a = 1;
    int cnt = 0;

    while (n >= a)
    {
        answer[cnt++] = a;
        a += 2;
    }
    return answer;
}


int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    int* Result1 = solution(10);

    int* Result2 = solution(15);
    int Beat0 = Result2[0];
    int Beat1 = Result2[1];
    int Beat2 = Result2[2];
    int Beat3 = Result2[3];
    int Beat4 = Result2[4];
    int Beat5 = Result2[5];
    int Beat6 = Result2[6];
    int Beat7 = Result2[7];
}
