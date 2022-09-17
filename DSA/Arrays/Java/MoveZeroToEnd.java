import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public void bruteForce(int arr[], int n){
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] == 0){
				int zeroCount = pos;
				while(arr[zeroCount] == 0 && zeroCount < n-1){
					zeroCount++;
				}
				swap(arr, pos, zeroCount);
			}
		}
	}

	public void Optimize(int[] arr, int n){
		int startWindow = -1;
		int endWindow = 0;
		while(endWindow < n){
			if(arr[endWindow] != 0){
				swap(arr, startWindow+1, endWindow);
				startWindow++;
			}
			endWindow++;
		}
	}

	public void swap(int[] arr, int idx1, int idx2){
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}

public class MoveZeroToEnd{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int[] arr = {0,1,0,3,4,0,0,0,-2,90,1,87};
		// solve.bruteForce(arr, arr.length);
		solve.Optimize(arr, arr.length);
		System.out.println(Arrays.toString(arr));
	}
}