/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "app.h"

wyjscie *
obliczenia_1_svc(wejscie *argp, struct svc_req *rqstp)
{
	static wyjscie  result;

	for (int i = 0, j = 0; i < strlen(argp->text_in); ++i, j += 2)
        sprintf(result.text_out + j, "%02x", argp->text_in[i] & 0xff);

    printf("Dane wejsciowe w hex to %s \n", result.text_out);

	return &result;
}
