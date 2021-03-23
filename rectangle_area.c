#include<stdio.h>
#include<math.h>
typedef struct set {
	float x1, x2, x3, y1, y2, y3, area;
}coord;

int inp() {
	int n;
	scanf("%d", &n);
	return n;
}

void getcoord(coord *b) {
	scanf("%d%d%d%d%d%d", &b->x1, &b->y1, &b->x2, &b->y2, &b->x3, &b->y3);
}

void cal_area(coord *c) {
	float len, hgt;
	len = sqrt(pow((c->y2 - c->y1), 2) + pow((c->x2 - c->x1), 2));
	hgt = sqrt(pow((c->y3 - c->y2), 2) + pow((c->x3 - c->x2), 2));
c->area = len * hgt;
}

int main() {
	int n = inp();
	coord a[75];
	for(int i=0;i<n;i++) {
		getcoord(&a[i]);
	}
	for(int i=0;i<n;i++) {
		cal_area(&a[i]);
		disp(a[i]);
	}
}
