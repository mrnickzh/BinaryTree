#include "BinaryTree.h"

int main() {
	BinaryTree test(5);
	test.insert(7);
	test.insert(2);
	test.insert(3);
	test.insert(9);
	std::cout << test.find(3) << std::endl;
	std::cout << test.find(4) << std::endl;
	test.print();
};