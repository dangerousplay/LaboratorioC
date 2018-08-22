//
// Created by aluno on 22/08/18.
//

#include "math.h"


int* absolute(double[] notas) {
    int notasTen[11];

    for (int i = 0; i < notas / sizeof(double); i++) {
        double nota = notas[i];

        if (nota >= 0 && nota < 1) {
            notasTen[0]++;
        } else if (nota >= 1 && nota < 2) {
            notasTen[1]++;
        } else if (nota >= 2 && nota < 3) {
            notasTen[2]++;
        } else if (nota >= 3 && nota < 4) {
            notasTen[3]++;
        } else if (nota >= 4 && nota < 5) {
            notasTen[4]++;
        } else if (nota >= 5 && nota < 6) {
            notasTen[5]++;
        } else if (nota >= 6 && nota < 7) {
            notasTen[6]++;
        } else if (nota >= 7 && nota < 8) {
            notasTen[7]++;
        } else if (nota >= 8 && nota < 9) {
            notasTen[8]++;
        } else if (nota >= 9 && nota < 10) {
            notasTen[9]++;
        } else if (nota == 10) {
            notasTen[10]++;
        }
    }


    return notasTen;
}
