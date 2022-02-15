#include<stdio.h>

void __attribute__((constructor)) c_test(void){
	printf("This is the construtor function.\n");
}

void __attribute__((destructor)) d_test(void){
	printf("This is the destrutor function.\n");
}

int main(){
	printf("This is the main function!\n");
	return 0;
}
