//���� ����
//�Ǻ���ġ ���� F(0) = 0, F(1) = 1�� ��, 1 �̻��� n�� ���Ͽ� F(n) = F(n - 1) + F(n - 2) �� ����Ǵ� �� �Դϴ�.
//
//�������
//
//F(2) = F(0) + F(1) = 0 + 1 = 1
//F(3) = F(1) + F(2) = 1 + 1 = 2
//F(4) = F(2) + F(3) = 1 + 2 = 3
//F(5) = F(3) + F(4) = 2 + 3 = 5
//�� ���� �̾����ϴ�.
//
//2 �̻��� n�� �ԷµǾ��� ��, n��° �Ǻ���ġ ���� 1234567���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��� �ּ���.
//
//���� ����
//n�� 2 �̻� 100, 000 ������ �ڿ����Դϴ�.



#include <string>
#include <vector>

int F(int _N)
{
    if (0 == _N)
    {
        return 0;
    }

    if (1 == _N)
    {
        return 1;
    }


    int ans = F(_N - 1) + F(_N - 2);

    return ans;
}

int solution(int _N) 
{
    int answer = 0;
    std::vector<int> Vec;
    Vec.push_back(0);
    Vec.push_back(1);

    for (size_t i = 2; i <= _N; i++)
    {
        Vec.push_back((Vec[i - 2] + Vec[i - 1]) % 1234567);
    }

    long long  Value = Vec[_N];

    answer = static_cast<int>(Value % 1234567);

    return answer;
}

int main()
{
    int a = solution();

    int z = 0;
}