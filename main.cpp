#include <iostream>

void siepinski(int levels);

std::string operator*(const std::string& a, unsigned int b);

int pascal(int, int);

int main()
{
	siepinski(16);
	//ne pas depacé 16 pour des raison de performance
	return 0;
}

int pascal(int row, int column)
{
	if (column == 0)
		return 0;
	else if (row == 1 && column == 1)
		return 1;
	else if (column > row)
		return 0;
	else
		return (pascal(row - 1, column - 1) + pascal(row - 1, column));
}

void siepinski(int levels)
{
	std::string spacer = "  ";
	for (int i = 1; i <= levels; i++)
	{
		std::cout<<spacer*(levels-i);
		for (int j = 1; j <= i; j++)
		{
			(pascal(i,j)%2)?std::cout<<"*":std::cout<<" ";
			std::cout<<spacer;
		}
		printf("\n");
	}
}

std::string operator*(const std::string& a, unsigned int b)
{
	std::string output;
	while (b--)
	{
		output += a;
	}
	return output;
}