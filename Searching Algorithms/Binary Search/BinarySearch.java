import java.util.*;

class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter the Size of the Array:");
        n = sc.nextInt();
        final int SIZE = n;  // make the SIZE constant
        int[] array = new int[SIZE];
        System.out.println("Enter the elements of the array in Ascending Order:");
        // take the elements of the Array as input
        for (int i = 0; i < SIZE; ++i) {
            array[i] = sc.nextInt();
        }
        System.out.print("Please enter the number you want to search for:");
        n = sc.nextInt();
        int index = BinarySearch.binarySearch(array, n, 0, SIZE - 1);
        if (index != -1) {
            System.out.println("the Elements is in index: " + index);
        } else {
            System.out.println("the Elements isn't in the Array");
        }
    }

    static int binarySearch(int[] A, int number, int low, int high) {
        if (low > high) {
            return -1;
        }
        int mid = low + (high - low) / 2;
        if (A[mid] == number) {
            return mid;
        }
        // Search the left half
        if (A[mid] > number) {
            return binarySearch(A, number, low, mid - 1);
        }
        // Search the right half
        return binarySearch(A, number, mid + 1, high);
    }
}
