# myprintf
%d or %i: Used to print integers
%s: Used to print strings
%f: Used to print floating point numbers
%c: Used to print characters
%x or %X: Used to print hexadecimal numbers
%p: Used to print pointers
%%: Used to print the % character -- done 


Test for main funct

double pi = 3.14;
    print_f("The value of pi is %.2f.\n", pi);
    // Print a date and time.
    print_f("%s %s\n", "Today is", __DATE__);
    print_f("%s %s\n", "The time is", __TIME__);

    // Print a list of numbers.
    int numbers[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        print_f("%d\n", numbers[i]);
    }

    // Print a table of data.
    print_f("| Name | Age | Occupation |\n");
    print_f("| Snehasish | 25 | AI Engineer |\n");
    print_f("| Alice | 30 | Software Engineer |\n");



