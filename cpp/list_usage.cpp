#include <iostream>
#include <list>

int main() {
	int list_size;

	std::cin >> list_size;

	std::list<int> container;

	for(int i = 0; i < list_size; i++)
		container.push_back(i);

// first version
	std::list<int>::iterator first_iterator_of_container = container.begin();

	while(first_iterator_of_container != container.end())
		std::cout << *(first_iterator_of_container++) << ' ';

	std::cout << std::endl;

//second version
	auto second_iterator_of_container = container.begin();

	while(second_iterator_of_container != container.end())
		std::cout << *(second_iterator_of_container++) << ' ';

	std::cout << std::endl;

//third version
	for(auto third_iterator_of_container = container.begin(); third_iterator_of_container != container.end(); ++third_iterator_of_container)
		std::cout << *third_iterator_of_container << ' ';

	std::cout << std::endl;

// first "range based for" version
	for (auto container_element: container)
		std::cout << container_element << ' '; // "dereferensed" iterator

	std::cout << std::endl;

// second "range based for" version
	auto iterator_of_container = container.begin();

	for (auto container_element: container)
		std::cout << *(iterator_of_container++) << ' '; // "dereferensed" iterator

	std::cout << std::endl;

	return 0;
}
