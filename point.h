#ifndef point_h
#define point_h

class Point
{ public:
// Konstruktor
Point(); // default konstruktor, x = 0, y = 0
Point(int newx, int newy); // konstruktor dengan parameter x dan y
// Destruktor
~Point(); // destruktor
// Getter
int GetAbsis();
int GetOrdinat();
// Setter
void SetAbsis(int newx);
void SetOrdinat(int newy);
// Predikat
int IsOrigin(); // menghasilkan 1 jika current objek adalah origin
// Operator Relasional
int IsEqual(Point P); // menghasilkan 1 jika P == current objek;
                      // nilainya absis dan ordinatnya sama
//Operator aritmetika
Point Add(Point P1, Point P2); // menghasilkan P1+P2
Point Add(Point P); // menghasilkan current objek+P
Point Add(int dx, int dy); // menghasilkan Point (P.x+dx, P.x+dy)
void AddToMe(Point P); // current objek = current objek + P
void AddToMe(int dx, int dy); // x=x+dx; y=y+dy
// Fungsi lain
int Kuadran(); // menghasilkan kuadran dari Current Objek
private:
  int x; //absis
  int y; //ordinat
};

#endif
