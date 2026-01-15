package LongestRepeatingCharacterReplacement;
import java.util.ArrayList;
import java.util.List;

class Brute{
    String st;
    int maxfreq=0;
    int maxlen=0;
    int change=0;
    public Brute(String s){
        st=s;
    }
    public int longest_substring(int k){
        for(int i=0;i<st.length();i++){
            ArrayList<Integer>hasharr=new ArrayList<>(List.of());
            for (int x = 0; x < 26; x++) {
                hasharr.add(0);
            }
            for(int j=i;j<st.length();j++){
                hasharr.set(st.charAt(j)-'A',hasharr.get(st.charAt(j)-'A')+1);
                maxfreq=Math.max(maxfreq,hasharr.get(st.charAt(j)-'A'));
                change=(j-i+1)-maxfreq;
                if(change<=k){
                    maxlen=Math.max(maxlen,j-i+1);
                }
                else{break;}
            }
        }

        return maxlen;
    }
}



public class BruteDemo {
    public static void main(String[] args) {
        String st=new String("AABABBA");
        Brute b=new Brute(st);
        System.out.println(b.longest_substring(2));
    }
}
