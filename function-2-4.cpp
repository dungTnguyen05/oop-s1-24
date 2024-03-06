extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int sum_min_max(int integers[], int length) {
    if (length < 1) {
        return -1;
    }

    return array_min(integers, length) + array_max(integers, length);
}

int array_min(int integers[], int length) {
    if (length < 1) {
        return -1;
    }

    int res = integers[0];

    for (int i = 1; i < length; i++) {
        if (integers[i] < res) {
            res = integers[i];
        }
    }

    return res;
}

int array_max(int integers[], int length) {
    if (length < 1) {
        return -1;
    }

    int res = integers[0];

    for (int i = 1; i < length; i++) {
        if (integers[i] > res) {
            res = integers[i];
        }
    }

    return res;
}