#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcion,op;
	


	printf("menu de la uefa Champions league\n");
	printf("1-Octavos de la uefa Champions league\n");
	printf("2-Cuartos de final de la uefa Champions league\n");
	printf("3-Semifinal de la uefa Champions league\n");
	printf("4-Final de la uefa Champions league\n");
	printf("5-Campeon de la uefa Champions league\n");
	scanf("%d", &opcion);
	
	
	switch(opcion){
		
		case 1:printf("2B | Tottenham             |3 |1 |4\n");
			   printf("1A | borussia Dortmund     |0 |0 |0\n");
			   printf("\n");
			   printf("2D | Schalke 04            |2 |0 |2\n");
			   printf("1F | Manchester City       |3 |7 |10\n");
			   printf("\n");
			   printf("2E | Ajax                  |1 |4 |5\n");
			   printf("1G | Real Madrid           |2 |1 |3\n");
			   printf("\n");
			   printf("2A | Atletico de Madrid    |2 |0 |2\n");
			   printf("1H | Juventus              |0 |3 |3\n");
			   printf("\n");
			   printf("2H | Manchester United     |0 |3 |3\n");
			   printf("1C | Paris Saint - Germain |2 |1 |3\n");
			   printf("\n");
			   printf("2F | Olympique de Lyon     |0 |1 |1\n");
			   printf("1B | Barcelona             |0 |5 |5\n");
			   printf("\n");
			   printf("2C | Liverpool             |0 |3 |3\n");
			   printf("1E | Mayern Munich         |0 |1 |1\n");
			   printf("\n");
			   printf("2G | Roma                  |2 |1 |3\n");
			   printf("1D | Porto                 |1 |3 |4\n");
			   
        break;
        
		case 2:printf("2B | Tottenham             |1 |3 |4\n");
			   printf("1F | Manchester City       |0 |4 |4\n");
			   printf("\n");
			   printf("2E | Ajax                  |1 |2 |3\n");
			   printf("1H | Juventus              |1 |1 |2\n");
			   printf("\n");
			   printf("2H | Manchester United     |0 |0 |0\n");
			   printf("1B | Barcelona             |1 |3 |4\n");
			   printf("\n");
			   printf("2C | Liverpool             |2 |4 |6\n");
			   printf("1D | Porto                 |0 |1 |1\n");
			   
		break;
	    
	    case 3:printf("2B | Tottenham             |0 |3 |3\n");
			   printf("2E | Ajax                  |1 |2 |3\n");
			   printf("\n");
			   printf("1B | Barcelona             |3 |0 |3\n");
			   printf("2C | Liverpool             |0 |4 |4\n");
			   
		break;
			   
		case 4:printf("2B | Tottenham             |0 |\n");;
			   printf("2C | Liverpool             |2 |\n");
		break;
			   
		case 5:printf("| LIVERPOOL |\n");
		break;
		
	}
	return 0;
}
