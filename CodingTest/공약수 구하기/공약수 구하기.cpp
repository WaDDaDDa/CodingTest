
// 공약수 구하는 함수.
// 공약수가 없다면 -1 출력.

#include <vector>
#include <set>

std::set<int> Div(int _Num)
{
	std::set<int> Ans;

	for (int i = 1; i < _Num; i++)
	{
		int A = _Num % i;
		if (A == 0)
		{
			Ans.insert({ i});
			Ans.insert({ _Num / i});
		}
	}

	return Ans;
}

std::vector<int> Sol(int _Num0, int _Num1)
{
	//약수를 각각 구한다.
	std::set<int> A = Div(_Num0);
	std::set<int> B = Div(_Num1);

	std::vector<int> Vec;

	for(std::set<int>::iterator Iter = B.begin(); Iter != B.end(); Iter++)
	{
		if (A.end() != A.find(*Iter))
		{
			Vec.push_back(*Iter);
		}
	}

	return Vec;
}


int main()
{
	std::vector<int> Ans;

	Ans = Sol(10, 20);

	int a = 0;
}