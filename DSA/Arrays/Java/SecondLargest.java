import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public int bruteForce(int[] arr, int n){
		int maxIdx = 0;
		int scndMaxIdx = -1;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIdx])
				maxIdx = pos;
		}
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] != arr[maxIdx]){
				if(scndMaxIdx == -1 || arr[pos] > arr[scndMaxIdx]){
					scndMaxIdx = pos;
				}
			}
		}
		return arr[scndMaxIdx];
	}

	public int Optimize(int[] arr, int n){
		int maxIdx = 0;
		int scndMaxIdx = -1;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIdx]){
				scndMaxIdx = maxIdx;
				maxIdx = pos;
			}else if(arr[pos] != arr[maxIdx]){
				if(scndMaxIdx == -1 || arr[pos] > arr[scndMaxIdx])
					scndMaxIdx = pos;
			}
		}
		return arr[scndMaxIdx];
	}
}

public class SecondLargest{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int[] arr = {5,1,3,2,4};

		System.out.println(solve.bruteForce(arr, arr.length));
		System.out.println(solve.Optimize(arr,arr.length));
	}
}