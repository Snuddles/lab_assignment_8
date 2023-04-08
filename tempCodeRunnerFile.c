void printArray(int pData[], int dataSz) {
    printf("\tData:\n\t");
    for (int i = 0; i < 100; ++i) {
        printf("%d ", pData[i]);
    }
    printf("\n\n");
	for (int i = dataSz - 100; i < dataSz; ++i) {
        printf("%d ", pData[i]);
    }
    printf("\n\n");
}