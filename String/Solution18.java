package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;
public class Solution18 {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String s1="15 august is independence day";
        String s2=s1.replaceAll("15 august","26 january");
        String s3=s2.replaceAll("independence","republic");
        System.out.println(s3);
    }
}
