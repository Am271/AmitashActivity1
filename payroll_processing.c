#include<stdio.h>
typedef struct emp {
	char name[50];
	float hourly_wage;
	int mins_worked[100];
	float hours_worked;
	float pay;
}Employee;

int input() {
	int x;
	scanf("%d", &x);
	return x;
}

void inp_emp(Employee *a) {
	scanf("%s", a->name);
	scanf("%f", &a->hourly_wage);
}

void inp_timecards(Employee a[], int m, int n) {
	char temp[50]; int mins; int k = 0, j = 0;
	for(int i=0;i<m;i++) {
		scanf("%s", temp);
		scanf("%d", &mins);
		if(a[j].name == temp) {
			a[j].mins_worked[k] = mins;
			k++;
		}
		else {
			j++; k = 0;
		}
	}
}

int get_sum(int a[]) {
	int i = 0, sum = 0;
	while(a[i] != 0)
		sum += a[i];
	return sum;
}

void compute_pay(Employee *a) {
	if(a->mins_worked[0] != 0) {
		float hrs = get_sum(a->mins_worked) / 60;
		a->hours_worked = hrs;
		if(hrs > 40) {
			hrs = hrs - 40;
			a->pay = (a->hourly_wage * 40) + (a->hourly_wage * 1.5 * hrs);
		}
		else {
			a->pay = a->hourly_wage * hrs;
		}
	}
}

void disp(Employee x) {
	printf("%s: %.2f hours, $%.2f\n", x.name, x.hours_worked, x.pay);
}

int main() {
	int n, m;
	Employee emps[100];
	n = input();
	for(int i=0;i<n;i++)
		inp_emp(&emps[i]);
	m = input();
	inp_timecards(emps, m, n);
	for(int j=0;j<n;j++) {
		compute_pay(&emps[j]);
		disp(emps[j]);
	}
