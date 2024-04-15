#include <iostream>
#include <string>

using namespace std;

class calculator
{
private:
	double x, y, sum;
	char oper;
public:
	void menu(double x, double y, double sum, char oper);

	void add(double x, double y, char oper,double sum);
	
	void sub(double x, double y, char oper,double sum);
	
	void mul(double x, double y, char oper,double sum);

	void di(double x, double y, char oper, double sum);
	
	void C(double x, double , double sum);

};