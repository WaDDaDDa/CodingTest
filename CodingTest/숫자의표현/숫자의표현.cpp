//���� ����
//Finn�� ���� ���а��ο� ���� �ֽ��ϴ�.
// ���� ���θ� �ϴ� Finn�� �ڿ��� n�� ������ �ڿ������ ǥ�� �ϴ� ����� ��������� ����� �˰� �Ǿ����ϴ�.
// ������� 15�� ������ ���� 4������ ǥ�� �� �� �ֽ��ϴ�.
//
//1 + 2 + 3 + 4 + 5 = 15
//4 + 5 + 6 = 15
//7 + 8 = 15
//15 = 15
//�ڿ��� n�� �Ű������� �־��� ��, ���ӵ� �ڿ������ n�� ǥ���ϴ� ����� ���� return�ϴ� solution�� �ϼ����ּ���.
//
//���ѻ���
//n�� 10, 000 ������ �ڿ��� �Դϴ�.



#include <string>
#include <vector>

int solution(int _N) 
{
    int answer = 0;
    int Count = 0;


    for (int i = 1; i <= _N; i++)
    {
        int Ans = 0;
        for (int j = i; j <= _N; j++)
        {
            Ans += j;

            if (Ans > _N)
            {
                break;
            }

            if (Ans == _N)
            {
                Count++;
                break;
            }

        }
    }

    return Count;
}

int main()
{
    int a = solution(15);

    int z = 0;
}