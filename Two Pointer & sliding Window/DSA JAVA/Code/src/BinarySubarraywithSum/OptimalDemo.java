package BinarySubarraywithSum;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;

class Optimal{
    ArrayList<Integer>a;
    public Optimal(ArrayList<Integer>arr){
        a=arr;
    }
    public int subarray_count(int goal){
        int sum=0;
        int count=0;
        int l=0;
        int r=0;
        while(r<a.size()){
            if(goal<0){return 0;}
            sum=sum+a.get(r);
            while(sum>goal){
                sum=sum-a.get(l);
                l++;
            }
            if(sum<=goal){
                count=count+(r-l+1);
            }
            r++;
        }
        return count;
    }
    public int total_count(int goal){
        return subarray_count(goal)-subarray_count(goal-1);
    }
}

public class OptimalDemo {
    public static void main(String[] args) {
        ArrayList<Integer>arr=new ArrayList<Integer>(List.of(1,0,0,1,1,0));
        Optimal o=new Optimal(arr);
        System.out.println(o.total_count(2));
    }
}
