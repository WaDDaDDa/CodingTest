#include <string>
#include <vector>

// 0.1�ʸ� int 1�� �ΰڴ�.
// 1�ʴ� 10
// 1���� 600
// 1�ð��� 36000
class Cursor
{
public:
    float Start = 0.0f;
    float Goal = 0.0f;
    float Speed = 0.0f;
    bool End = false;

    virtual void Init()
    {

    }

    virtual void Update()
    {
        Start += Speed;
    }

    virtual bool GoalCheck()
    {
        return End;
    }
};

class HCursor :public Cursor
{
public:
    void Init() override
    {
        Speed = 1.0f / 10.0f;
        Start *= 36000.0f;
        Goal *= 36000.0f;
    }

    void Update() override
    {
        Cursor::Update();

    }

    bool GoalCheck() override
    {

        if(static_cast<int>(Start) == static_cast<int>(Goal))
        {
            End = true;
            return End;
        }
        End = false;
        return End;
    }
};

class MCursor :public Cursor
{
public:
    void Init() override
    {
        Speed = 1.0f / 10.0f;
        Start *= 600.0f;
        Goal *= 600.0f;
    }

    void Update() override
    {
        Cursor::Update();
        int CurMin = Start / 36000;

        if (CurMin == 1)
        {
            Start = 0;
        }
    }

    bool GoalCheck() override
    {
        int CurHour = Start / 600;

        if (CurHour == static_cast<int>(Goal))
        {
            End = true;
            return End;
        }
        End = false;
        return End;
    }
};

class SCursor :public Cursor
{
public:
    void Init() override
    {
        Speed = 1.0f / 10.0f;
        Start *= 1.0f;
    }

    void Update() override
    {
        Cursor::Update();
        int CurSec = Start / 600;

        if (CurSec == 1)
        {
            Start = 0;
        }
    }

    bool GoalCheck() override
    {
        int CurHour = Start / 10;

        if (CurHour == static_cast<int>(Goal))
        {
            End = true;
            return End;
        }
        End = false;
        return End;
    }
};

int solution(int h1, int m1, int s1, int h2, int m2, int s2) 
{
    std::vector<Cursor> CurVec;
    HCursor H;
    H.Start = h1;
    H.Goal = h2;
    H.Init();
    MCursor M;
    M.Start = m1;
    M.Goal = m2;
    M.Init();
    SCursor S;
    S.Start = s1;
    S.Goal = s2;
    S.Init();

    CurVec.push_back(H);
    CurVec.push_back(M);
    CurVec.push_back(S);


    int answer = 0;

    while (true)
    {
        CurVec;
        // �˶�Ȯ��
        int SCross = S.Start / 10;
        int MCross = M.Start / 600;
        int HCross = H.Start / 36000;

        if (HCross == SCross || MCross == SCross)
        {
            answer++;
        }

        S.GoalCheck();
        M.GoalCheck();
        H.GoalCheck();

        if (H.Start >= H.Goal && M.Start >= M.Goal && S.Start >= S.Goal)
        {
            return answer;
        }
        // ������ Ȯ��
        S.Update(); //�����̰�
        M.Update(); //�����̰�
        H.Update(); //�����̰�

        int a = 0;
    }

}


void main()
{
    int a = solution(0, 5, 30, 0, 7, 0);

    int z = 0;
}