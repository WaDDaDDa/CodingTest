

class A
{
public:
	A()
	{
		a = new int(0);
	}
	virtual ~A()
	{
		delete a;
	}
private: 
	int* a;
};

class B :public A
{
public:
	B()
	{
		b = new int(0);
	}

	~B()
	{
		delete b;
	}
private:
	int* b;
};

void main()
{
	A* a = new B;
	B* b = new B;
	
	delete a;
	delete b;

	int z = 0;
}

// 부모클래스의 소멸자에 virtual을 붙여서 해결.

// 가상소멸자.  36번째 줄 처럼 자식인 B를 부모인 A로 받아서 new를 하게 되면
// delete a 를 하게되면 부모의 소멸자 만을 호출하게 되어 자식인 B의 소멸자가 호출되지 않게 된다.
// 이를 해결하기위해서는 부모 소멸자에 virtual을 붙여서 가상 소멸자로 만들어주어야 정상적으로 소멸자 호출이 가능해진다.