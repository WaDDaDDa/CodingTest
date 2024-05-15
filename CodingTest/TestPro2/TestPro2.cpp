

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

// �θ�Ŭ������ �Ҹ��ڿ� virtual�� �ٿ��� �ذ�.

// ����Ҹ���.  36��° �� ó�� �ڽ��� B�� �θ��� A�� �޾Ƽ� new�� �ϰ� �Ǹ�
// delete a �� �ϰԵǸ� �θ��� �Ҹ��� ���� ȣ���ϰ� �Ǿ� �ڽ��� B�� �Ҹ��ڰ� ȣ����� �ʰ� �ȴ�.
// �̸� �ذ��ϱ����ؼ��� �θ� �Ҹ��ڿ� virtual�� �ٿ��� ���� �Ҹ��ڷ� ������־�� ���������� �Ҹ��� ȣ���� ����������.