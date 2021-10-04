#include <stdio.h>
#include <string.h>
#include <math.h>

int arr[26];

int cmp(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int main(){
	int n, cnt;
	int cx = 9;

	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		char data[8];
		scanf("%s", data);

		cnt = strlen(data);
		for (int k = 0; k < cnt; k++){
			arr[data[k] - 65] += pow(10, cnt - k - 1);
			printf("k: %d cnt:%d, pow = %f, data[k]-65: %d\n",
					k, cnt,  pow(10, cnt - k - 1), data[k] - 65);
		}
	}
	//test
	for (int l = 0; l < 26; l++)
		printf("%d\n", arr[l]);
	printf("----\n");

	qsort(arr, 26, sizeof(int), cmp);
	
	//test
	for(int i = 0; i < 26; i++)
		printf("%d\n", arr[i]);
	printf("---\n");

	int sum = 0;
	for (int t = 0; t < 25; t++){
		sum += arr[t] * cx--;
		printf("%d\n", arr[t] * ++cx);
		cx--;
	}
	printf("%d", sum);


	return 0;
}
