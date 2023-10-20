#include "BinaryTree.h"

BinaryTree::BinaryTree(int val) {
	left = nullptr;
	right = nullptr;
	value = val;
};

void BinaryTree::insert(int val) {
	BinaryTree* tmp = new BinaryTree(val);
	if (val > value) {
		if (right)
			right->insert(val);
		else
			right = tmp;
	};
	if (val < value) {
		if (left)
			left->insert(val);
		else
			left = tmp;
	};
};

bool BinaryTree::find(int val) {
	if (val == value)
		return true;
	else if (val > value) {
		if (right)
			right->find(val);
		else
			return false;
	}
	else if (val < value) {
		if (left)
			left->find(val);
		else
			return false;
	};
};

void BinaryTree::print() {
	std::cout << "VALUE: " << value << std::endl;
	if (right){
		std::cout << "RIGHT ";
		right->print();
	};
	if (left){
		std::cout << "LEFT ";
		left->print();
	};
};
