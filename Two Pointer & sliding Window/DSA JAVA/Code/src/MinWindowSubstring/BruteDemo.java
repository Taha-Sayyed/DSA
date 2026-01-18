package MinWindowSubstring;

import java.util.HashMap;
import java.util.Map;

class Brute{
    String st1;
    String st2;
    public Brute(String s1,String s2){
        st1=s1;
        st2=s2;
    }
    public int min_len(){
        int minlen=100000;
        for(int i=0;i<st1.length();i++){
            Map<Character,Integer> mp=new HashMap<>();
            int count=0;

            for(int j=0;j<st2.length();j++){
                mp.put(st2.charAt(j),mp.getOrDefault(st2.charAt(j),0)+1);
            }

            for(int j=i;j<st1.length();j++){
                mp.put(st1.charAt(j),mp.getOrDefault(st1.charAt(j),0)-1);

                if(mp.get(st1.charAt(j))==0){
                    count=count+1;
                }

                if(count==st2.length()){
                    minlen=Math.min(minlen,j-i+1);
                    mp=null;
                    break;
                }
            }
        }
        return minlen;
    }
}

public class BruteDemo {
    public static void main(String[] args) {
        String s1=new String("ddaaabbca");
        String s2=new String("abc");
        Brute b=new Brute(s1,s2);
        System.out.println(b.min_len());
    }
}
