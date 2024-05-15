//문제 설명
//피보나치 수는 F(0) = 0, F(1) = 1일 때, 1 이상의 n에 대하여 F(n) = F(n - 1) + F(n - 2) 가 적용되는 수 입니다.
//
//예를들어
//
//F(2) = F(0) + F(1) = 0 + 1 = 1
//F(3) = F(1) + F(2) = 1 + 1 = 2
//F(4) = F(2) + F(3) = 1 + 2 = 3
//F(5) = F(3) + F(4) = 2 + 3 = 5
//와 같이 이어집니다.
//
//2 이상의 n이 입력되었을 때, n번째 피보나치 수를 1234567으로 나눈 나머지를 리턴하는 함수, solution을 완성해 주세요.
//
//제한 사항
//n은 2 이상 100, 000 이하인 자연수입니다.



#include <string>
#include <vector>

int F(int _N)
{
    if (0 == _N)
    {
        return 0;
    }

    if (1 == _N)
    {
        return 1;
    }


    int ans = F(_N - 1) + F(_N - 2);

    return ans;
}

int solution(int _N) 
{
    int answer = 0;
    std::vector<int> Vec;
    Vec.push_back(0);
    Vec.push_back(1);

    for (size_t i = 2; i <= _N; i++)
    {
        Vec.push_back((Vec[i - 2] + Vec[i - 1]) % 1234567);
    }

    long long  Value = Vec[_N];

    answer = static_cast<int>(Value % 1234567);

    return answer;
}

int main()
{
    int a = solution();

    int z = 0;
}