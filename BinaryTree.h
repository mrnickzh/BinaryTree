#pragma once

#include <iostream>

class BinaryTree
{
public:
	BinaryTree(int);
	void insert(int);
	bool find(int);
	void print();
private:
	BinaryTree* left;
	BinaryTree* right;
	int value;
};

