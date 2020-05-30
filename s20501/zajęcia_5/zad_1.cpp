#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

// Napisz program, który przedstawi swój numer PID, oraz PPID.
int main()
{
    pid_t pid = getpid();
    pid_t pPid = getppid();
    cout << "PID: " << pid << endl;
    cout << "PPID: " << pPid << endl;
}
