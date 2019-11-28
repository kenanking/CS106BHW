// You will edit and turn in this .h file.
// TODO: Remove this comment!

#ifndef _heappq_h   // do not modify these two lines
#define _heappq_h

#include <iostream>
#include <string>
using namespace std;

class HeapPQ {
public:
    HeapPQ();
    ~HeapPQ();
    void clear();
    string frontName();
    int frontPriority();
    bool isEmpty();
    void newPatient(string name, int priority);
    string processPatient();
    void upgradePatient(string name, int oldPriority, int newPriority);
    void debug();
    friend ostream& operator <<(ostream& out, const HeapPQ& queue);

private:
    // TODO: add necessary member variable(s)
    // TODO: add necessary member functions
    // TODO: make members 'const' as appropriate

};

ostream& operator <<(ostream& out, const HeapPQ& queue);

#endif
