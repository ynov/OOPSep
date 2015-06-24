#ifndef stackofpoint_h
#define stackofpoint_h
#include "point.h"

class StackOfPoint{
public:
	StackOfPoint();
	StackOfPoint(int);	
	StackOfPoint(const StackOfPoint& s);
	~StackOfPoint();
	StackOfPoint& operator= (const Stack& s);
	void Push (Point );
	void Pop (Point& );
	int IsEmpty() const;
	int IsFull() const;

	friend void operator<<(StackOfPoint&, Point);
	friend void operator>>(StackOfPoint&, Point&);

	static int NumStackObj();
private: 
	const int defaultStackSize = 500; 
	int topStack; 
	int size;
	Point *data; 
	static int n_stack;
};
#endif 
