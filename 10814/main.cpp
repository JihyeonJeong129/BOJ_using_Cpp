#include <iostream>
#include <algorithm>

struct person
{
	int age;
	std::string name;
};

bool compare(person p1, person p2){

	if(p1.age < p2.age){
		return true;
	}

	return false;
}

int main()
{
	int num;

	std::cin >> num;
	
	//memory allocation
	struct person *data = new person[num];
	
	//data input
	for(int i = 0; i < num; i++){
	
		std::cin >> data[i].age >> data[i].name;
	}

	std::stable_sort(data, data+num, compare);

	//data print
	for(int i = 0; i < num; i++){
		
		std::cout << data[i].age << " " << data[i].name << "\n";
	}

	//memory deallocation
	delete []data;

	return 0;
}
