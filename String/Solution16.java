package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;


public class Solution16 {
    public  static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String sentence=s.nextLine();
        String arr[]=sentence.split(" ");
        for(int i=0;i<arr.length;i++){
            String s1="";
            for(int j=arr[i].length()-1;j>=0;j--){

               s1=s1+arr[i].charAt(j);
            }
            if(s1.compareTo(arr[i])==0){
                System.out.println(arr[i]);

            }
        }
    }
}
