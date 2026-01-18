package Subarrays_With_k_different_integer;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Optimal{
    ArrayList<Integer>a;
    public Optimal(ArrayList<Integer>arr){
        a=arr;
    }
    public int subarray_count(int k){
        int l=0;
        int r=0;
        int count=0;
        Map<Integer,Integer> mp=new HashMap<Integer,Integer>();

        while(r<a.size()){
            mp.put(a.get(r),mp.getOrDefault(a.get(r),0)+1);
            while(mp.size()>k){
                mp.put(a.get(l),mp.get(a.get(l))-1);
                if(mp.get(a.get(l))==0){
                    mp.remove(a.get(l));
                }
                l++;
            }
            if(mp.size()<=k){
                count=count+(r-l+1);
            }
            r++;
        }
        return count;
    }

    public int total_subarray_count(int k){
        return subarray_count(k)-subarray_count(k-1);
    }
}

public class OptimalDemo {
    public static void main(String[] args) {
        ArrayList<Integer>arr=new ArrayList<>(List.of(1,2,1,3,4));
        Optimal o=new Optimal(arr);
        System.out.println(o.total_subarray_count(3));
    }
}
