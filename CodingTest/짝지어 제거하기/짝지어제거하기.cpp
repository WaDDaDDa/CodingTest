//문제 설명
//짝지어 제거하기는, 알파벳 소문자로 이루어진 문자열을 가지고 시작합니다.
// 먼저 문자열에서 같은 알파벳이 2개 붙어 있는 짝을 찾습니다.그다음, 
// 그 둘을 제거한 뒤, 앞뒤로 문자열을 이어 붙입니다.이 과정을 반복해서 문자열을 모두 제거한다면 짝지어 제거하기가 종료됩니다.
// 문자열 S가 주어졌을 때, 짝지어 제거하기를 성공적으로 수행할 수 있는지 반환하는 함수를 완성해 주세요.
// 성공적으로 수행할 수 있으면 1을, 아닐 경우 0을 리턴해주면 됩니다.
//
// 
//예를 들어, 문자열 S = baabaa 라면
//
//b aa baa → bb aa → aa →
//
//의 순서로 문자열을 모두 제거할 수 있으므로 1을 반환합니다.
//
//제한사항
//문자열의 길이 : 1, 000, 000이하의 자연수
//문자열은 모두 소문자로 이루어져 있습니다.


#include <iostream>
#include<string>
#include<list>
#include<stack>

// 리스트로 하다가 효율성 검사 실패.

//int ListSol(std::list<char>& _List)
//{
//    int answer = -1;
//    char Ans = '0';
//
//    if (_List.size() == 0)
//    {
//        answer = 1;
//        return answer;
//    }
//
//
//    for (std::list<char>::iterator Iter = _List.begin(); Iter != _List.end(); Iter++)
//    {
//        if (Ans != *Iter)
//        {
//            Ans = *Iter;
//        }
//        else if (Ans == *Iter)
//        {
//            _List.erase(Iter--);
//            _List.erase(Iter);
//            answer = ListSol(_List);
//            return answer;
//        }
//    }
//
//    answer = 0;
//    return answer;
//
//}
//
//int solution(std::string _Str)
//{
//    int answer = 0;
//
//    std::list<char> List;
//
//    for (size_t i = 0; i < _Str.size(); i++)
//    {
//        List.push_back(_Str[i]);
//    }
//
//    answer = ListSol(List);
//
//    return answer;
//
//
//}



int solution(std::string _Str)
{
	int answer = 0;

	std::stack<char> Stack;
	char PrevChar = '0';
	for (size_t i = 0; i < _Str.size(); i++)
	{
		Stack.push(_Str[i]);

		if (PrevChar != Stack.top())
		{
			PrevChar = Stack.top();
		}
		else if (PrevChar == Stack.top())
		{
			Stack.pop();
			Stack.pop();

			if (Stack.size() == 0)
			{
				PrevChar = '0';
			}
			else
			{
				PrevChar = Stack.top();

			}
		}

	}

	if (Stack.size() == 0)
	{
		answer = 1;
	}

	return answer;


}


int main()
{
	int a = solution("baabaa");
	int z = 0;
}