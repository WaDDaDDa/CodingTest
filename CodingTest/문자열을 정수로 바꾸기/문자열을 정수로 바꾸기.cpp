//문제 설명
//문자열 s를 숫자로 변환한 결과를 반환하는 함수, solution을 완성하세요.
//
//제한 조건
//s의 길이는 1 이상 5이하입니다.
//s의 맨앞에는 부호(+, -)가 올 수 있습니다.
//s는 부호와 숫자로만 이루어져있습니다.
//s는 "0"으로 시작하지 않습니다.



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* _S) 
{
    std::string Str = _S;
    std::vector<int> Num;

    for (size_t i = 0; i < Str.size(); i++)
    {
        switch (Str.c_str()[i])
        {
        case '1': 
            Num.push_back(1);
            break;
        case '2':
            Num.push_back(2);
            break;
        case '3':
            Num.push_back(3);
            break;
        case '4':
            Num.push_back(4);
            break;
        case '5':
            Num.push_back(5);
            break;
        case '6':
            Num.push_back(6);
            break;
        case '7':
            Num.push_back(7);
            break;
        case '8':
            Num.push_back(8);
            break;
        case '9':
            Num.push_back(9);
            break;
        case '0':
            Num.push_back(0);
            break;

        default:
            break;
        }
    }
    
    int Pownum = static_cast<int>(Num.size() - 1);

    int answer = 0;

    for (size_t i = 0; i < Num.size(); i++)
    {
        int a = static_cast<int>(pow(10, Pownum));

        answer += Num[i] * a;
        Pownum--;
    }


    if (Str.c_str()[0] == '-')
    {
        answer *= -1;
    }

    return answer;
}

void main()
{
    int a = solution("-12346574");
    
    int c = atoi("-12346574");

    int b = 0;

    return;
}