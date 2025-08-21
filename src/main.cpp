#include <iostream>
#include <string.h>
#include <windows.h>
#include <cstdlib>
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QEvent>
#include <QObject>

#define A 220
#define B 246
#define C 261
#define D 293
#define E 329
#define F 349
#define G 392

class SailorsWindow : public QApplication {
    
};

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    
    QPushButton button;
    button.setText("My text");
    button.setToolTip("A tooltip");
    button.show();

    return app.exec();
}

void terminal_music() {
    std::cout << "11 Wow Sail Studio is real!!!\n";

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
		case 't': // t de tempo
		    Beep(0, 500);
		    break;
		case '8':
		    modo = 2;
		    break;
		}	

	    }
	} else if (modo == 2) {
	    std::cout << "modo infinito, fecha a janela para sair";
	    while (true) {
		switch (std::rand() % 8) {
		case 1:
		    Beep(A, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 2:
		    Beep(B, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 3:
		    Beep(C, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 4:
		    Beep(D, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 5:
		    Beep(E, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 6:
		    Beep(F, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 7:
		    Beep(G, std::rand() % 1000 / std::rand() % 10);
		    break;
		case 8:
		    Beep(0, std::rand() % 1000 / std::rand() % 10);
		    break;
		}
	    }
	}
    } while (escolha != 0);
}
