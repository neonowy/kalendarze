#include <iostream>
#include "request.cpp"
using namespace std;
const int MONTHS_MAX = 1000000;
const int REQ_MAX = 100000;

int to_days(int day, int months, int tab[MONTHS_MAX]) {
	int days, sum = 0, monthsTab[MONTHS_MAX];

	/*for(int i = 0; i < months; ++i) {
		days += tab[i];
	}*/


	for(int i = 0; i < MONTHS_MAX; ++i) {
		sum += tab[i];
		monthsTab[i] = sum;
	}

	days += monthsTab[months - 1];
	days += day;

	return days;
}

int* to_months(int day, int tab[MONTHS_MAX]) {
	int months, days = 0, sum, monthsTab[MONTHS_MAX], date[2];

	for(int i = 0; i < MONTHS_MAX; ++i) {
		sum += tab[i];
		monthsTab[i] = sum;
	}

	for(int i = 0; i < MONTHS_MAX; ++i) {
		if(monthsTab[i] > day) {
			months = i + 1;
			days += monthsTab[i] - day;
		}
	}

	date[0] = months;
	date[1] = days;

	return date;
}

int main() {
	int *a = new int[MONTHS_MAX];
	int *b = new int[MONTHS_MAX];
	Request req[REQ_MAX];
	int n, m, z;
	ios_base::sync_with_stdio(0);

	cin>>n>>m;
	for(int i = 0; i < n; ++i) {
		cin>>a[i];
	}
	
	for(int i = 0; i < m; ++m) {
		cin>>b[i];
	}
	cin>>z;
	for(int i = 0; i < z; ++i) {
		cin>>req[i].d>>req[i].m>>req[i].c;
	}

	for(int i = 0; i < z; ++i) {

	}

	return 0;
}