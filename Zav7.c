#include <stdio.h>
#include <stdlib.h>
#include <time.h>


         int get_random_int_min_max(int min_rand, int max_rand)
{
         return min_rand + rand() % (max_rand - min_rand);
}

                    int main(){

                    int mas[100], mas2[100], i, n = 15, proizvedenie = 0;
                    int min, max;
	
	    printf ("\nMin rand raven = ");
	    scanf ("%d", &min);
	
    	printf ("\nMax rand raven = ");
     	scanf ("%d", &max);
	
        	srand(time(0));
	
	        for (i = 0; i < n; i++){
	     	mas[i] = get_random_int_min_max(min, max);
	        printf("\nmas[%d] = %d", i, mas[i]);

}
	
	        printf ("\n\t-----------------\t");
	
	
    for (i = 0; i < n; i++){
		mas2[i] = get_random_int_min_max(min, max);
		printf("\nmas[%d] = %d", i, mas2[i]);
	
 }
	
	printf ("\n\t-----------------\t");
	
	for (i = 0; i < n; i++){
		proizvedenie += mas[i] * mas2[i];
	
 }
	
	
printf ("\n\tProizvedenie = %d", proizvedenie);
	
    system("pause");
	
    return 0;
	
}

