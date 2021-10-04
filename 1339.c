#include <stdio.h>

int main(){
	int input_num;
	char input_str[10][10];
	int len[10] = {0, };

	scanf("%d", &input_num);
	if (input_num < 1 || input_num > 10){
		printf("input error\n");
		return (0);
	}
	for(int i = 0; i < input_num ; i++){
		scanf("%s", input_str[i]);
	}

	int j = 0;
	for (int i = 0; i< input_num; i++){
		j = 0;
		while (input_str[i][j]){
			len[i]++;
			j++;
		}
	}

	int max = len[0];
	int max_index = 0;
	for (int i = 1; i < input_num; i++){
		if (len[i] > max){
			max = len[i];
			max_index = i;
		}
	}
	
	int k = 0;
	char match[10];
	for (int i = 0; i < input_num; i++){
		if (i == max_index){
			int j = 0;
			while (input_str[i][j]){
				if (match[k] != input_str[i][j]){
					match[k] = input_str[i][j];
					k++;
				}
				j++;
			}
		}
	}

	for (int i = 0; i < input_num; i++){
		printf("%s %d\n", input_str[i], len[i]);
	}
	printf("max = %d, max_index = %d\n", max, max_index);
	printf("%s\n", match);
	return (0);

}
