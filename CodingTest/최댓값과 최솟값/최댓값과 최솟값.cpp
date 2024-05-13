//문제 설명
//문자열 s에는 공백으로 구분된 숫자들이 저장되어 있습니다.
// str에 나타나는 숫자 중 최소값과 최대값을 찾아 이를 "(최소값) (최대값)"형태의 문자열을 반환하는 함수, solution을 완성하세요.
//예를들어 s가 "1 2 3 4"라면 "1 4"를 리턴하고, "-1 -2 -3 -4"라면 "-4 -1"을 리턴하면 됩니다.
//
//제한 조건
//s에는 둘 이상의 정수가 공백으로 구분되어 있습니다.


#include <string>
#include <vector>
#include <algorithm>


std::string solution(std::string _Str) 
{
    std::string answer = "";

    std::string Bin;
    std::vector<int> Vec;

    for (size_t i = 0; i < _Str.size(); i++)
    {

        Bin += _Str[i];

        if (_Str.c_str()[i] == ' ' || i == _Str.size() - 1)
        {
            Vec.push_back(std::stoi(Bin));

            Bin.clear();
            continue;
        }

    }

    std::sort(Vec.begin(), Vec.end());


    answer += std::to_string(Vec.front());
    answer += ' ';
    answer += std::to_string(Vec.back());



    return answer;
}

void main()
{

    std::string A = solution("1 2 3 4");
    std::string B = solution("-1 -2 -3 -4");
    std::string C = solution("-1 -1");
    std::string D = solution("0 -1 1234 35 3250 1432 433 155 2 -124 -32561 -135325 -54 -43 234 256");

    int a = 0;
}


//// 알게된것.
// 1. Algorithm 헤더추가를 통해 std::sort함수로 배열의 최소 최대값을 정렬할 수 있다.
// 2. std::stoi 를 이용하여 스트링을 int로 바꿀수 있다. 스트링 투 인트
// 3. 