#include <iostream>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	std::map<int, int> card;

//data insertion
	for(int i = 0; i < num; i++){
		
		int input;
		std::cin >> input;
		card.insert({input,input});
	}

//data check
	std::cin >> num;

	for(int i = 0; i< num; i++){
		
		int input;
		std::cin >> input;
		if(card.find(input) != card.end()){
			std::cout << "1 ";
		}

		else{
			std::cout << "0 ";
		}

	}

	return 0;
}
