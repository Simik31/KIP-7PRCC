#ifndef Singleton_h
#define Singleton_h

class Singleton
{
private:
	Singleton();
	static Singleton* instance;
	int IdCounter;
public:
	static Singleton* getInstance();
	int getId();
};

#endif