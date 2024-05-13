//문제 설명
//정수가 담긴 리스트 num_list가 주어질 때, 
// num_list의 원소 중 짝수와 홀수의 개수를 담은 배열을 return 하도록 solution 함수를 완성해보세요.
//
//제한사항
//1 ≤ num_list의 길이 ≤ 100
//0 ≤ num_list의 원소 ≤ 1, 000
//입출력 예
//num_list	            result
//[1, 2, 3, 4, 5]       [2, 3]
//[1, 3, 5, 7]          [0, 4]
//입출력 예 설명
//입출력 예 #1
//
//[1, 2, 3, 4, 5]에는 짝수가 2, 4로 두 개, 홀수가 1, 3, 5로 세 개 있습니다.
//입출력 예 #2
//
//[1, 3, 5, 7]에는 짝수가 없고 홀수가 네 개 있습니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.

int* solution(int num_list[], size_t num_list_len)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int num1 = 0;
    int num2 = 0;
    for (size_t i = 0; i < num_list_len; i++)
    {
        if (0 == num_list[i] % 2)
        {
            num1++;
        }
        else
        {
            num2++;
        }
    }
    answer[0] = num1;
    answer[1] = num2;

    return answer;
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* Result = solution(arr, 5);
    *Result;
}
