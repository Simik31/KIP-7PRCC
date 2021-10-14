#include <iostream>

#include "Stack.h"
#include "Queue.h"

using namespace std;

int main()
{
    cout << "Dynamic stack:" << endl;

    Stack *d = new Stack(10);

    d->AddNode(1);
    d->AddNode(2);
    d->AddNode(3);

    while (!d->IsEmpty()) cout << d->GetNode() << endl;

    delete d;

    cout << endl << "Dynamic queue:" << endl;

    Queue* q = new Queue(10);

    q->Add(1.0 + 2.2 / 5);
    q->Add(1.0 + 3.3 / 5);
    q->Add(1.0 + 4.4 / 5);

    while (!q->IsEmpty()) cout << q->Get() << endl;

    delete q;
}