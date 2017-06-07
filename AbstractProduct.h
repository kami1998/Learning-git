#include <ctime>
class AbstractProduct {
public:
	AbstractProduct();
};
class RandomNumber :public AbstractProduct {
private:
	int num;
public:
	RandomNumber();
};
class RandomOperation :public AbstractProduct {
private:
	char ope;
public:
	RandomOperation();
};

class AbstractFactory {

	 public:
		  AbstractFactory();
		  virtual ~AbstractFactory();
          virtual AbstractProduct* createProduct(int type) = 0;		
};
class SimpleFactory :public AbstractFactory {
public:
		  SimpleFactory();
		  ~SimpleFactory();
		
    AbstractProduct* createProduct(int type);

};
