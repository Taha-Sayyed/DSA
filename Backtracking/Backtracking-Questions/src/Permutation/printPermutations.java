package Permutation;
import java.util.ArrayList;
import java.util.List;

public class printPermutations {
    ArrayList<Character>str=new ArrayList<>(List.of('A','B','C'));
    ArrayList<Character>sel=new ArrayList<>(List.of('F','F','F'));
    ArrayList<Character>result=new ArrayList<>();
    public void perm(int k){
        if(k==str.size()){
            System.out.println(result);
            return;
        }
        for(int i=0;i<str.size();i++){
            if(sel.get(i)=='F'){

                result.add(k,str.get(i));
                sel.set(i,'T');

                perm(k+1);

                result.remove(result.size()-1);
                sel.set(i,'F');
            }
        }
    }

    public static void main(String[] args) {
        printPermutations obj=new printPermutations();
        obj.perm(0);
    }
}
