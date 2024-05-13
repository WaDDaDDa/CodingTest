//문제 설명
//함수 solution은 정수 n을 매개변수로 입력받습니다.
// n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요.
// 예를들어 n이 118372면 873211을 리턴하면 됩니다.
//
//제한 조건
//n은 1이상 8000000000 이하인 자연수입니다.

#include <string>
#include <vector>


long long solution(long long n) 
{
    std::string Str = std::to_string(n);
    std::vector<int> Vec;
    
    int A = '9';
    int B = 9;

    while (0 <= B)
    {
        for (size_t i = 0; i < Str.size(); i++)
        {
            if (Str.c_str()[i] == A)
            {
                Vec.push_back(B);
            }

        }

        A -= 1;
        B -= 1;
    }

    long long answer = 0;

    for (size_t i = 0; i < Vec.size(); i++)
    {
        answer = answer * 10 + static_cast<long long>(Vec[i]);
    }


    return answer;
}

void main()
{
    long long a = solution(118306);

    int z = 0;
}