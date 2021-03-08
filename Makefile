# comments in a Makefile start with sharp  

# target all means all targets currently defined in this file
all: lab3.zip lab3

#this target is the .zip file that must be submitted to Carmen
lab3.zip: Makefile lab3main.c lab3Readme readtitles.c get_title.c savedata.c free_dmem.c lab3.h
	zip lab3 lab3main.c readtitles.c get_title.c getfavorites.c savedata.c free_dmem.c lab3.h Makefile lab3Readme


lab3: lab3main.o readtitles.o get_title.o getfavorites.o savedata.o free_dmem.o
	gcc lab3main.o readtitles.o get_title.o getfavorites.o savedata.o free_dmem.o -o lab3

lab3main.o: lab3main.c lab3.h
	gcc -ansi -pedantic -g -c lab3main.c

get_title.o: get_title.c lab3.h
	gcc -ansi -pedantic -g -c get_title.c

readtitles.o: readtitles.c lab3.h
	gcc -ansi -pedantic -g -c readtitles.c

getfavorites.o: getfavorites.c lab3.h
	gcc -ansi -pedantic -g -c getfavorites.c

savedata.o: savedata.c lab3.h
	gcc -ansi -pedantic -g -c savedata.c

free_dmem.o: free_dmem.c lab3.h
	gcc -ansi -pedantic -g -c free_dmem.c

clean: 
	rm -rf *.o lab3main readtitles get_title getfavorites savedata free_dmem
	
