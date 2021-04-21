/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "app.h"


void
testowy_1(char *host)
{
	CLIENT *clnt;
	wyjscie  *result_1;
	wejscie  obliczenia_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, TESTOWY, PROBNA, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    printf("\tPodaj dane wejściowe:\t\n\t");
    scanf("%s",obliczenia_1_arg.text_in);

	result_1 = obliczenia_1(&obliczenia_1_arg, clnt);
	if (result_1 == (wyjscie *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	
	
    
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	host = "127.0.0.1";
	testowy_1 (host);
exit (0);
}
