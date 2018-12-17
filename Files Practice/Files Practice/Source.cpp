//char str1[999] = " ";
//
//FILE *file = fopen("file_ex3.txt", "rb");
//FILE *file2 = fopen("file_ex8.txt", "wb");
//
//if (file != nullptr) {
//
//	while (feof(file) == 0) {
//
//		fread(str1, 999, 1, file);
//	}
//
//	fwrite(str1, 999, 1, file2);
//}
//
//fclose(file);
//fclose(file2);
//
//FILE *file = fopen("file_ex3.txt", "r");
//
//if (file != nullptr) {
//
//	if (fseek(file, 0, SEEK_END) == 0) {
//
//		long int bytes = ftell(file);
//		printf("The text has %ld bytes\n", bytes);
//	}
//
//	fclose(file);
//}
//
//char str[999] = " ";
//char str2[999] = " ";
//
//FILE *file1 = fopen("file_ex1.txt", "r");
//FILE *file2 = fopen("file_ex3.txt", "r");
//FILE *file3 = fopen("file_ex10.txt", "w");
//
//if (file1 != nullptr) {
//
//	while (feof(file1) == 0) {
//
//		fread(str, 999, 1, file1);
//	}
//}
//
//if (file2 != nullptr) {
//
//	while (feof(file2) == 0) {
//
//		fread(str2, 999, 1, file2);
//	}
//}
//
//fwrite(str, 999, 1, file3);
//fwrite(str2, 999, 1, file3);
//
//fclose(file1);
//fclose(file2);
//fclose(file3);