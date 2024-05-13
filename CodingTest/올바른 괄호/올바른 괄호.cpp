//���� ����
//��ȣ�� �ٸ��� ¦�������ٴ� ���� '(' ���ڷ� �������� �ݵ�� ¦��� ')' ���ڷ� ������ �Ѵٴ� ���Դϴ�.���� ���
//
//"()()" �Ǵ� "(())()" �� �ùٸ� ��ȣ�Դϴ�.
//")()(" �Ǵ� "(()(" �� �ùٸ��� ���� ��ȣ�Դϴ�.
//'(' �Ǵ� ')' �θ� �̷���� ���ڿ� s�� �־����� ��, ���ڿ� s�� �ùٸ� ��ȣ�̸� true�� return �ϰ�,
//  �ùٸ��� ���� ��ȣ�̸� false�� return �ϴ� solution �Լ��� �ϼ��� �ּ���.
//
//���ѻ���
//���ڿ� s�� ���� : 100, 000 ������ �ڿ���
//���ڿ� s�� '(' �Ǵ� ')' �θ� �̷���� �ֽ��ϴ�.


#include <string>
#include <iostream>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
//bool solution(const std::string& _Str)
//{
//    int LeftValue = 0;
//    int RightValue = 0;
//
//    bool answer = false;
//
//    for (size_t i = 0; i < _Str.size(); i++)
//    {
//        if (_Str.c_str()[i] == '(')
//        {
//            LeftValue++;
//        }
//        else if (_Str.c_str()[i] == ')')
//        {
//            RightValue++;
//        }
//
//        if (LeftValue < RightValue)
//        {
//            answer = false;
//            return answer;
//        }
//    }
//
//
//    if (LeftValue == RightValue)
//    {
//        answer = true;
//    }
//    
//    return answer;
//
//}

bool solution(std::string s)
{
    int LeftValue = 0;
    int RightValue = 0;

    std::string _Str = s;

    bool answer = false;

    for (size_t i = 0; i < _Str.size(); i++)
    {
        if (_Str.c_str()[i] == '(')
        {
            LeftValue++;
        }
        else if (_Str.c_str()[i] == ')')
        {
            RightValue++;
        }

        if (LeftValue < RightValue)
        {
            answer = false;
            return answer;
        }
    }


    if (LeftValue == RightValue)
    {
        answer = true;
    }

    return answer;
}

void main()
{ 
    bool A = solution("()()");
    bool B = solution("(())()");
    bool C = solution(")()(");
    bool D = solution("(()(");

    int a = 0;

}