/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */

/* By Colin Peterman */ 

#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Setting up variables and pointers that will have the titles and favorite books */
	int books = 0;
	int favorites_number = 0;
	int answer;
	int i;
	char **title = NULL;
	char **temp_title;
	char ***temp_fav;
	char ***favorites = NULL;
	/* Asking the user for how many books they would like to enter */
	printf("How many library book titles do you plan to enter? ");
        scanf("%i", &books);
	read_titles(&title,books);
	/* Temporary variable to iterate through the titles */
	temp_title = title;
	/* Printing out the books that the user entered */
	printf("\nYou've entered \n");
	for(i = 1; i <= books; i++){
		printf("%i. %s \n",i,*temp_title);
		temp_title++; 
	} 

	/* Which of the books are favorites */
	printf("\nOf those %i books, how many do you want to put on your favorites? ",books);
	scanf("%i", &favorites_number);
	/* Calling get favorites with the titles, number of books, number of favorites, and favorites */
	get_favorites(title, books,&favorites,favorites_number);
	/* Temporary variable to iterate through the favorites list */
	temp_fav = favorites;
	/* Printing out the books in the favorite list */
        printf("\nThe books on your favorites list are\n");
        for(i = 1; i <= favorites_number; i++){
                printf("%i. %s \n",i,**temp_fav);
                temp_fav++;
        }
	/* Seeing if the user wants to save the favorites */
	printf("Do you want to save them? (1=yes, 2=no): ");
	scanf("%d", &answer);
	/* If the user inputs 1 then it runs save info and saves it to a file, but if not it does not save it. */
	if(answer == 1) save_info(title, books,favorites, favorites_number);
	free_dmem(title, books, favorites);

	return 0;
}
