/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/* By: Colin Peterman */

#include <stdio.h>
#include <stdlib.h>
#include  "lab3.h"

void read_titles(char ***titles, int books){
	/* Creating variables to use later */
	int i;
	char **titles1 = (char **)calloc(books,sizeof(char*));
	printf("Enter the %i book titles, one to a line: ",books);
	/* Prompts the user to enter books titles and then reads them in with get_titles(); */
	for(i = 0; i < books; i++){
		*(titles1+i)=(char *)malloc(sizeof(char) * 61);
		get_title((titles1 + i));		
	}
	/* Sets all the titles I just read in equal to *titles */
	*titles = titles1;
}
