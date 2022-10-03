// **LEETCODE** Find All Duplicates in an Array

import java.util.ArrayList;
import java.util.List;

public class findAllDuplicates {
    public static void main(String[] args) {
        int[] arr= {4,3,2,7,8,2,3,1};
        System.out.print(findAllDp(arr));
    }
    public static List<Integer> findAllDp(int[] arr){
        int i=0;
        while(i<arr.length){
            int current = arr[i]-1;
            if(arr[i] != arr[current]){
                int temp=arr[current];
                arr[current]=arr[i];
                arr[i]=temp;
            }
            else{
                i++;
            }
        }
        List<Integer> ans = new ArrayList<>();
        // Search for missing number
        for (int j = 0; j < arr.length; j++) {
            if(arr[j]!=j+1){
                ans.add(arr[j]);
            }
        }
        return ans;
    }
}
