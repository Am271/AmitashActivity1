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

int compare(char a[], char b[]) {
	int i = 0, c = 0;
	while(a[i] != '\0' && b[i] != '\0') {
		if(a[i] == b[i])
			c++;
		i++;
	}
	if(i == c)
		return 1;
	else
		return 0;
}

void inp_timecards(Employee a[], int m, int n) {
	char temp[50]; int mins; int k = 0, j = 0, flag;
	for(int i=0;i<m;i++) {
		scanf("%s", temp);
		scanf("%d", &mins);
		do {
			if(compare(a[j].name, temp)) {
				a[j].mins_worked[k] = mins;
				k++; flag = 0;
			}
			else {
				j++; k = 0; flag = 1;
			}
		}while(flag);
	}
}

int get_sum(int a[]) {
	int i=0, sum = 0;
	while(a[i] != 0) {
		sum += a[i];
		i++;
	}
	return sum;
}

void compute_pay(Employee *a) {
	float hrs;
	if(a->mins_worked[0] != 0) {
		hrs = (float)get_sum(a->mins_worked) / 60;
		a->hours_worked = hrs;
		if(hrs > 40) {
			hrs = hrs - 40;
			a->pay = (a->hourly_wage * 40) + (a->hourly_wage * 1.5 * hrs);
		}
		else
			a->pay = a->hourly_wage * hrs;
	}
}

void disp(Employee x) {
	if(x.pay != 0)
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
	return 0;
}
