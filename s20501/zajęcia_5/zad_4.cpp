#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

// Napisz program, który uruchomi podproces za pomocą komendy fork.
// Niech proces rodzica oczekuje na proces potomka.
//  Oba procesy powinny wypisać swój PID oraz PPID.
int main()
{
    pid_t pid = fork();

    cout << "PID: " << getpid() << endl;
    cout << "PPID: " << getppid() << endl;

    if (pid > 0)
    {
        wait(NULL);
    }

    return 0;
}
