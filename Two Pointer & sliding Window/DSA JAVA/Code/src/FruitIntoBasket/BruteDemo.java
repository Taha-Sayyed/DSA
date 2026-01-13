package FruitIntoBasket;

import java.util.List;
import java.util.Set;
import java.util.HashSet;
import java.util.ArrayList;
import java.lang.Math;

class Brute{
    ArrayList<Integer>arr;
    public Brute(ArrayList<Integer>input_arr){
        arr=input_arr;
    }

    int maxlen=0;

    public int max_subarray_with_k_basket(int k){
        for(int i=0;i<arr.size();i++){
            Set<Integer>st=new HashSet<>();
            for(int j=i;j<arr.size();j++){
                st.add(arr.get(j));
                if(st.size()<=2){
                    maxlen=Math.max(maxlen,j-i+1);
                }else{break;}
            }
        }

        return maxlen;
    }
}


public class BruteDemo {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<>(List.of(3,3,3,1,2,1,1,2,3,3,4));
        Brute b=new Brute(arr);
        System.out.println(b.max_subarray_with_k_basket(2));
    }
}
