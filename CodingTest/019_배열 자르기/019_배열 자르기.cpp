//문제 설명
//정수 배열 numbers와 정수 num1, num2가 매개변수로 주어질 때,
//  numbers의 num1번 째 인덱스부터 num2번째 인덱스까지 자른 정수 배열을 return 하도록 solution 함수를 완성해보세요.
//
//제한사항
//2 ≤ numbers의 길이 ≤ 30
//0 ≤ numbers의 원소 ≤ 1, 000
//0 ≤num1 < num2 < numbers의 길이
//    입출력 예
//    numbers	num1	num2	result
//    [1, 2, 3, 4, 5]	1	3   [2, 3, 4]
//    [1, 3, 5]     	1	2   [3, 5]
//    입출력 예 설명
//    입출력 예 #1
//
//    [1, 2, 3, 4, 5]의 1번째 인덱스 2부터 3번째 인덱스 4 까지 자른[2, 3, 4]를 return 합니다.
//    입출력 예 #2
//
//    [1, 3, 5]의 1번째 인덱스 3부터 2번째 인덱스 5까지 자른[3, 5]를 return 합니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) 
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*numbers_len);
    
    for (size_t i = 0; i < numbers_len; i++)
    {
        answer[i] = numbers[num1];
        num1++;
        if (num1 > num2)
        {
            return answer;
        }
    }
}

int main()
{
    
}

