import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public int bruteForce(int arr[], int n){
		int[] unique = new int[n];
		int countUnique = 1;
		unique[0] = arr[0];
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] != arr[pos]){
				unique[countUnique] = arr[pos];
				countUnique++;
			}
		}
		int arrFill = 0;
		int temp = countUnique;
		while(temp != 0){
			arr[arrFill] = unique[arrFill];
			arrFill++;
			temp--;
		}
		return countUnique;
	}

	public int Optimize(int[] arr, int n){
		int start = 0;
		int end = 0;
		while(end < n){
			if(arr[start] != arr[end]){
				swap(arr, start+1, end);
				start++;
			}
			end++;
		}
		return start+1;
	}

	public void swap(int[] arr, int idx1, int idx2){
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}

public class RemoveDuplicate{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int[] arr = {40,30,30,30,20};

		// System.out.println(solve.bruteForce(arr, arr.length));
		System.out.println(solve.Optimize(arr,arr.length));
		System.out.println(Arrays.toString(arr));
	}
}