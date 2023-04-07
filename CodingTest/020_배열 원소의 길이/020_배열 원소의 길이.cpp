//문제 설명
//문자열 배열 strlist가 매개변수로 주어집니다.strlist 각 원소의 길이를 담은 배열을 retrun하도록 solution 함수를 완성해주세요.
//
//제한사항
//1 ≤ strlist 원소의 길이 ≤ 100
//strlist는 알파벳 소문자, 대문자, 특수문자로 구성되어 있습니다.
//입출력 예
//strlist	                            result
//["We", "are", "the", "world!"]        [2, 3, 3, 6]
//["I", "Love", "Programmers."]         [1, 4, 12]
//입출력 예 설명
//입출력 예 #1
//
//["We", "are", "the", "world!"]의 각 원소의 길이인[2, 3, 3, 6]을 return합니다.
//입출력 예 #2
//
//["I", "Love", "Programmers."]의 각 원소의 길이인[1, 4, 12]을 return합니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strlist_len은 배열 strlist의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* strlist[], size_t strlist_len) 
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*strlist_len);
    int count = 0;
    for (size_t i = 0; i < strlist_len; i++)
    {
        strlist[i];
        while (0 != *strlist[count])
        {
            char A = *strlist[count];
            count++;
        }
        
    }

    count++;
    return count;

    return answer;
}

int* solution(const char* str[], size_t len) {
    int c;
    int* ans = (int*)malloc(len * sizeof(int));
    for (c = 0; c < len; c++) {
        ans[c] = strlen(str[c]);
    }

    return ans;
}

int main()
{
    const char* arr[35] = {"We", "are", "the", "world!"};
    *arr[0]; 
    int* Result = solution(arr,5);
}

