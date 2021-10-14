#include "Stack.h"

Stack::Stack(int max) {
	this->max = max;
	node = -1;
	p = new int[max];
}
Stack::~Stack() {
	delete[] p;
}

void Stack::AddNode(int value) {
	p[++node] = value;
}

int Stack::GetNode() {
	return p[node--];
}

bool Stack::IsEmpty() const {
	return node == -1;
}