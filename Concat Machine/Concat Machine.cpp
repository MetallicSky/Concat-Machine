#include "Concat Machine.h"

using std::cout;
using std::endl;

#ifdef PR_DEBUG
#define LOG(X) cout << X << endl;
void initDebugArgs(int& argc, const char**& argv) {
	// Simulate values for argc and argv in debug mode
	static const char* debug_argv[] = { "ConcatMachine.exe", "C:/Test Folder" };
	argc = 2;
	argv = debug_argv;
}
#else
#define LOG(X)
#define initDebugArgs(argc, argv)
#endif

int main(int argc, char* argv[])
{
	initDebugArgs(argc, (const char**&)argv);
	LOG(argc);
	cout << argc << endl;
	cout << "Hello CMake.\n";
	return 0;
}