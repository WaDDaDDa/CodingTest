//���� ����
//0�� 1�� �̷���� � ���ڿ� x�� ���� ���� ��ȯ�� ������ ���� �����մϴ�.
//
//x�� ��� 0�� �����մϴ�.
//x�� ���̸� c��� �ϸ�, x�� "c�� 2�������� ǥ���� ���ڿ�"�� �ٲߴϴ�.
//���� ���, x = "0111010"�̶��, x�� ���� ��ȯ�� ���ϸ� x = "0111010" -> "1111" -> "100" �� �˴ϴ�.
//
//0�� 1�� �̷���� ���ڿ� s�� �Ű������� �־����ϴ�.s�� "1"�� �� ������ ����ؼ� s�� ���� ��ȯ�� ������ ��, 
// ���� ��ȯ�� Ƚ���� ��ȯ �������� ���ŵ� ��� 0�� ������ ���� �迭�� ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//s�� ���̴� 1 �̻� 150, 000 �����Դϴ�.
//s���� '1'�� �ּ� �ϳ� �̻� ���ԵǾ� �ֽ��ϴ�.


#include <string>
#include <vector>
#include <algorithm>

// vec [�Լ������ Ƚ��, 0���ŵ� Ƚ��]
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
		//Size�� ������ ������ȯ �ؾ���.
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


// �׽�Ʈ ���̽� 11~ 13 ����. �����Ҹ�.

// �˰ԵȰ�
// 1. reverse �Լ��� ���� �迭�� ������ �� �ִ�.