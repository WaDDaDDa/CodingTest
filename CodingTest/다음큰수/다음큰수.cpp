//문제 설명
//자연수 n이 주어졌을 때, n의 다음 큰 숫자는 다음과 같이 정의 합니다.
//
//조건 1. n의 다음 큰 숫자는 n보다 큰 자연수 입니다.
//조건 2. n의 다음 큰 숫자와 n은 2진수로 변환했을 때 1의 갯수가 같습니다.
//조건 3. n의 다음 큰 숫자는 조건 1, 2를 만족하는 수 중 가장 작은 수 입니다.
//예를 들어서 78(1001110)의 다음 큰 숫자는 83(1010011)입니다.
//
//자연수 n이 매개변수로 주어질 때, n의 다음 큰 숫자를 return 하는 solution 함수를 완성해주세요.
//
//제한 사항
//n은 1, 000, 000 이하의 자연수 입니다.


#include <bitset>
#include <string>
#include <vector>

int solution(int _N) 
{
    int answer = 0;
    std::string Num;

    std::bitset<20> BitNum(_N);

    Num = BitNum.to_string();

    int BitCount = BitNum.count();

    for (size_t i = _N + 1; i <= 1000000; i++)
    {
        std::bitset<20> BitNum2(i);

        int BitCount2 = BitNum2.count();

        if (BitCount2 == BitCount)
        {
            answer = i;
            return answer;
        }
    }

}

int main()
{
    int a = solution(78);


    int z = 0;
}

// 
// #include <bitset> 추가하여 std::bitset을 사용할 수 있다.
// bitset은 2진수를 사용하기 편하게 해준다.
// count는 1의 갯수를 알수있다.
// bitset의 tostring을 통해 문자열로 반환할 수 있다.
