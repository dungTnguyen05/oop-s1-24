int count_evens(int number) {
    if (number < 1) {
        return 0;
    }

    else {
        if (number % 2 == 0) {
            return number/2;
        }
    
        else {
            return (number - 1)/2;
        }
    }
}