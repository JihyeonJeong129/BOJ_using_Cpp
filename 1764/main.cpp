#include <iostream>
#include <unordered_map>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

    int n,m;

    std::cin >> n >> m;

	std::unordered_map<std::string, int> data_didnot_hear;

	std::string *data_didnot_see = new std::string[m];

	std::string *result = new std::string[m];

//data insertion who did not hear
	for(int i = 0; i < n; i++){
		
		std::string name;

		std::cin >> name;

		data_didnot_hear.insert({name, i});

	}

//data insertion who did not see
	for(int i = 0; i < m; i++)
	{
		std::cin >> data_didnot_see[i];
	}

std::sort(data_didnot_see, data_didnot_see + m);

//if the people who did not hear data insertion -> insert result
    
	int count = 0;

	for(int i = 0; i < m; i++){
		
		if(data_didnot_hear.find(data_didnot_see[i]) != data_didnot_hear.end()){
			
			result[count] = data_didnot_see[i];
			count = count + 1;
		}
	}

//print data	
	std::cout << count << "\n";

	for(int i = 0; i < count; i++){
		
		std::cout << result[i] << "\n";
	}

	delete [] data_didnot_see;

	delete [] result;

	return 0;
}
