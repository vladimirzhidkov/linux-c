#include <stdio.h>
#include <stdlib.h>

void print_env_vars(int var_count, char* envv[]);

int main(int argc, char* argv[], char* envv[]) {

    int env_var_count = atoi(argv[1]);
    print_env_vars(env_var_count, envv);
   
    printf("\n&envv: %p\n", &envv);
    printf("envv: %p\n", envv);

	return 0;
}

void print_env_vars(int var_count, char* envv[]) {
    for (int i = 0; i < var_count; ++i) { 
        printf("env var [%d] = %s\n", i, envv[i]);
    } 
}
