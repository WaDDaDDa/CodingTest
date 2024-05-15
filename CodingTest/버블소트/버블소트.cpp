
#include <vector>

std::vector<int> Bobble(std::vector<int> _Vec)
{
	for (size_t i = 0; i < _Vec.size() - 1; i++)
	{
		for (size_t j = 0; j < _Vec.size() - 1 - i; j++)
		{
			if (_Vec[j] > _Vec[j + 1])
			{
				std::swap(_Vec[j], _Vec[j + 1]);
			}
		}
	}

	return _Vec;
}


int main()
{
	std::vector<int> Ans;

	Ans = Bobble({3, 12, 4, 21, 5, 9, 13});

	int a = 0;
}