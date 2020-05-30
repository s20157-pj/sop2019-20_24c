#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

// Niech program z poprzedniego zadania będzie dodatkowo,
// po wypisaniu, czekał na standardowym wejściu na dane od użytkownika.
int main()
{
    pid_t pid = getpid();
    pid_t pPid = getppid();
    cout << "PID: " << pid << endl;
    cout << "PPID: " << pPid << endl;

    int x;
    cin >> x;
}
