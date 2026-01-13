package FruitIntoBasket;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.lang.Math;
import java.util.ArrayList;

class Better{
    ArrayList<Integer>a;
    Map<Integer,Integer> map=new HashMap<>();

    public Better(ArrayList<Integer>arr){
        a=arr;
    }

    public int max_subarray_with_k_basket(int k){
        int l=0;
        int r=0;
        int maxlen=0;
        while(r<a.size()){
            map.put(a.get(r), map.getOrDefault(a.get(r), 0) + 1);
            if(map.size()>k){
                while(map.size()>k){
                    map.put(a.get(l), map.get(a.get(l)) - 1);
                    if(map.get(a.get(l))==0){
                        map.remove(a.get(l));
                    }
                    l++;
                }
            }
            if(map.size()<=k){
                maxlen=Math.max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
}


public class BetterDemo {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(List.of(3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4));
        Better bt = new Better(arr);
        System.out.println(bt.max_subarray_with_k_basket(2));
    }
}
