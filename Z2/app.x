 
struct wejscie {
	char text_in[100];
};
struct wyjscie {
	char text_out[100];
};

program TESTOWY{
	version PROBNA{
	wyjscie OBLICZENIA( wejscie) = 1;	
	} = 1;
} = 0x21000000;
