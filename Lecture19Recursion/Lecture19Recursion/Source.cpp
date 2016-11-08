using namespace std;
#include <iostream>
int recursiveFactorial(int n)
{
	if (n == 1)//base case
	{
		return n;//or "return 1;"
	}
	else//recursive case
	{
		return n * recursiveFactorial(n - 1);
	}
}

double recursiveFibonacci(double f)
{
	if (f == 0)//base case 1
	{
		return 0;
	}
	else if (f == 1)//base case 2
	{
		return 1;
	}
	else
	{
		return recursiveFibonacci(f - 2) + recursiveFibonacci(f - 1);
	}
}

int iterativeFibonacci(int n)//not working
{
	int f = 0;
	int a, b, c;
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	else

	
	a = 0;
	b = 1;
	while (f<n - 1)
	{
		c = a + b;
		a = b;
		b = c;
		f++;
	}
	return c;
}

void main()
{
	int answer;
	int input;
	cout << "Please input the number you would like to find the factorial of: ";
	cin >> input;
	answer = recursiveFactorial(input);
	cout << input << "! = " << answer << endl;
	double input2;
	cout << "Testing Fibonacci functions. Please enter a number: ";
	cin >> input2;
	cout << "Recursive: " << recursiveFibonacci(input2) << endl;
	cout << "Iterative: " << iterativeFibonacci(input2) << endl;
}