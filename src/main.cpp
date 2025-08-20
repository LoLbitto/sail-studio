#include <iostream>
#include <string.h>
#include <windows.h>

#define A 220
#define B 246
#define C 261
#define D 293
#define E 329
#define F 349
#define G 392

int main() {
    std::cout << "11 Wow Sail Studio is real!!!";

    int escolha = 0;
    int modo = 0;

    do {
	if (modo == 0){
	    std::cout << "Nota: ";
	    std::cin >> escolha;

	    switch (escolha) {
		case 1:
		    Beep(A, 1000);
		    break;
		case 2:
		    Beep(B, 1000);
		    break;
		case 3:
		    Beep(C, 1000);
		    break;
		case 4:
		    Beep(D, 1000);
		    break;
		case 5:
		    Beep(E, 1000);
		    break;
		case 6:
		    Beep(F, 1000);
		    break;
		case 7:
		    Beep(G, 1000);
		    break;
		case 8:
		    modo = 1;
		    break;
	    }
	} else if (modo == 1) {
	    char *sequencia;
	    std::cout << "Digite uma sequência de notas (eg: aabb): ";
	    std::cin >> sequencia;

	    for (size_t i = 0; i < strlen(sequencia); i++) {
		switch (sequencia[i]) {
		case 'a':
		    Beep(A, 500);
		    break;
		case 'b':
		    Beep(B, 500);
		    break;
		case 'c':
		    Beep(C, 500);
		    break;
		case 'd':
		    Beep(D, 500);
		    break;
		case 'e':
		    Beep(E, 500);
		    break;
		case 'f':
		    Beep(F, 500);
		    break;
		case 'g':
		    Beep(G, 500);
		    break;
		case '8':
		    modo = 0;
		    break;
		}	

	    }
	}
    } while (escolha != 0);
    
    return 0;
}
