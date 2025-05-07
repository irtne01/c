#include <stdio.h>
int main(){
	int a,j;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0){
			j++;
		}
	}
	if(j==2){
		printf("O");
	}
	else{
		printf("X");
	}
}