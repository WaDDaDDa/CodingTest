#include<vector>
#include<string>

std::string Sol(int _R, int _G, int _B)
{
	std::vector<int> Num;

	int RedHead = _R / 16;
	int RedTail = _R % 16;

	int GreenHead = _G / 16;
	int GreenTail = _G % 16;

	int BlueHead = _B / 16;
	int BlueTail = _B % 16;

	Num.push_back(RedHead);
	Num.push_back(RedTail);
	Num.push_back(GreenHead);
	Num.push_back(GreenTail);
	Num.push_back(BlueHead);
	Num.push_back(BlueTail);

	std::vector<std::string> Str;

	std::string RedH = "";
	std::string RedT = "";

	std::string GreenH = "";
	std::string GreenT = "";

	std::string BlueH = "";
	std::string BlueT = "";

	Str.push_back(RedH);
	Str.push_back(RedT);
	Str.push_back(GreenH);
	Str.push_back(GreenT);
	Str.push_back(BlueH);
	Str.push_back(BlueT);

	for (size_t i = 0; i < Num.size(); i++)
	{
		switch (Num[i])
		{
		case 10:
			Str[i] += 'A';
			break;
		case 11:
			Str[i] += 'B';
			break;
		case 12:
			Str[i] += 'C';
			break;
		case 13:
			Str[i] += 'D';
			break;
		case 14:
			Str[i] += 'E';
			break;
		case 15:
			Str[i] += 'F';
			break;
		default:
			Str[i] += std::to_string(Num[i]);
			break;
		}
	}
	std::string Ans = "";

	for (size_t i = 0; i < Str.size(); i++)
	{
		Ans += Str[i];
	}

	return Ans;
}


int main()
{
	std::string Ans = Sol(255, 255, 0);
	std::string Ans2 = Sol(124, 254, 222);

	int a = 0;
}