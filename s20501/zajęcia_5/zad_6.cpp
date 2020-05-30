#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

// Napisz program, który uruchomi 100 procesów w taki sposób, że każdy kolejny potomek stworzy potomka.
// Niech każdy proces poczeka na zakończenie procesu potomka.
// Możesz korzystać z oczekiwania na wejście lub z komendy sleep i zobacz czy drzewko procesów jest takie jak się spodziewasz (możesz w tym celu ograniczyć liczbę procesów do 10).
//  Zobacz podpowiedź na początku tej strony.
int main(int argc, char *argv[])
{

    for (int i = 0; i < 10; i++)
    {
        pid_t child = fork();
        if (i == 9 && child == 0)
        {
            sleep(20);
        }
        if (child > 0)
        {
            wait(NULL);
            break;
        }
    }

    return 0;
}
