#include <stdio.h>

int main(){
	int L, P, V;
	int cnt;
	int value;

	cnt = 1;
	while(1){
		scanf("%d %d %d", &L, &P, &V);
		if(L == 0 && P == 0 && V == 0)
			break;
		//printf("%d %d %d\n", L, P, V);
		value = (V / P) * L;
		value += V % P < L ? V % P : L; 

		printf("Case %d: %d\n", cnt, value);
		cnt++;
	}

	//printf("END\n");
	return 0;
}
