void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    for (unsigned int i = 0; i < length; i++) {
        for (unsigned int j = 0; j <= i; j++)
            mx_printchar(c);
        mx_printchar('\n');
    }
}
