#include "point.h"


Point::Point(){ 
 x = 0; 
 y = 0;
}
Point::Point(int newx, int newy){ 
 x = newx; 
 y = newy;
}
Point::~Point(){
}
int Point::GetAbsis(){
 return x;
}
int Point::GetOrdinat(){
 return y;
}
void Point::SetAbsis(int newx){
 x = newx;
}
void Point::SetOrdinat(int newy){
 y = newy;
}
int Point::IsOrigin(){
 return ((x == 0) && (y == 0));
}
int Point::IsEqual(Point P){ 
 return ((x == P.x) && (y == P.y));
}
Point Point::Add(Point P1, Point P2){
 return (Point ((P1.GetAbsis()+P2.GetAbsis()), (P1.GetOrdinat()+P2.GetOrdinat())));
}
Point Point::Add(Point P){
 return (Point ((x +P.GetAbsis()),(y+P.GetOrdinat())));
}
Point Point::Add(int dx, int dy){
 return (Point ((x + dx), (y + dy)));
}
void Point::AddToMe(Point P){
 x = x + P.GetAbsis();
 y = y +P.GetOrdinat();
}
void Point::AddToMe(int dx, int dy){
 x = x + dx; 
 y = y + dy;
}
int Point::Kuadran(){
 if (x <= 0 && y >= 0 ){
	return 1;
 } else if (x >= 0 && y >= 0 ){
	return 2;
 } else if (Point::x >= 0 && Point::y <= 0 ){
	return 3;
 } else if (Point::x <= 0 && Point::y <= 0 ){
	return 4;
 }
}
// Implementasi kelas point

// end
