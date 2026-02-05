package Permutation.printPermutationsBounded;

import java.util.ArrayList;
import java.util.List;

public class printPermutations {
    ArrayList<Character>res=new ArrayList<>();
    ArrayList<Character>str=new ArrayList<>(List.of('A','B','C'));
    ArrayList<Character>sel=new ArrayList<>(List.of('F','F','F'));

    public void permutations(int k){
        if(k==str.size()){
            System.out.println(res);
            return;
        }
        for(int i=0;i<str.size();i++){
            if(sel.get(i)=='F'){
                if(k>0 && str.get(i)-res.get(k-1)==1){
                    continue;
                }
                res.add(k,str.get(i));
                sel.set(i,'T');

                permutations(k+1);

                res.remove(res.size()-1);
                sel.set(i,'F');
            }
        }
    }

    public static void main(String[] args) {
        printPermutations obj=new printPermutations();
        obj.permutations(0);
    }
}
