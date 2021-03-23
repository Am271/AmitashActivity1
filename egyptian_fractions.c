#include<stdio.h>
typedef struct frac {
	int n;
	int d;
}fraction;
typedef struct ins {
	int k;
	fraction f[100];
}set;

void getn(int *n) {
	scanf("%d", n);
}

void input(set *x) {
	scanf("%d", &x->k);
	for(int i=0;i<x->k;i++) {
		scanf("%d", &x->f[i].d);
		x->f[i].n = 1;
	}
}

int gcd(int x, int y) {
	if(x == 0)
		return y;
	return gcd(y%x, x);
}

void comp(set *x, fraction *sum) {
	int g;
	sum->n = x->f[0].n;
	sum->d = x->f[0].d;
	for(int i=1;i<x->k;i++) {
		sum->n = (sum->d * x->f[i].n) + (sum->n * x->f[i].d);
		sum->d = sum->d * x->f[i].d;
	}
	g = gcd(sum->n, sum->d);
sum->n /= g;
sum->d /= g;
}

void disp(set a, fraction sum) {
	for(int i=0;i<a.k-1;i++)
		printf("%d/%d + ", a.f[i].n, a.f[i].d);
	printf("%d/%d = %d/%d\n", a.f[k-1].n, a.f[k-1].d, sum.n, sum.d);
}

int main() {
	int n;
	set a[100];
	fraction sum;
	getn(&n);
  for(int i=0;i<n;i++)
		input(&a[i]);
	for(int i=0;i<n;i++)
		comp(&a[i], &sum);
		disp(a[i], sum);
  }
  return 0;
}
