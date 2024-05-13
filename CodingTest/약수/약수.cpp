#include <string>
#include <vector>
#include <set>

int solution(int n) 
{
    std::vector<int> Num;
    std::set<int> MapNum;

    for (size_t i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            MapNum.insert(i);
            MapNum.insert(n / i);
        }
        
    }

    int answer = 0;

    for (std::set<int>::iterator Iter = MapNum.begin(); Iter != MapNum.end(); Iter++)
    {
        answer += *Iter;
    }

    return answer;
}

void main()
{
    std::vector<int> An;


    for (size_t i = 0; i < 3000; i++)
    {
        An.push_back(solution(i));
    }

    int z = 0;

}