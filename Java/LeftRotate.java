import java.io.*;

class LeftRotate {

    static void leftRotate(int arr[], int d) {
        if (d == 0)
            return;
        int n = arr.length; // 1 2 3 4 5 6 7 8 9 (d=3)
        rvereseArray(arr, 0, d - 1); // 3 2 1 4 5 6 7 8 9
        rvereseArray(arr, d, n - 1); // 3 2 1 9 8 7 6 5 4
        rvereseArray(arr, 0, n - 1); // 4 5 6 7 8 9 1 2 3
    }

    static void rvereseArray(int arr[], int start, int end) {
        int temp;
        while (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
        int n = arr.length;
        int d = 2;

        // in case the rotating factor is
        // greater than array length
        d = d % n;
        leftRotate(arr, d); // Rotate array by d
        printArray(arr);
    }
}