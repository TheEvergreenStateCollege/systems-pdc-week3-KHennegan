#include <stdio.h>
#include <limits.h>

int main() {
    int i;
    char ch;
    short sh;
    long ln;
    unsigned short us;


    printf("%d   %d\n", SHRT_MAX, SHRT_MIN);

    sh = 3770;
    i = sh * 10;
    
    printf("sh = %d,  %x\n", sh, sh);

    //printf("ushort %d\n", USHRT_MAX);
    //printf("long  %ld   %ld\n", LONG_MAX, LONG_MIN);
    /*
    cout << "ushort: " << USHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long: " << LONG_MIN << endl;
*/

    return 0;
}