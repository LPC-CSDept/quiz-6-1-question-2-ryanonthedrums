#include "q2.hpp"
#include <iomanip>
using namespace std;

//********************
int main()
{
	int n1, n2, n3;
	int min;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}
