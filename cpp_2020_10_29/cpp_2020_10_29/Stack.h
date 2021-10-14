#ifndef Stack_hpp
#define Stack_hpp

class Stack 
{
private:
	int max;
	int node;
	int* p;

public:
	Stack(int max);
	~Stack();

	void AddNode(int value);
	int GetNode();
	bool IsEmpty() const;
};

#endif