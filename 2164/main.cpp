#include <iostream>
#include <queue>

int main()
{
	int num;

	std::cin >> num;

	std::queue<int> queue;

	int i = 1;

	while(queue.size() < num){
		queue.push(i);
		i++;
	}

	while(queue.size() > 1){
		queue.pop();
		int front = queue.front();
		queue.pop();
		queue.push(front);
	}

	std::cout << queue.front() << std::endl;

	return 0;
}
