//문제 설명
//0과 1로 이루어진 어떤 문자열 x에 대한 이진 변환을 다음과 같이 정의합니다.
//
//x의 모든 0을 제거합니다.
//x의 길이를 c라고 하면, x를 "c를 2진법으로 표현한 문자열"로 바꿉니다.
//예를 들어, x = "0111010"이라면, x에 이진 변환을 가하면 x = "0111010" -> "1111" -> "100" 이 됩니다.
//
//0과 1로 이루어진 문자열 s가 매개변수로 주어집니다.s가 "1"이 될 때까지 계속해서 s에 이진 변환을 가했을 때, 
// 이진 변환의 횟수와 변환 과정에서 제거된 모든 0의 개수를 각각 배열에 담아 return 하도록 solution 함수를 완성해주세요.
//
//제한사항
//s의 길이는 1 이상 150, 000 이하입니다.
//s에는 '1'이 최소 하나 이상 포함되어 있습니다.


#include <string>
#include <vector>
#include <algorithm>

// vec [함수실행된 횟수, 0제거된 횟수]
int FxCount = 0;
int ZeroCount = 0;

std::vector<int> solution(std::string _Str) 
{
	std::vector<int> Num;
	FxCount++;

	std::string Text = "";

	for (size_t i = 0; i < _Str.size(); i++)
	{

		if (_Str.c_str()[i] == '0')
		{
			ZeroCount++;
		}
		else if (_Str.c_str()[i] == '1')
		{
			Text += "1";
		}

	}

	size_t Size = Text.size();

	if (Size != 1)
	{
		//Size를 가지고 이진변환 해야함.
		std::string Value = "";

		while (Size >= 1)
		{
			if (Size % 2 == 0)
			{
				Value += "0";
			}
			else 
			{
				Value += "1";
			}

			Size = Size / 2;
		}

		reverse(Value.begin(), Value.end());

		int A = std::stoi(Value);

		std::string B = std::to_string(A);
		

		return solution(B);
	}

    std::vector<int> answer;

	answer.push_back(FxCount);
	answer.push_back(ZeroCount);

	FxCount = 0;
	ZeroCount = 0;

    return answer;
}

void main()
{
	std::vector<int> A = solution("110010101001");
	std::vector<int> B = solution("01110");
	std::vector<int> C = solution("1111111");
	std::vector<int> D = solution("1");
	std::vector<int> Q = solution("01010");

	int a = 0;
}


// 테스트 케이스 11~ 13 실패. 이유불명.

// 알게된것
// 1. reverse 함수를 통해 배열을 뒤집을 수 있다.