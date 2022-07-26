#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]) {
	FILE *fp = fopen(argv[1], "r"){
		if(fp == nullptr){
			printf("fopen null [1] input!!!\n");
			return 1;
		}
	}
	fread(&n, sizeof(n), 1, fp);

	uint32_t n = ntohl(n);
	fclose(fp);

	FILE *fp = fopen(argv[2], "r"){
		if(fp == nullptr){
			printf("fopen null [2] input!!!\n");
			return 1;
		}
	}
	fread(&n1, sizeof(n1), 1, fp);

	uint32_t n1 = ntohl(n1);
	fclose(fp);

	uint32_t n_total = n + n1;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n, n, n1, n1, n + n1, n + n1)

}