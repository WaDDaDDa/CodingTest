//문제 설명
//자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요.
// 예를들어 n이 12345이면[5, 4, 3, 2, 1]을 리턴합니다.
//
//제한 조건
//n은 10, 000, 000, 000이하인 자연수입니다.



#include <string>
#include <vector>


std::vector<int> solution(long long n) 
{
    std::string Str = std::to_string(n);
    std::vector<int> answer;

    for(int i = static_cast<int>(Str.size()); 0 <= i; i--)
    {
        switch (Str.c_str()[i])
        {
        case '1':
            answer.push_back(1);
            break;
        case '2':
            answer.push_back(2);
            break;
        case '3':
            answer.push_back(3);
            break;
        case '4':
            answer.push_back(4);
            break;
        case '5':
            answer.push_back(5);
            break;
        case '6':
            answer.push_back(6);
            break;
        case '7':
            answer.push_back(7);
            break;
        case '8':
            answer.push_back(8);
            break;
        case '9':
            answer.push_back(9);
            break;
        case '0':
            answer.push_back(0);
            break;
        }
    }


    return answer;
}

void main()
{
    solution(12345);
}