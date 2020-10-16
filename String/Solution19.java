package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution19 {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String country[]=new String[11];
        String wonder[]=new String[11];
        for(int i=0;i<10;i++){
            country[i]=s.nextLine();
            wonder[i]=s.nextLine();
        }
        System.out.println("enter country name");
        String search=s.nextLine();
        for(int i=0;i<10;i++){
            if(country[i].equals(search)){
                System.out.println(wonder[i]);
            }
        }
    }
}
