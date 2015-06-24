#include "point.h"
#include <stdio.h>

void PrintPoint(Point P){
	printf("(%d,%d)\n",P.GetAbsis(),P.GetOrdinat());
}

int main(){
	int a,b;
	Point P1;
	scanf("%d%d",&a,&b);
	Point P2(a,b);
	scanf("%d%d",&a,&b);
	Point P3(a,b);
	if (P1.IsOrigin()) printf("P1 origin\n");
	else printf("P1 bukan origin\n");
	if (P2.IsOrigin()) printf("P2 origin\n");
	else printf("P2 bukan origin\n");
	if (P3.IsOrigin()) printf("P3 origin\n");
	else printf("P3 bukan origin\n");
	Point P4 = P1.Add(P2,P3);
	Point P5 = P2.Add(P3);
	if (P2.IsEqual(P5)) printf("P2 equal P5\n");
	else printf("P2 not equal P5\n");
	if (P4.IsEqual(P5)) printf("P4 equal P5\n");
	else printf("P4 not equal P5\n");
	scanf("%d%d",&a,&b);
	Point P6 = P2.Add(a,b);
	scanf("%d%d",&a,&b);
	Point P7 = P3.Add(a,b);
	P4.AddToMe(P2);
	scanf("%d%d",&a,&b);
	P5.AddToMe(a,b);
	printf("Kuadran P2 : %d\n",P2.Kuadran());
	printf("Kuadran P3 : %d\n",P3.Kuadran());
	printf("Kuadran P6 : %d\n",P6.Kuadran());
	printf("Kuadran P7 : %d\n",P7.Kuadran());
	printf("P2 : ");
	PrintPoint(P2);
	printf("P3 : ");
	PrintPoint(P3);
	printf("P4 : ");
	PrintPoint(P4);
	printf("P5 : ");
	PrintPoint(P5);
	printf("P6 : ");
	PrintPoint(P6);
	printf("P7 : ");
	PrintPoint(P7);
	return 0;
}
