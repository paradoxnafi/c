int dcount() {

		long int Hnum;
		int Hcount = 0;
		printf("Enter any number: ");
		scanf(" %ld", &Hnum);

		while(Hnum != 0) {
			Hcount++;
			Hnum /= 10;
		}
		printf("%d \n", Hcount);
}
