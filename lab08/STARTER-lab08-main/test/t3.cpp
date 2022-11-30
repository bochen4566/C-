#include <iostream>
using namespace std;

class Base1 {
private:
	double data;
public:
	void setData(double data) { this->data = data; }
	double getData() { return data; }
};

class Base2 {
protected:
	double data;
public:
	void setData(double data) { this->data = data; }
	double getData() { return data; }
};

class Derived : public Base1, public Base2 {
public:
	void setData(double data) { Base1::setData(data); Base2::setData(data); }
	void getData() { cout << Base1::getData() << " " << Base2::getData() << endl; }
};

int main()
{
	Derived *pd = new Derived;
    Base2 b2;
    b2.setData(2);
    
    pd->Base1::setData(1);
    pd->Base2::setData(2);
    pd->getData();
	delete pd;


    return 0;
}