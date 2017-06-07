#include "AbstractProduct.h"
#include <iostream>
using namespace std;


RandomNumber::RandomNumber() {
	srand(time(0));
	num = rand() % 10;
}

RandomOperation::RandomOperation() {
	srand(time(0));
	int n;
	n = rand() % 4;

	
	switch (n)
	{
	case 0:ope= '+'; break;
	case 1:ope = '-'; break;
	case 2:ope = '*'; break;
	case 3:ope = '/'; break;
	}
}

AbstractProduct* SimpleFactory::createProduct(int type) {
	AbstractProduct* temp = NULL;
	switch (type)
	{
	case 1:
		temp = new RandomNumber();
		break;
	case 2:
		temp = new RandomOperation();
		break;
	}
	return temp;

}
AbstractFactory::AbstractFactory() {

}
AbstractFactory::~AbstractFactory() {

}
SimpleFactory::SimpleFactory() {

}
SimpleFactory::~SimpleFactory() {

}

AbstractProduct::AbstractProduct()
{
}