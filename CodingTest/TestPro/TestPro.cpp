
#include <iostream>
#include <vector>
#include <map>

struct Test
{
	int A = 0;
	float C = 0.0f;
	char B = 0;
	short D = 0;
	char* E;
};

// �Լ��� 128 * 128 ����Ʈ�� ���ÿ� ����Ͽ� ���ÿ����÷��� ������ �ִ�
//void FuncA()
//{
//	int Slot[128][128] = { 0, };
//
//	for (int j = 0; j < 128; ++j)
//	{
//		for (int i = 0; i < 128; ++i)
//		{
//			Slot[i][j] = i * 128 + j;
//		}
//	}
//
//	int a = 0;
//}

// �Ҵ��� int�迭�� �Ѿ �����ϰ� �Ǿ� ������.
// �Ҵ�� int �迭�� �Ѿ�� ���� �ְ� �ȴ�.
//void FuncA()
//{
//	int Test[10];
//
//	for (int i = 0; i < 32; i++)
//	{
//		Test[i] = i * 100;
//	}
//}

class A
{
public: 
	A() {};
	~A() {};

private:
	int a;
	std::vector<int> vecint;

};
class B
{
private:
	int Num;
public:
	B() {};
	~B() {};
};

class C
{
private:
	int Num;
public:
	C() {};
	~C() {};
};


void main()
{
	size_t Size = sizeof(Test);

	A* Test = new A();
	memset(Test, 0, sizeof(A));

	B TestB;
	C TestC;
	std::map<B, C> TestMap;
	//TestMap.insert(std::map<B, C>::value_type(TestB, TestC));
	//TestMap.insert(std::make_pair(TestB, TestC));
	//TestMap.insert({ TestB, TestC });
	// �� �������� ����. std::map�� �⺻������ Ű�� ���Ͽ� ������ �ϴµ� �񱳿����ڸ� �������� �ʾƼ� ������ �Ұ��� -> �����Ͽ���.
	// ���� �������� ����.
	//FuncA();
	int a = 0;
}