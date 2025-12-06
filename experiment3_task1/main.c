#include <stdio.h>

void hanoi(char source, char destination, char auxiliary, int n);

int main(){
	int n;
	char source = 'A';
	char auxiliary = 'B';
	char destination = 'C';
	scanf("%d", &n);
	hanoi(source,destination,auxiliary,n);
	return 0;
}


void hanoi(char source, char destination, char auxiliary, int n){
	if(n == 1){
		printf("Move disk from %c to %c\n", source, destination);
	}else{
		hanoi(source,auxiliary,destination,n-1);
		printf("Move disk from %c to %c\n", source, destination);
		hanoi(auxiliary,destination,source,n-1);
	}
}

