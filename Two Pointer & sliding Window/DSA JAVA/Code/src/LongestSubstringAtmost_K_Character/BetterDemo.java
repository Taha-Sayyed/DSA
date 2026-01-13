package LongestSubstringAtmost_K_Character;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Better{
    ArrayList<Character>a;
    public Better(ArrayList<Character>arr){
        a=arr;
    }
    public int longest_substring_atmost_k_character(int k){
        int maxlen=0;
        int l=0;
        int r=0;
        Map<Character,Integer>map=new HashMap<>();
        while(r<a.size()){
            map.put(a.get(r),map.getOrDefault(a.get(r),0)+1);
            if(map.size()<=k){
                maxlen=Math.max(maxlen,r-l+1);
            }
            while(map.size()>k){
                map.put(a.get(l),map.get(a.get(l))-1);
                if(map.get(a.get(l))==0){
                    map.remove(a.get(l));
                }
                l++;
            }
            r++;
        }
        return maxlen;
    }
}

public class BetterDemo {
    public static void main(String[] args) {
        ArrayList<Character> arr=new ArrayList<>(List.of('a','a','a','b','b','c','c','d'));
        Better b=new Better(arr);
        System.out.println(b.longest_substring_atmost_k_character(2));
    }
}
