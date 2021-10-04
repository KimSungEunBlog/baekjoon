#include <stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //qsort
#include <math.h> //pow

int alphabet[26];

int compare (const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 < num2)
		return 1;
	if (num1 > num2)
		return -1;
	return 0;
}

int main(){
	int n, len;
	int max = 9;
	int sum = 0;

	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		char data[8];
		scanf("%s", data);

		len = strlen(data);
		for (int i = 0; i < len; i++)
			alphabet[data[i] - 65] += pow(10, len - i - 1);
	}
	qsort(alphabet, 26, sizeof(int), compare);
	for(int i=0; i<26 ; i++){
		sum += alphabet[i] * max;
		max--;
	}
	printf("%d\n", sum);
	return 0;
}
