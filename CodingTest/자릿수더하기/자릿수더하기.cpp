
//���� ����
//�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
//������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.
//
//���ѻ���
//N�� ���� : 100, 000, 000 ������ �ڿ���


#include <iostream>


int solution(int n)
{

    int A = n;
    int answer = 0;

    while (A != 0)
    {
        answer += A % 10;
        A = A / 10;
    }
   

    return answer;
}

void main()
{
    int a = solution(123);
    int z = 0;
}