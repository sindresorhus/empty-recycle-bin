#include <stdio.h>
#include <windows.h>

int main(int argc, char **argv) {
	if (argc > 1) {
		if (strcmp(argv[1], "--version") == 0) {
			puts("1.0.0");
		}

		if (strcmp(argv[1], "--help") == 0) {
			puts("\n  Empty the recycle bin\n\n  Created by Sindre Sorhus");
		}

		return 0;
	}

	SHEmptyRecycleBin(NULL, NULL, SHERB_NOCONFIRMATION | SHERB_NOPROGRESSUI | SHERB_NOSOUND);

	return 0;
}
