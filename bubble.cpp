#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

using namespace System;

void main()
{
	int i, j, k, minPoint, arr[20];
	srand(time(NULL));
	for (i = 0; i < 20; i++) {
		arr[i] = rand() % 30;
	}
	for (i = 0; i < 20; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 20; i++) {
		minPoint = i;
		for (j = i + 1; j < 20; j++) {
			if (arr[j] < arr[minPoint]) {
				minPoint = j;
			}
		}
		k = arr[i];
		arr[i] = arr[minPoint];
		arr[minPoint] = k;
	}
	for (i = 0; i < 20; i++) {
		printf("%d ", arr[i]);
	}
	getchar();
}
