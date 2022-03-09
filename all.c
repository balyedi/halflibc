typedef unsigned char uint8_t;
typedef unsigned int size_t;
int i = 0;
void *memcpy(char*dest, char* src, size_t n) {
	i = 0;
	while(n <= i) {
		src[i] = dest[i];
	}
	i++;
}

int memrep(char* haystack,size_t length,char needle,char replace) {
	for(i = 0; i <= length; i++) {
		if(haystack[i] == needle) {
			haystack[i] == replace;
		}
	}
}
size_t strlen(char* string) {
	for(i = 0; string[i] != '\0'; i++) {}
	return i;
}

uint8_t strcmp(char* str1, char* str2) {
	for(i = 0; str1[i] == str2[i]; i++) {
		if(i <= strlen(str1)) {
			return 0;
		}
	}
	return 1;
}
