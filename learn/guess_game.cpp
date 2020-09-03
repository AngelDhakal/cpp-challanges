#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void play_game()
{
	int random = rand() % 251;
	int guess;
	std::vector<int> total_guesses;
	
	while (true)
	{
		std::cout << "Guess a number: ";
		std::cin >> guess;

		
		total_guesses.push_back(guess);
		
		if (guess==random)
		{
			std::cout << std::endl;
			std::cout <<"You win" << std::endl;
			std::cout << std::endl;


			for(int item : total_guesses)
			{
				std::cout << item << " ";
			}

			std::cout << std::endl;

			std::ofstream file("best_score");
			std::string input;
			if (file >> input < total_guesses.size())
			{
				std::cout << "You beat the score" << std::endl;
			}
			file.close();

			std::ifstream file("best_score");
			std::int temp = file.get();
			if(temp<total_guesses.size())
			{
				file << total_guesses.size();
			}
			file.close();
			break;
		}
		else if(guess<random){
			std::cout << "Low" << std::endl;
		}
		else{
			std::cout << "High" << std::endl;
		}
			
		if (guess>250)
			std::cout << "Guess a number below 250" << std::endl;

	}
}

int main()
{
	
	srand(time(NULL));
	
	int choice;
	
	do
	{
		std::cout << std::endl;
		std::cout << "0. Quit" << std::endl << "1. Lets Play\n";
		std::cin >> choice;
		
		switch(choice)
		{
			case 0:
				std::cout << "Come again later" << std::endl;
				return 0;
			case 1:
				play_game();
				break;	
		}
	}while(choice!=0);
	
}