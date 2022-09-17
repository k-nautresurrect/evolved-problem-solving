import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public void bruteForce(int arr[], int n){
		int temp = arr[0];
		for(int pos = 1; pos < n; pos++){
			arr[pos-1] = arr[pos];
		}
		arr[n-1] = temp;
	}
}

public class LeftRotateByOne{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int[] arr = {1,2,3,4,5};
		solve.bruteForce(arr, arr.length);
		System.out.println(Arrays.toString(arr));
	}
}