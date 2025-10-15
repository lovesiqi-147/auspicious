#include<stdio.h>
typedef enum{
	GPIO_Speed_2MHz,
	GPIO_Speed_10MHz,
	GPIO_Speed_50MHz
} GPIO_Speed_Type;

typedef struct{
	GPIO_Speed_Type GPIO_Speed;
} GPIO_InitTypeDef;

void GPIO_InitStructureInit(GPIO_InitTypeDef*GPIO_InitStruct){
	if (GPIO_InitStruct != NULL){
	    GPIO_InitStruct->GPIO_Speed = GPIO_Speed_2MHz;
	}

}

int main() {
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructureInit(&GPIO_InitStructure);
	printf("GPIO Speed: 2 MHz\n");
	
	return 0;	
}

