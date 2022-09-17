import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public void bruteForce(int[] arr, int n, int d){
		while(d != 0){
			int temp = arr[0];
			for(int pos = 1; pos < n; pos++){
				arr[pos-1] = arr[pos];
			}
			arr[n-1] = temp;
			d--;
		}
	}

	public void Optimize1(int[] arr, int n, int d){
		int start = d%n;
		int[] temp = new int[n];
		for(int pos = 0; pos < n; pos++){
			temp[pos] = arr[start%n];
			start++;
		}
		for(int pos = 0; pos < n; pos++){
			arr[pos] = temp[pos];
		}
	}

	public void Optimize2(int[] arr, int n, int d){
		int start = d%n;
		reverse(arr, 0, start-1);
		reverse(arr, start, n-1);
		reverse(arr, 0, n-1);
	}

	public void reverse(int[] arr, int start, int end){
		while(start < end){
			swap(arr, start, end);
			start++;
			end--;
		}
	}

	public void swap(int[] arr, int idx1, int idx2){
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}

public class LeftRotateByD{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int arr[] = {1,0,1};
		int d = 5;
		solve.Optimize2(arr, arr.length, d);
		System.out.println(Arrays.toString(arr));
	}
}