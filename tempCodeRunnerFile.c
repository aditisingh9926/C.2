 FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Aditi.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);

    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    fclose(ptr);