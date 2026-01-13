package LongestSubstringAtmost_K_Character;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Brute{
    ArrayList a;
    public Brute(ArrayList<Character>arr){
        a=arr;
    }
    public int longest_substring_atmost_k_character(int k){
        int maxlen=0;
        for(int i=0;i<a.size();i++){
            Map<Character,Integer> map=new HashMap<>();
            for(int j=i;j<a.size();j++){
                map.put((Character)a.get(j),map.getOrDefault(a.get(j),0)+1);
                if(map.size()<=k){
                    maxlen=Math.max(maxlen,j-i+1);
                }
                if(map.size()>k){
                    break;
                }
            }
        }
        return maxlen;
    }
}

public class BruteDemo {
    public static void main(String[] args) {
        ArrayList<Character>arr=new ArrayList<>(List.of('a','a','a','b','b','c','c','d'));
        Brute b=new Brute(arr);
        System.out.println(b.longest_substring_atmost_k_character(2));

    }
}
