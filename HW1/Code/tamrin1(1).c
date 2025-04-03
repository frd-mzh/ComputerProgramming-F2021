#include<stdio.h>
#include<math.h>
main(){
	float hight , weight , BMI;
	printf("please type your hight(meter):\n");
	scanf("%f",&hight);
	printf("please type your weight(kilograms):\n");
	scanf("%f",&weight);
	BMI = weight / pow(hight,2);
	printf("your BMI is %f\n", BMI);
	if (BMI > 40){
		printf("you have serious problem");
	}
	else if (BMI >= 35 && BMI <40) {
	printf("you are gravely obese");
    }
	else if (BMI >= 30 && BMI <35) {
	printf("you are obese");
	} 
	else if (BMI >= 25 && BMI < 30)	{
	printf("you are overweight");
	} 
	else if (BMI >=18.5 && BMI < 25) {
	printf("you are normal");
	}
	else if (BMI < 18.5) {
	printf("you are underweight");
	}
}
