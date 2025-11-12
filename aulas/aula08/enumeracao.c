#include <stdio.h>
#include <stdbool.h>

int main() {

    // const int false = 0;
    // const int true = 1;
    bool ocupado = true;

    const int domingo = 1;
    const int segunda = 2;
    const int terca = 3;
    const int quarta = 4;
    const int quinta = 5;
    const int sexta = 6;
    const int sabado = 7;

    enum boolean_e {falso, verdadeiro};

    enum dias_e {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };

    return 0;
}