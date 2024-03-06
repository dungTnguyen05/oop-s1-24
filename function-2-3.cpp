extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length) {
    if (is_palindrome(integers, length) == true) {
        return sum_array_elements(integers, length);
    }

    return -2;
}

bool is_palindrome(int integers[], int length) {
    if (length < 1) {
        return false;
    }

    for (int i = 0; i < length/2; i++) {
        if (integers[i] != integers[length - 1 - i]) {
            return false;
        }
    }

    return true;
}

int sum_array_elements(int integers[], int length) {
    if (length < 1) {
        return -1;
    }

    int res = 0;

    for (int i = 0; i < length; i++) {
        res += integers[i];
    }

    return res;
}