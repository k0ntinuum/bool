#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "constant.c"
#include "random.c"
#include "key.c"
#include "compute.c"
#include "text.c"
#include "print.c"

int main() {
    int k[2][K];int x[X];int y;int p;int q;int r;int c;
    create_key(k[0]);
    create_key(k[1]);
    randomize_x(x);
    hide_cursor();
    cls();
    for (int s = 0; s < 1000; s++ ) {
        create_key(k[0]);
        create_key(k[1]);
        
        print_key(k[0],0);
        print_key(k[1],18);
        cursor_to(18,1);
        // for (int i = 0; i < 10; i++ ) {
        //     randomize_x(x);
        //     y = apply_key(k,x);
        //     printf("k(");print_x(x);printf(") = ");print_bit(y);printf("\n");

        // }

         for (int i = 0; i < 4; i++ )  {
            p = arc4random_uniform(B);
            q = arc4random_uniform(B);
            //p = i/2;
            r = 4*i + 1;
            c = 38;
            encode_dual(k[0],k[1], p, q, x);
            cursor_to(r, c);
            printf("  f(");print_bit(p);printf(",");print_bit(q); printf(") = "); print_x(x);//printf("\n");
            y = apply_key(k[0],x);
            cursor_to(r+1, c);
            printf("  k1(");print_x(x);printf(") = ");print_bit(y);//printf("\n");
            y = apply_key(k[1],x);
            cursor_to(r+2, c);
            printf("  k2(");print_x(x);printf(") = ");print_bit(y);//printf("\n");
            printf("\n");
        }
        usleep(1000000);

    }




    

    //print_matrix(M_orig);
}
      