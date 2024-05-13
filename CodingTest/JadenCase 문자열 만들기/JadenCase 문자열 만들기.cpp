//���� ����
//JadenCase�� ��� �ܾ��� ù ���ڰ� �빮���̰�, �� ���� ���ĺ��� �ҹ����� ���ڿ��Դϴ�.
// ��, ù ���ڰ� ���ĺ��� �ƴ� ������ �̾����� ���ĺ��� �ҹ��ڷ� ���� �˴ϴ�. (ù ��° ����� �� ����)
//���ڿ� s�� �־����� ��, s�� JadenCase�� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//s�� ���� 1 �̻� 200 ������ ���ڿ��Դϴ�.
//s�� ���ĺ��� ����, ���鹮��(" ")�� �̷���� �ֽ��ϴ�.
//���ڴ� �ܾ��� ù ���ڷθ� ���ɴϴ�.
//���ڷθ� �̷���� �ܾ�� �����ϴ�.
//���鹮�ڰ� �����ؼ� ���� �� �ֽ��ϴ�.


#include <string>
#include <vector>
#include <cctype>

std::string solution(std::string s) 
{
    std::string answer = "";

	bool Upper = true;

	for (size_t i = 0; i < s.size(); i++)
	{

		if (s.c_str()[i] == ' ')
		{
			Upper = true;
			answer += tolower(s[i]);
			continue;
		}

		if (true == Upper)
		{
			Upper = false;
			answer += toupper(s[i]);
			continue;
		}

		answer += tolower(s[i]);
	}

    return answer;
}

void main()
{
	std::string A = solution("3people unFollowed me");
	std::string B = solution("  4at kkgr bbaod    kgkl aasg");

	int a = 0;
}

// ���� �˰� �Ȱ�.
// 1. #include <cctype> ���� toupper, tolower �� �빮�� �ҹ��� ġȯ�ϴ� ��.