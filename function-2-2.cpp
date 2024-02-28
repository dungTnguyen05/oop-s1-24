int max_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    else {
        int res = array[0];

        for (int i = 1; i < n; i++) {
            if (array[i] > res) {
                res = array[i];
            }
        }

        return res;
    }
}