public static void BubbleSort(int[] arr) {
  for (int i = 0; i < arr.Length; i++) {
    for (int j = i + 1; j < arr.Length; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}