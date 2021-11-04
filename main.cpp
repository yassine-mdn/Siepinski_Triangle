#include <iostream>

void siepinski(int levels);

void printTriangle(int nbrOfTriangles,int offset);

std::string operator*(const std::string& a, unsigned int b);

//TODO: Add comments and clean up code and more meaninful variable names

int main()
{
	siepinski(10);
	return 0;
}

void siepinski(int levels)
{
	static const int upperBound = levels;
	if (levels == 0)
	{
		printTriangle(upperBound,levels);
	}
	else
	{
		printTriangle(upperBound - levels,levels);
		siepinski(--levels);
	}
}

void printTriangle(int nbrOfTriangles,int offset)
{
	std::string a{ "  *  " };
	std::string b{ " *** " };
	std::string c{ "*****" };
	std::string spacer{ "  " };
	std::cout << spacer * offset << a * nbrOfTriangles << std::endl;
	std::cout << spacer * offset << b * nbrOfTriangles << std::endl;
	std::cout << spacer * offset << c * nbrOfTriangles << std::endl;
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