import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public void bruteForce(int[] arr, int n){
		int[] rev = new int[n];
		int revPos = 0;
		for(int pos = n-1; pos >= 0; pos--){
			rev[revPos] = arr[pos];
			revPos++;
		}
		revPos = 0;
		for(int num : rev){
			arr[revPos] = num;
			revPos++;
		}
	}

	public void Optimize(int[] arr, int n){
		int frontIdx = 0;
		int lastIdx = n-1;
		while(frontIdx < lastIdx){
			swap(arr, frontIdx, lastIdx);
			frontIdx++;
			lastIdx--;
		}
	}

	public void swap(int[] arr, int idx1, int idx2){
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}

public class ReverseArray{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int[] arr = {1,2,3,4,5,6};
		solve.bruteForce(arr,arr.length);
		solve.Optimize(arr,arr.length);
		System.out.println(Arrays.toString(arr));
	}
}
