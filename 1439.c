#include <stdio.h>

int main(){
	char S[1000000];
	int i;
	int zero_cnt;
	int one_cnt;
	char now;

	scanf("%s", S);

	i = 0;
	zero_cnt = 0;
	one_cnt = 0;
	now = S[0];
	while (S[i]){
		if (S[i] == '0')
			zero_cnt++;
		else
			one_cnt++;
		i++;
	}

	printf("%s\n", S);
	printf("0: %d, 1: %d\n", zero_cnt, one_cnt);

	return 0;
}
