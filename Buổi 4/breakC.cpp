/*
	break: thoat khoi vong lap hien tai
	continue: bo qua code phia duoi vong lap
*/

#include<stdio.h>

int main() {
	int i;
	
//	for(i=1; i<=10; i++) {
//		printf("%3d", i);
//		if(i == 5) {
//			break;
//		}
//	}

	//in so chan:
	for(i=1; i<=10; i++) {
		if(i % 2 != 0) {
			continue;	
		}
		
		printf("%3d", i);
	}
	
	printf("\nIn thanh cong");
	
	
	return 0;
}
