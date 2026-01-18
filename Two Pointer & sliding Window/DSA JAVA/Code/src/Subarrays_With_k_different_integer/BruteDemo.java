package Subarrays_With_k_different_integer;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;


class Brute{
    ArrayList<Integer>a;
    public Brute(ArrayList<Integer>arr){
        a=arr;
    }
    public int subarray_count(int k){
        int count=0;

        for(int i=0;i<a.size();i++){
            Set<Integer> st=new HashSet<>();
            for(int j=i;j<a.size();j++){
                st.add(a.get(j));
                if(st.size()==k){
                    count=count+1;
                }
                else if(st.size()>k){
                    break;
                }
            }
        }
        return count;
    }
}


public class BruteDemo {
    public static void main(String[] args) {
        ArrayList<Integer>arr=new ArrayList<>(List.of(1,2,1,3,4));
        //ArrayList<Integer>arr=new ArrayList<>(List.of(2,1,1,1,3,4,3,2));
        Brute b=new Brute(arr);
        System.out.println(b.subarray_count(3));

    }
}
