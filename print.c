
void print_perm(int* f, int l) {
	for (int i = 0; i < l; i++)  {
        if (i % 16 == 0 ) printf("\n");
        printf("%03d ", f[i]);
        
    }
    printf("\n");
}

void print_key(int k[K], int c) {
    for (int i = 0; i < K; i++) {
        cursor_to(1 + i / 16, c + 3 + i % 16 );
        switch (k[i]) {
            case 0 : rgb(255,255,255);printf("O");break;
            case 1 : rgb(255,255,255);printf("|");break;
            case 2 : rgb(255,255,255);printf("2");break;
            default : printf("?");break;
        }

    }
}

void print_x(int v[X]) {
    for (int i = 0; i < X; i++) {
        //cursor_to(10, 1 + i);
        switch (v[i]) {
            case 0 : rgb(255,255,255);printf("O");break;
            case 1 : rgb(255,255,255);printf("|");break;
            case 2 : rgb(255,255,255);printf("2");break;
            default : printf("?");break;
        }

    }
}
void print_bit(int b) {
        switch (b) {
            case 0 : rgb(255,255,255);printf("O");break;
            case 1 : rgb(255,255,255);printf("|");break;
            case 2 : rgb(255,255,255);printf("2");break;
            default : printf("?");break;
        }
}
// int h_dist(int X[S][S], int Y[S][S]) {
//     int e = 0;
//     for (int i = 0; i < S; i++) for (int j = 0; j < S; j++) if (X[i][j] != Y[i][j]) e++;
//     return e;
    
// }
