public class RecursiveSelectionSort {
 2    public static void sort(double[] list) {
 3      sort(list, 0, list.length − 1); // Sort the entire list
 4    }
 5
 6    private static void sort(double[] list, int low, int high) {
 7      if (low < high) {
 8        // Find the smallest number and its index in list[low .. high]
 9        int indexOfMin = low;
10        double min = list[low];
11        for (int i = low + 1; i <= high; i++) {
12          if (list[i] < min) {
13            min = list[i];
14            indexOfMin = i;
15          }
16        }
17
18        // Swap the smallest in list[low .. high] with list[low]
19        list[indexOfMin] = list[low];
20        list[low] = min;
21
22        // Sort the remaining list[low+1 .. high]
23        sort(list, low + 1, high);
24      }
25    }
26  }