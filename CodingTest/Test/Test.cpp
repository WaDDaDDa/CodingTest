
#include <string>
#include <string_view>
#include <algorithm>

// ������ ������ ����
// ���� �ΰ��� �޴´� �� ������ �������� ���ϰ�
// �� ���� �ٽ� ����� ����� ���.
int Sol(const std::string_view& _Str)
{
	int Ans = 0;

	std::string A;
	std::string B;
	bool Change = false;

	for (size_t i = 0; i < _Str.size(); i++)
	{
		if (Change == true)
		{
			B += _Str.data()[i];
			continue;
		}

		if (_Str.data()[i] == '+')
		{
			Change = true;
			continue;
		}

		A += _Str.data()[i];

	}
	std::reverse(A.begin(), A.end());
	std::reverse(B.begin(), B.end());

	int Aint = std::stoi(A);
	int Bint = std::stoi(B);

	Ans = Aint + Bint;

	std::string Anstr = std::to_string(Ans);
	std::reverse(Anstr.begin(),Anstr.end());

	Ans = std::stoi(Anstr);
	
	return Ans;
}



int main()
{
	int a = Sol("1234 + 789");

	int b = 0;
}