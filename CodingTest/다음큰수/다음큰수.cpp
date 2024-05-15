//���� ����
//�ڿ��� n�� �־����� ��, n�� ���� ū ���ڴ� ������ ���� ���� �մϴ�.
//
//���� 1. n�� ���� ū ���ڴ� n���� ū �ڿ��� �Դϴ�.
//���� 2. n�� ���� ū ���ڿ� n�� 2������ ��ȯ���� �� 1�� ������ �����ϴ�.
//���� 3. n�� ���� ū ���ڴ� ���� 1, 2�� �����ϴ� �� �� ���� ���� �� �Դϴ�.
//���� �� 78(1001110)�� ���� ū ���ڴ� 83(1010011)�Դϴ�.
//
//�ڿ��� n�� �Ű������� �־��� ��, n�� ���� ū ���ڸ� return �ϴ� solution �Լ��� �ϼ����ּ���.
//
//���� ����
//n�� 1, 000, 000 ������ �ڿ��� �Դϴ�.


#include <bitset>
#include <string>
#include <vector>

int solution(int _N) 
{
    int answer = 0;
    std::string Num;

    std::bitset<20> BitNum(_N);

    Num = BitNum.to_string();

    int BitCount = BitNum.count();

    for (size_t i = _N + 1; i <= 1000000; i++)
    {
        std::bitset<20> BitNum2(i);

        int BitCount2 = BitNum2.count();

        if (BitCount2 == BitCount)
        {
            answer = i;
            return answer;
        }
    }

}

int main()
{
    int a = solution(78);


    int z = 0;
}

// 
// #include <bitset> �߰��Ͽ� std::bitset�� ����� �� �ִ�.
// bitset�� 2������ ����ϱ� ���ϰ� ���ش�.
// count�� 1�� ������ �˼��ִ�.
// bitset�� tostring�� ���� ���ڿ��� ��ȯ�� �� �ִ�.
