#include <cstdio>


	int step_function(int x){
		int result =0;
		if(x<0){
		result =1;
		} 
		else if (x>0){
		result =1;
		} 

		return result;
	}

	
	int main() {
	
		int num1 = 420;
		int value1=step_function(num1);

		int num2 = 0;
		int value2=step_function(num2);


		int num3 = -32767;
		int value3=step_function(num3);

		printf("Num1: %d, Step: %d\n", num1, value1);
		printf("Num1: %d, Step: %d\n", num2, value2);
		printf("Num1: %d, Step: %d\n", num3, value3);

	
}
