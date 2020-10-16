package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s=sc.nextLine();
        int count=0;
        char a[]=s.toCharArray();
        Arrays.sort(a);

       for(int i=0;i<a.length;) {

           if((i<a.length-1)&&((Character.compare(a[i],a[i+1])==0))){
               count+=1;
              i++;
           }else{
           System.out.println(a[i]+"-"+(count+1));
           count=0;i++;
       }
    }
}}