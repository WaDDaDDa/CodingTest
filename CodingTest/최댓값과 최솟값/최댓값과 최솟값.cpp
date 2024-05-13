//���� ����
//���ڿ� s���� �������� ���е� ���ڵ��� ����Ǿ� �ֽ��ϴ�.
// str�� ��Ÿ���� ���� �� �ּҰ��� �ִ밪�� ã�� �̸� "(�ּҰ�) (�ִ밪)"������ ���ڿ��� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.
//������� s�� "1 2 3 4"��� "1 4"�� �����ϰ�, "-1 -2 -3 -4"��� "-4 -1"�� �����ϸ� �˴ϴ�.
//
//���� ����
//s���� �� �̻��� ������ �������� ���еǾ� �ֽ��ϴ�.


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


//// �˰ԵȰ�.
// 1. Algorithm ����߰��� ���� std::sort�Լ��� �迭�� �ּ� �ִ밪�� ������ �� �ִ�.
// 2. std::stoi �� �̿��Ͽ� ��Ʈ���� int�� �ٲܼ� �ִ�. ��Ʈ�� �� ��Ʈ
// 3. 