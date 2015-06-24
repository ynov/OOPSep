#ifndef stackofpoint_h
#define stackofpoint_h
#include "point.h"

#define DEFAULT_STACK_SIZE 500

class StackOfPoint{
public:
	StackOfPoint();
	StackOfPoint(int);
	StackOfPoint(const StackOfPoint& s);
	~StackOfPoint();
	StackOfPoint& operator= (const StackOfPoint& s);
	void Push (Point );
	void Pop (Point& );
	int IsEmpty() const;
	int IsFull() const;

	friend void operator<<(StackOfPoint&, Point);
	friend void operator>>(StackOfPoint&, Point&);

	static int NumStackObj();
private:
	const int defaultStackSize;
	int topStack;
	int size;
	Point *data;
	static int n_stack;
};
#endif
