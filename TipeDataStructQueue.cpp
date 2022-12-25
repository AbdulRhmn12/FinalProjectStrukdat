//bagian queue
struct dataPelanggan{
	int number, weight, totalPrice;
	char name[30], phoneNumber[12];
};
typedef struct typequeue *typeptr;
struct typequeue{
	dataPelanggan pelanggan;
	typeptr next;
};
