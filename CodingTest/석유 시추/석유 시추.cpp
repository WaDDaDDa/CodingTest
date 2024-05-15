#include <string>
#include <vector>

int Power(std::vector<std::vector<int>>& _Land, int _First, int _Secend)
{
    int Sol = 0;

    int First = _First;
    int Scend = _Secend;
    int Count = 0;
    int Count2 = 0;
    // 0�϶�
    // [][++]�� ����
    // �߰��϶�
    // [][++] 
    // [][--] �Ѵ� ����
    // size�϶�
    // [][--]�� ����.
    
    // ���� �¿츦 Ȯ���ؼ� 1�� ������ �� �������� ����.
    // ������ 1 �� ������ [][++]�ؼ� ����
    // ������ 1 �� ������ [][--]�ؼ� ����
    // �Ʒ��� 1 �� ������ [++][]�ؼ� ����
    // ���ʿ� 1 �� ������ [--][]�ؼ� ����.

    // ���� �ð�
    while (First + Count2 < _Land.size() && First + Count2 >= 0 && Scend + Count < _Land[0].size() && (_Land[First][Scend + Count] == 1 ||
        ( _Land[First + Count2][Scend + Count] == 1) ||
        ( _Land[First + Count2][Scend + Count] == 1)))
    {
        Count2++;

        // �Ʒ� �ð�
        while (First + Count2 < _Land.size() && _Land[First + Count2][Scend + Count] == 1)
        {
            _Land[First + Count2][Scend] = 0;

            Sol++;
            Count2++;
        }

        Count2 = 0;
        // �� �ð�
        while (First + Count2 >= 0 && _Land[First + Count2][Scend + Count] == 1)
        {
            _Land[First + Count2][Scend] = 0;

            Sol++;
            Count2--;
        }

        _Land[First][Scend + Count] = 0;
        Sol++;
        Count++;

    }

    Count = 0;
    Count2 = 0;
    // ���� �ð�
    int A = Scend + Count;
    while (First + Count2 >= 0 && First + Count2 < _Land.size() && A >= 0 && ((_Land[First][Scend + Count] == 1) ||
        (_Land[First + Count2][Scend + Count] == 1) ||
        ( _Land[First + Count2][Scend + Count] == 1)))
    {
        // �Ʒ� �ð�
        while (First + Count2 < _Land.size() && _Land[First + Count2][Scend + Count] == 1)
        {
            _Land[First + Count2][Scend] = 0;

            Sol++;
            Count2++;
        }

        Count2 = 0;
        // �� �ð�
        while (First + Count2 >= 0 && _Land[First + Count2][Scend + Count] == 1)
        {
            _Land[First + Count2][Scend] = 0;

            Sol++;
            Count2--;
        }
        _Land[First][Scend + Count] = 0;
        Sol++;
        Count--;
        A = Scend + Count;
    }



    return Sol;
}

int solution(std::vector<std::vector<int>> _Land) 
{
    int answer = 0;
    int Num = 0;
    // �Ʒ��� �����ϴ� ��.
    for (size_t i = 0; i < _Land[0].size(); i++)
    {
        int Sol = 0;
        std::vector<std::vector<int>> NewLand = _Land;

        for (size_t j = 0; j < _Land.size(); j++)
        {
            // ���� �߰�
            if (NewLand[j][i] == 1)
            {
                //���� ����.
                //Sol++;

                Sol += Power(NewLand, j, i);

                //NewLand[j][i] = 0;
            }

        }

        if (Sol >= answer)
        {
            answer = Sol;
            Num = i;
        }
    }

    return answer;
}


void main()
{
    int Sol0 = solution({
        {0, 0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0},
        {1, 1, 0, 0, 0, 1, 1, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 1, 1}});

    int Sol1 = solution({ 
        {1, 0, 1, 0, 1, 1},
        {1, 0, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1},
        {1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1} });


    int a = 0;

}