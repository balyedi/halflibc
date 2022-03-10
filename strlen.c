size_t strlen(char* string) {
	uint16_t i = 0;
	while(string[i] != '\0') {
		i++;
	}
	return i;
}
