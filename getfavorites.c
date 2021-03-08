/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */

/* By: Colin Peterman */

#include <stdlib.h>
#include <stdio.h>
#include "lab3.h"

void get_favorites(char **title, unsigned int books,char ****favorites,int favorites_number){
	/* Sets up variables to use */
	int i, order;
	char ***fav;
	fav = (char ***)calloc(favorites_number,sizeof(char**));
	/* Ask the user to input the number of the book they want in their favorites */
	printf("Enter the number next to each book title you want on your favorites list: ");
	/* Reads in the numbers the user enters and puts the title in the favorites */
	for(i = 0; i < favorites_number; i++){
		scanf(" %i", &order);
		*(fav + i) = (title + order - 1);
	}
	*favorites = fav;
}
