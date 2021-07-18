#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]) {
	FILE *f;
	uint32_t a, b, rlt=0;
	f = fopen(argv[1], "r");
	fread(&a, sizeof(a), 1, f);
	a = ntohl(a);
	f = fopen(argv[2], "r");
	fread(&b, sizeof(b), 1, f);
	b = ntohl(b);
	rlt = a + b;
	printf("%d(0x%x)+%d(0x%x)=%d(0x%x)\n\n\n", 
		a, a, b, b, rlt, rlt);
}
