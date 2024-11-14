// Search for "WRITE YOUR CODE" to complete this program
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename ElementType, typename ContainerType>
ElementType maxElement(const ContainerType& container)
{
	ElementType max = container[0];
	auto it = container.begin();

	while (it != container.end())
	{
		if (*it > max)
			max = *it;
		it++;
	}
	return max;

}

template<typename ElementType, typename ContainerType>
ElementType minElement(const ContainerType& container)
{
	ElementType min;
	min = container[0];
	auto it = container.begin();

	while (it != container.end())
	{
		if (*it < min)
			min = *it;
		it++;
	}

	return min;
}

int main()
{
	vector<string> stringVector{ "red", "green", "blue", "yellow", "orange", "purple", "gray", "white" };
	cout << "The maximum string is " <<
		(maxElement<string, vector<string>>(stringVector)) << endl;

	vector<int> intVector(8);
	cout << "Enter eight integers: ";
	for (unsigned i = 0; i < 8; i++)
		cin >> intVector[i];
	cout << "The maximum int is " <<
		(maxElement<int, vector<int>>(intVector)) << endl;
	cout << "The minimum int is " <<
		(minElement<int, vector<int>>(intVector)) << endl;

	return 0;
}