// version 1.2
// Number of functions = 1

int dcount() {

		long int num;
		int count = 0;
		printf("Enter any number: ");
		scanf(" %ld", &num);

		while(num != 0) {
			count++;
			num /= 10;
		}
		printf("%d \n", count);
}
