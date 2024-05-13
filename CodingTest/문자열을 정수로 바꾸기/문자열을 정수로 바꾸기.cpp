//���� ����
//���ڿ� s�� ���ڷ� ��ȯ�� ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.
//
//���� ����
//s�� ���̴� 1 �̻� 5�����Դϴ�.
//s�� �Ǿտ��� ��ȣ(+, -)�� �� �� �ֽ��ϴ�.
//s�� ��ȣ�� ���ڷθ� �̷�����ֽ��ϴ�.
//s�� "0"���� �������� �ʽ��ϴ�.



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* _S) 
{
    std::string Str = _S;
    std::vector<int> Num;

    for (size_t i = 0; i < Str.size(); i++)
    {
        switch (Str.c_str()[i])
        {
        case '1': 
            Num.push_back(1);
            break;
        case '2':
            Num.push_back(2);
            break;
        case '3':
            Num.push_back(3);
            break;
        case '4':
            Num.push_back(4);
            break;
        case '5':
            Num.push_back(5);
            break;
        case '6':
            Num.push_back(6);
            break;
        case '7':
            Num.push_back(7);
            break;
        case '8':
            Num.push_back(8);
            break;
        case '9':
            Num.push_back(9);
            break;
        case '0':
            Num.push_back(0);
            break;

        default:
            break;
        }
    }
    
    int Pownum = static_cast<int>(Num.size() - 1);

    int answer = 0;

    for (size_t i = 0; i < Num.size(); i++)
    {
        int a = static_cast<int>(pow(10, Pownum));

        answer += Num[i] * a;
        Pownum--;
    }


    if (Str.c_str()[0] == '-')
    {
        answer *= -1;
    }

    return answer;
}

void main()
{
    int a = solution("-12346574");
    
    int c = atoi("-12346574");

    int b = 0;

    return;
}