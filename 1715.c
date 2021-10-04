#include <stdio.h>

int main(){
	int length;
	int input_arr[100000];

	scanf("%d", &length);
	if (length < 1 || length > 100000){
		printf("error\n");
		return 0;
	}

	for(int i = 0; i < length; i++){
		scanf("%d", inpurt[i]);
	}


	return 0;
}

