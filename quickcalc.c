#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int main(void)
{

				char sign;
				int state = true;
				float val1;
				float val2;
				float calcmod(char sign, float val1, float val2);

				do{

								scanf(" %c %f %f", &sign, &val1, &val2);	
						//		printf("%c %f %f\n", sign, val1, val2);
								printf("%f\n", calcmod(sign, val1, val2));
								val1 = 0;
								val2 = 0;

				}while(state == true);

				return 0;
}

float calcmod(char sign, float val1, float val2){


				switch(sign){

								case '+':
												return val1 + val2;
												break;
								case '-':
												return val1 - val2;
												break;
								case '/':
												return val1 / val2;
												break;
								case '*':
												return val1 * val2;
												break;
								case '^':
												return pow(val1, val2);
												break;
								default:
												break;

										
												

				}
}
