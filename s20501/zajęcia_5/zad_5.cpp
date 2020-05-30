#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

// Napisz program, który będzie obliczał w 2 procesach:

//     Proces rodzica: Wartość sumy liczb od 0 do wartości zadanej jako pierwszy argument wykonania programu.
//     Proces potomny: Wypisujący liczby nieparzyste od 1 do wartości zadanej jako pierwszy argument wykonania programu.
//     Program powinien wypisać wyniki w kolejności takiej, że najpierw wypisze wynik proces potomny, a następnie proces rodzica. Nie korzystaj z komendy sleep.
int main(int argc, char *argv[])
{

    int argument = atoi(argv[1]);

    pid_t pid = fork();

    if (pid > 0)
    {
        int suma = 0;
        for (int i = 0; i <= argument; i++)
        {
            suma += i;
        }

        wait(NULL);

        cout << "suma: " << suma << endl;
    }
    else
    {

        for (int i = 1; i <= argument; i++)
        {
            if (i % 2)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}
