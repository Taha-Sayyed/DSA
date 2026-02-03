package Subsequences.printAllSubsequenceSumK;
import java.util.ArrayList;
import java.util.List;


class allSbusequence{
    public void printSubsequenceWithSumK(int index,int sum,int k,ArrayList<Integer>nums,ArrayList<Integer>results){
        if(index==nums.size()){
            if(sum==k){
                System.out.println(results);
            }
            return;
        }

        results.add(nums.get(index));
        sum=sum+ nums.get(index);
        printSubsequenceWithSumK(index+1,sum,k,nums,results);

        sum=sum- results.get(results.size()-1);
        results.remove(results.size()-1);
        printSubsequenceWithSumK(index+1,sum,k,nums,results);
    }
}

public class printSubsequence {
    public static void main(String[] args) {
        ArrayList<Integer>nums=new ArrayList<>(List.of(3,1,2));
        ArrayList<Integer>results=new ArrayList<>();
        allSbusequence obj=new allSbusequence();
        obj.printSubsequenceWithSumK(0,0,3,nums,results);

    }
}
