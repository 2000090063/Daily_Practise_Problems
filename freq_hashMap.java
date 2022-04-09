//frequency of eleemnts using java hash map
// Java program to count frequencies of
// integers in array using Hashmap
import java.io.*;
import java.util.*;
class OccurenceOfNumberInArray {
	static void frequencyNumber(int arr[], int size)
	{
		// Creating a HashMap containing integer
		// as a key and occurrences as a value
		HashMap<Integer, Integer> freqMap
			= new HashMap<Integer, Integer>();

		for (int i=0;i<size;i++) {
			if (freqMap.containsKey(arr[i])) {

				// If number is present in freqMap,
				// incrementing it's count by 1
				freqMap.put(arr[i], freqMap.get(arr[i]) + 1);
			}
			else {

				// If integer is not present in freqMap,
				// putting this integer to freqMap with 1 as it's value
				freqMap.put(arr[i], 1);
			}
		}

		// Printing the freqMap
		for (Map.Entry entry : freqMap.entrySet()) {
			System.out.println(entry.getKey() + " " + entry.getValue());
		}
	}

	// Driver Code
	public static void main(String[] args)
	{
		int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
		int size = arr.length;
		frequencyNumber(arr,size);
	}
}
