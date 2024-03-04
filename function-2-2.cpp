int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal = 0;
    int power_2 = 1;

    for (int i = number_of_digits - 1; i >= 0; i--) {
        decimal += binary_digits[i] * power_2;
        power_2 *= 2;
    }

    return decimal;
}