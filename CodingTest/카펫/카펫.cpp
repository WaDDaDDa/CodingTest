#include <string>
#include <vector>
#include <set>


// 두수의 합으로 약수구해서 가운데에 있는 약수 두수로 구하는것. 실패.
// 
std::vector<int> solution(int brown, int yellow) 
{
    std::vector<int> answer;

    std::set<int> MapNum;

    int Test = brown + yellow;

    int Value = 0;
    int A = 0;
    int B = 0;

    bool Once = false;

    for (size_t i = 1; i <= Test; i++)
    {

        if (Test % i == 0)
        {
            if (Once == false && MapNum.end() != MapNum.find(i))
            {
                A = i;
                B = Test / i;
                Once = true;
                break;

            }

            if (i == Test / i)
            {
                A = i;
                B = i;
                break;
            }
            MapNum.insert(i);
            MapNum.insert(Test / i);

        }

    }


    if (A <= B)
    {
        int Copyint = A;
        A = B;
        B = Copyint;
    }

    if (A <= yellow)
    {
        std::set<int>::iterator Iter1 = MapNum.find(A);
        std::set<int>::iterator Iter2 = MapNum.find(B);

        Iter1++;
        Iter2--;
        A = *Iter1;
        B = *Iter2;
    }

    answer.push_back(A);
    answer.push_back(B);

    return answer;
}


int main()
{
    solution(18, 6);
}