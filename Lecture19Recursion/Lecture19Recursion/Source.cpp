using namespace std;
#include <iostream>
int recursiveFactorial(int n)
{
	if (n == 1)//base case
	{
		return n;
	}
	else//recursive case
	{
		return n * recursiveFactorial(n - 1);
	}
}

void main()
{
	int answer;
	int input;
	cout << "Please input the number you would like to find the factorial of: ";
	cin >> input;
	answer = recursiveFactorial(input);
	cout << input << "! = " << answer << endl;
}