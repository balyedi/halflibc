size_t strlen(char* string) {
	for(i = 0; string[i] != '\0'; i++) {}
	return i;
}
