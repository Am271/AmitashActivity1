#include<stdio.h>
#include<math.h>

typedef struct set {
	float x1, x2, x3, y1, y2, y3, area;
}coord;

void inp(int *n) {
	scanf("%d", n);
}

void getcoord(coord *b) {
	scanf("%f%f%f%f%f%f", &b->x1, &b->y1, &b->x2, &b->y2, &b->x3, &b->y3);
}

float get_dist(float a1, float a2, float b1, float b2) {
	return sqrt(pow((b2 - b1), 2) + pow((a2 - a1), 2));
}

void cal_area(coord *c) {
	float t1, t2, t3;
	t1 = get_dist(c->y1, c->y2, c->x1, c->x2);
	t2 = get_dist(c->y1, c->y3, c->x1, c->x3);
	t3 = get_dist(c->y3, c->y2, c->x3, c->x2);
	c->area = (t1 > t2 && t1 > t3)? t2 * t3 : ((t2 > t3 && t2 > t1)? t1 * t3 : t2 * t1);
}

void disp(coord a) {
	printf("Area of rectangle with vertices (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f) is %.1f\n",a.x1, a.y1, a.x2, a.y2, a.x3, a.y3, a.area);
}

int main() {
	int n;
	coord a[75];
	inp(&n);
	for(int i=0;i<n;i++) {
		getcoord(&a[i]);
	}
	for(int i=0;i<n;i++) {
		cal_area(&a[i]);
		disp(a[i]);
	}
	return 0;
}
