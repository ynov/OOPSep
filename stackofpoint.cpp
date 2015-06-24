#include "stackofpoint.h"
#include "point.h"
#include <stdio.h>

int StackOfPoint::n_stack = 0;

StackOfPoint::StackOfPoint()
	: defaultStackSize(DEFAULT_STACK_SIZE) {
	data = new Point [defaultStackSize];
	topStack = 0;
	size = defaultStackSize;
	n_stack++;
}

StackOfPoint::StackOfPoint(int s)
	: defaultStackSize(DEFAULT_STACK_SIZE) {
	data = new Point [s];
	topStack = 0;
	size = s;
	n_stack++;
}
StackOfPoint::StackOfPoint(const StackOfPoint& s)
	: defaultStackSize(DEFAULT_STACK_SIZE) {
	int i;

	size = s.size;
	topStack = s.topStack;
	data = new Point [size];

	for (i = 0; i<size; i++)
		data [i] = s.data[i];
	n_stack++;
}
StackOfPoint::~StackOfPoint(){
	delete [] data;
	size = 0;
	data = 0;
}
StackOfPoint& StackOfPoint::operator= (const StackOfPoint& s){
	int i;
	delete [] data;
	size = s.size;
	data = new Point[size];
	topStack = s.topStack;

	for (i=0; i<topStack; i++)
		data [i] = s.data[i];
	return *this;
}
void StackOfPoint::Push (Point p){
	if (IsFull()){
		printf("stack penuh\n");
	}
	else {
		data [topStack] = p;
		topStack++;
	}
}
void StackOfPoint::Pop (Point& p){
	if (IsEmpty()){
		printf("stack kosong\n");
	}
	else {
		topStack--;
		p = data [topStack];
	}
}
int StackOfPoint::IsEmpty() const{
	return topStack == 0;
}
int StackOfPoint::IsFull() const{
	return topStack == size;
}

void operator<<(StackOfPoint& s, Point p){
	s.Push(p);
}
void operator>>(StackOfPoint& s, Point& p){
	s.Pop(p);
}

int StackOfPoint::NumStackObj(){
	return n_stack;
}
