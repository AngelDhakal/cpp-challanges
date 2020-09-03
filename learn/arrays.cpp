#include <iostream>

void print_array(int array[], int size)
{
	for (int i=0;i<size;i++)
	{
		std::cout << array[i] << std::endl;
	}
}


void input_arr(int array[], int size)
{
	for(int i=0;i<size;i++)
	{
		std::cin >> array[i];
	}
}

int main()
{
	int guesses[5];
	int size = sizeof(guesses) / sizeof(int);
	input_arr(guesses,size);
	print_array(guesses,size);
}
