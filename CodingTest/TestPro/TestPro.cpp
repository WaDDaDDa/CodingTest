
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

// 함수가 128 * 128 바이트를 스택에 사용하여 스택오버플로의 위험이 있다
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

// 할당한 int배열을 넘어서 접근하게 되어 터진다.
// 할당된 int 배열을 넘어서서 값을 넣게 된다.
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
	// 비교 연산자의 부재. std::map은 기본적으로 키를 비교하여 정렬을 하는데 비교연산자를 정의하지 않아서 정렬이 불가함 -> 컴파일오류.
	// 복사 생성자의 부재.
	//FuncA();
	int a = 0;
}