package Subsequences.printAllSubsequence;

import java.sql.Array;
import java.util.ArrayList;
import java.util.List;

class allSubsequences{

    public void printAllSubseq(int index,ArrayList<Integer> result,ArrayList<Integer>nums){
        if(index>=nums.size()){
            System.out.println(result);
            return;
        }
        result.add(nums.get(index));
        printAllSubseq(index+1,result,nums);

        result.remove(nums.get(index));
        printAllSubseq(index+1,result,nums);
    }
}


public class code {
    public static void main(String[] args) {
        ArrayList<Integer>nums=new ArrayList<>(List.of(3,1,2));
        ArrayList<Integer>result=new ArrayList<>();
        allSubsequences subseq=new allSubsequences();
        subseq.printAllSubseq(0,result,nums);

    }
}
