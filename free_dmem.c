/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/* By: Colin Peterman */

#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void free_dmem(char **title, int books, char ***favorites){
	/* Freeing up the memory */
	int i;
	for(i=0; i < books;i++){
		free(*(title+i));
	}
	free(title);
	free(favorites);
}
