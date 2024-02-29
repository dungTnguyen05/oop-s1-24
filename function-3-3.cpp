double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    else {
        double weighted_sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (array[j] == array[i]) {
                    count++;
                }
            }

            weighted_sum += array[i] * count;
            count = 0;
        }

        return weighted_sum/n;
    }
}