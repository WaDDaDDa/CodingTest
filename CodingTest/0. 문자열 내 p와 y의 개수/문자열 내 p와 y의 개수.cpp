
//���� ����
//�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�.s�� 'p'�� ������ 'y'�� ������ ���� ������ True,
//  �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���.
//  'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�.
// ��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.
//
//���� ��� s�� "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.
//
//���ѻ���
//���ڿ� s�� ���� : 50 ������ �ڿ���
//���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.


#include <string>
#include <iostream>

bool solution(std::string _Str)
{
    int CountP = 0;
    int CountY = 0;

    for (size_t i = 0; i < _Str.size(); i++)
    {
        if (_Str.c_str()[i] == 'Y' or _Str.c_str()[i] == 'y')
        {
            CountY++;
        }

        if (_Str.c_str()[i] == 'P' or _Str.c_str()[i] == 'p')
        {
            CountP++;
        }
    }

    bool answer = false;

    if (CountP == CountY)
    {
        answer = true;
    }

    return answer;
}

void main()
{
    bool Result0 = solution("pPoooyY");
    bool Result1 = solution("Pyy");


    int a = 0;
}