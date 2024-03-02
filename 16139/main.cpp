#include <iostream>
#include <string>
#include <cstring>

int data[200001][26];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string str;

	int count;

	std::cin >> str >> count;

	int str_size = str.size();

/*	
	int **data = new int*[str_size+1];

	for(int i=0; i<=str_size; i++){
		data[i] = new int[26];
	}

	for(int i=0; i<=str_size; i++)
		std::memset(data[i], 0, sizeof(int)*26);
*/
	for(int i=0; i<str_size; i++){
		for(int j=0; j<26; j++)
			data[i+1][j] = data[i][j];
		data[i+1][str[i]-97]++;
	}

	for(int i=0; i<count; i++){
		
		char temp;
		int l,r;

		std::cin >> temp >> l >> r;

		std::cout << data[r+1][temp-97] - data[l][temp-97] << "\n";
	}

	return 0;
}
