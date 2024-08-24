#include<cstdio>
using namespace std;

int main() {
	int n = 0x12345678;
	const char* p = reinterpret_cast<const char*>(&n);

	for (size_t i = 0; i < sizeof n; ++i) {
		printf("%02X ", p[i]);
	}
	printf("<-> %08X\n", n);
}