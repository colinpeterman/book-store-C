/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */


/* By: Colin Peterman */

#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void save_info(char **title,int books,char ***favorites, int favorites_number){
	/* Sets up variables to use for later */
	int i;
	FILE *output_file;
	char fname[100]="";
	
	/* Asking the user what file name they want to save it under */
	printf("What file name do you want to use?");
	scanf("%s",fname);
	output_file = fopen(fname, "w");
	/* Opening the file and printing out the titles and books to the file */
	fprintf(output_file,"Books I've Read: \n"); 
	for(i = 1; i <= books; i++){
                fprintf(output_file, "%s\n", *title);
		title++;
        }
	fprintf(output_file,"\n\n My Favorites Are: \n");
	for(i = 1; i <= favorites_number; i++){
		fprintf(output_file, "%s\n", **favorites); 
		favorites++;
	}
	fclose(output_file);
}	/* closeing the file */
