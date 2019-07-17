#include <iostream>

using namespace std;

class Parent {
public:
	virtual void func() {
		cout << "Parent::func().." << endl;
	}
private:
	int a;
};

class Parent2 {
public:
	void func() {
		cout << "Parent::func().." << endl;
	}
private:
	int a;
};


int main(void) {
	Parent p1;
	Parent2 p2;

	cout << "sizof(p1)=" << sizeof(p1) << endl;   //�������4���ֽھ���vptrָ����ռ�õĿռ�
	cout << "sizeof(p2)=" << sizeof(p2) << endl;

	return 0;
}