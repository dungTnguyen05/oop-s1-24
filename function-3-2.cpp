int median_array(int array[], int n) {
    if (n % 2 == 0 || n < 1) {
        return 0;
    }

    else {
        int temp, temp_index;

        for (int i = 0; i < n; i++) {
            temp_index = i;

            for (int j = i + 1; j < n; j++) {
                if (array[j] < array[i]) {
                    temp_index = j;
                }
            }

            temp = array[i];
            array[i] = array[temp_index];
            array[temp_index] = temp;
        }

        return array[(n - 1)/2];
    }
}