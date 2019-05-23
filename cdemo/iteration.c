#include <stdio.h>
int main() {
	int div = 3;
	for (int i = 0; i < 100; i++) {
		int a = i % div;
		if (a == 0) printf("i=%d\n", i);
	}
}

