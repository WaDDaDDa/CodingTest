//���� ����
//�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�.
// n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���.
// ������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.
//
//���� ����
//n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.

#include <string>
#include <vector>


long long solution(long long n) 
{
    std::string Str = std::to_string(n);
    std::vector<int> Vec;
    
    int A = '9';
    int B = 9;

    while (0 <= B)
    {
        for (size_t i = 0; i < Str.size(); i++)
        {
            if (Str.c_str()[i] == A)
            {
                Vec.push_back(B);
            }

        }

        A -= 1;
        B -= 1;
    }

    long long answer = 0;

    for (size_t i = 0; i < Vec.size(); i++)
    {
        answer = answer * 10 + static_cast<long long>(Vec[i]);
    }


    return answer;
}

void main()
{
    long long a = solution(118306);

    int z = 0;
}