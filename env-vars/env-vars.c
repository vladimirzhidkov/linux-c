#include <stdio.h>

int main(int argc, char* argv[], char* envv[]) {

    for (int i = 0; envv[i] != 0; ++i) {
        printf("%s\n", envv[i]);
    }

	return 0;
}
