#include <stdio.h>
int main(){
	float kg,cm;
	printf("kg : ");
	scanf("%f", &kg);
	printf("cm : ");
	scanf("%f", &cm);
	float a =kg/((cm/100)*(cm/100));
	if(a<18.5){
		printf("저체중");
	}
	else if(a<23){
		printf("정상");
	}
	else if(a<30){
		printf("비만1단계");
	}
	else if( a<35){
		printf("비만2단계");
	}
	else{
		printf("비만3단계");
	}
}
