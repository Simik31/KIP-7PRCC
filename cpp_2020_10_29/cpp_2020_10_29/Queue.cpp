#include "Queue.h"

Queue::Queue(int size) {
	this->size = size;
	getIndex = 0;
	addIndex = 0;
	q = new double[size];
}

Queue::~Queue() {
	delete[] q;
}

void Queue::Add(double value) {
	q[addIndex % size] = value;
	addIndex++;
}

double Queue::Get() {
	double ret = q[getIndex % size];
	getIndex++;
	return ret;
}

bool Queue::IsEmpty() {
	return addIndex == getIndex;
}