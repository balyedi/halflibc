size_t strlen(char* string) {
	uint16_t i = 0;
	for(i = 0; string[i] != '\0'; i++) {}
	return i;
}
