#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>

using namespace std;



bool isDigit(char);

bool isOperator(char);

double evaluate(double, double, char);

double postfixEval(string);

bool isDigit(char C)
{
	if(C >= '0' && C <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isOperator(char C)
{	
	if(C == '+' || C == '-' || C == '*' || C == '/')
	{
		return true;
	}		
	else
	{
		return false;
	}
}

double postfixEval(string expression)
{
	stack<double> s;
	
	int i = 0;
	while(expression[i] != '\0')
	{
		if(isDigit(expression[i]))
                {
                        //double result = 0;
                        double result = atof(&expression[i]);
                        s.push(result);
                        i++;
                }

		else if(isOperator(expression[i]))
		{
			double op = s.top();
			s.pop();
			double op1 = s.top();
			s.pop();
			double newresult = evaluate(op, op1, expression[i]);

			s.push(newresult);
		}

		i++;
	}

	return s.top();
}

double evaluate(double op, double op1, char operation)
{
	if(operation == '+')
	{
		return op1 + op;
	}
	else if(operation == '-')
	{
		return op1 - op;
	}
	else if(operation == '*')
	{
		return op1 * op;
	}
	else if(operation == '/')
	{
		return op1/op;
	}
}

int main()
{
	char expression[] = "25 12 7 - 2 * /";
	cout << postfixEval(expression) << endl;

	return 0;

}





