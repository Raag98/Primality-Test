#include<stdio.h>
void main() {
	printf("Enter the Number to check for Primality: ");
	int N;
	scanf("%d", &N);

	if (N == 1) {
		printf("The given number is not Prime");
		return;
	}

	int flag = 0;

	for (int i = 2; i < N / 2; ++i) {
		if (N % i == 0) {
			flag = 1;
			break;
		}
	}


	if (!flag)
		printf("The given number is Prime");
	else
		printf("The given number is not Prime");
}