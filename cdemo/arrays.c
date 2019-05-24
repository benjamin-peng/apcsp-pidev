#include <stdio.h>

void arrayAdd(int a[], int s, int n) {
	for (int i = 0; i < s; i++) {
		a[i] = a[i] + n;
	}
}

int main() {
	int a [100];
	//int b [100];

	for (int i = 0; i < 100; i++) {
		a[i] = i * i;
	}
	arrayAdd(a, 100, 1);
	for (int i = 0; i < 100; i++) 
        {printf("%d ", a[i]);}
}
