#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void string2hexString(char * input, char * output)
// {
//   int loop;
//   int i;
//
//   i=0;
//   loop=0;
//
//   while(input[loop] != '\0')
//   {
//     sprintf((char*) (output+i), "%02x")
//   }
// }

// int main()
// {
//   char greetings[] = "Hello world!"
//
//
//
//   // char hex[] = "6A";                          // here is the hex string
//   // int num = (int)strtol(hex, NULL, 16);       // number base 16
//   // printf("%c\n", num);                        // print it as a char
//   // printf("%d\n", num);                        // print it as decimal
//   // printf("%X\n", num);                        // print it back as hex
// }

// int main() {
//     int data = 1921947104199;
//     printf("%x\n", data);    // just print data
//     printf("%0x\n", data);   // just print data ('0' on its own has no effect)
//     printf("%02x\n", data);
//     printf("%8x\n", data);   // print in 8 width and pad with blank spaces
//     printf("%08x\n", data);  // print in 8 width and pad with 0's
//
//     return 0;
// }

//char type ====> int
// int main() {
//    const char *str = "12345";
//    char c = 's';
//    int x, y, z;
//
//    sscanf(str, "%d", &x); // Using sscanf
//    printf("\nThe value of x : %d", x);
//
//    y = atoi(str); // Using atoi()
//    printf("\nThe value of y : %d", y);
//
//    z = (int)(c); // Using typecasting
//    printf("\nThe value of z : %d", z);
//
//    return 0;
// }

// void tohex (unsigned char *in, char *out) {
//     while (*in != '\0') {
//         sprintf (out, "%02x", *in++);
//         out += 2;
//     }
// }
//
// int main (void) {
//     char input[] = "ab.c2";
//     char output[sizeof(input) * 2 - 1];
//     tohex (input, output);
//     printf ("[%s] -> [%s]\n", input, output);
//     return 0;
// }

char * tohex (unsigned char *s) {
    size_t i, len = strlen (s) * 2;

    // Allocate buffer for hex string result.
    // Only output if allocation worked.

    char *buff = malloc (len + 1);
    if (buff != NULL) {
        // Each char converted to hex digit string
        // and put in correct place.

        for (i = 0; i < len ; i += 2) {
            sprintf (&(buff[i]), "%02x", *s++);
        }
    }

    // Return allocated string (or NULL on failure).

    return buff;
}

int main (void) {
    char *input = "ab.14c2";

    char *hexbit = tohex(input);
    printf ("[%s] -> [%s]\n", input, hexbit);
    free (hexbit);

    return 0;
}
