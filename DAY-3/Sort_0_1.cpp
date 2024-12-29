void sortZeroesAndOne(int input[], int size)
{
    int i = 0; // Left pointer of the array
    int j = size - 1; // Right pointer of the array

    while (i < j) {
        if (input[i] == 0) {
            i++;
        } else if (input[j] == 1) {
            j--;
        } else if (input[i] == 1 && input[j] == 0) {
            // Swap elements
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
    }
}
