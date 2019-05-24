#include <stdio.h>

int main() {
	float areaOfCircle (int radius) {
		float area = 3.1415 * radius * 2;
		return area;
	}
	
	for (int i = 2.5; i <= 12.5; i++) {
		printf ("%fl\n", areaOfCircle(i));
	}
}
