#ifndef Queue_hpp
#define Queue_hpp

class Queue
{
private:
	int size;
	int getIndex;
	int addIndex;
	double *q;

public:
	Queue(int size);
	~Queue();

	void Add(double value);
	double Get();
	bool IsEmpty();
};

#endif
