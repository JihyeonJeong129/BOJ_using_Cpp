#include <iostream>

int count;

int recursion(std::string &str, int l, int r)
{
	count = count + 1;

	if(l>=r)
		return 1;
	else if(str[l] != str[r])
		return 0;
	else{
		return recursion(str, l+1, r-1);
	}
}

int isPalindrome(std::string &str)
{
	count = 0;

	return recursion(str, 0, str.length()-1);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	for(int i=0; i<num; i++){
		
		std::string str;

		std::cin >> str;
		
		std::cout << isPalindrome(str) << " " << count << "\n";
	}

	return 0;
}
