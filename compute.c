
int apply_key(int k[K], int x[X]) {
	int val = 0;
	for (int i = 0 ; i < X ; i++) val += place_value[i]*x[i];
	return k[val];
}
void copy_x(int src[X],int tar[X]) {
	for (int i = 0; i < X; i++) tar[i] = src[i];
}

void encode_simple(int k[K], int p, int x[X] ) {
	int t[X];
	for (int i = 0; i < 100; i++) {
		randomize_x(t);
		if (apply_key(k,t) == p) {
			copy_x(t,x);
			return;
		}
	}
	printf("failure to encode");
	return;
}


void encode_dual(int k1[K], int k2[K], int p, int q,int x[X] ) {
	int t[X];
	for (int i = 0; i < 1000; i++) {
		randomize_x(t);
		if (apply_key(k1,t) == p && apply_key(k2,t) == q ) {
			copy_x(t,x);
			return;
		}
	}
	printf("failure to encode");
	return;
}





