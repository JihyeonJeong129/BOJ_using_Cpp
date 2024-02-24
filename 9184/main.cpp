#include <iostream>

int data[21][21][21];

int function(int a, int b, int c)
{
	if(a<=0 || b<=0 || c<=0)
		return 1;
	else if(a>20 || b>20 || c>20)
		return function(20,20,20);
	else{
		
		if(data[a][b][c] != 0)
			return data[a][b][c];
		else
			data[a][b][c] = function(a-1, b, c) + function(a-1, b-1, c) + function(a-1, b, c-1) - function(a-1, b-1, c-1);
			return data[a][b][c];
	}

}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int a,b,c;

	while(true){
		
		std::cin >> a >> b >> c;

		if(a == -1 && b == -1 && c == -1)
			break;

		std::cout << "w(" << a <<", " << b << ", " << c << ") = " << function(a,b,c) << "\n";
	}

	return 0;
}
