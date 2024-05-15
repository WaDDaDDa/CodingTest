//���� ����
//¦���� �����ϱ��, ���ĺ� �ҹ��ڷ� �̷���� ���ڿ��� ������ �����մϴ�.
// ���� ���ڿ����� ���� ���ĺ��� 2�� �پ� �ִ� ¦�� ã���ϴ�.�״���, 
// �� ���� ������ ��, �յڷ� ���ڿ��� �̾� ���Դϴ�.�� ������ �ݺ��ؼ� ���ڿ��� ��� �����Ѵٸ� ¦���� �����ϱⰡ ����˴ϴ�.
// ���ڿ� S�� �־����� ��, ¦���� �����ϱ⸦ ���������� ������ �� �ִ��� ��ȯ�ϴ� �Լ��� �ϼ��� �ּ���.
// ���������� ������ �� ������ 1��, �ƴ� ��� 0�� �������ָ� �˴ϴ�.
//
// 
//���� ���, ���ڿ� S = baabaa ���
//
//b aa baa �� bb aa �� aa ��
//
//�� ������ ���ڿ��� ��� ������ �� �����Ƿ� 1�� ��ȯ�մϴ�.
//
//���ѻ���
//���ڿ��� ���� : 1, 000, 000������ �ڿ���
//���ڿ��� ��� �ҹ��ڷ� �̷���� �ֽ��ϴ�.


#include <iostream>
#include<string>
#include<list>
#include<stack>

// ����Ʈ�� �ϴٰ� ȿ���� �˻� ����.

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