#include "Concat Machine.h"


#ifdef PR_DEBUG
#define LOG(X) cout << X << endl;
void initDebugArgs(int& argc, const char**& argv) { // Simulate values for argc and argv in debug mode
	static const char* debug_argv[] = { "ConcatMachine.exe", "C:/Test Folder" };
	argv = debug_argv;
	argc = 2;
}
#else
#define LOG(X)
#define initDebugArgs(argc, argv)
#endif

string normalizePath(const string& input) {
	string output = input; // Create a modifiable copy of the input
	std::replace(output.begin(), output.end(), '/', '\\'); // Replace '/' with '\'
	if (output[output.length() - 1] != '\\') // Add '\' at the end if there is none
		output.push_back('\\');
	return output;
}

int main(int argc, char* argv[])
{
	initDebugArgs(argc, (const char**&)argv); // These will be changed only in debug mode
	string normalizedPath;
	switch (argc) {
	case 1:
		cerr << "ERROR: no path detected\n";
		return 1;
	case 2:
		LOG(argv[1]);
		normalizedPath = normalizePath(argv[1]); // making Windows path compatible with Linux too
		LOG(normalizedPath);
		break;
	default: {
		cerr << "ERROR: too many arguements detected\n";
		return 1;
	}
	}
	return 0;
}