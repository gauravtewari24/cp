package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution {

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String firstName=sc.nextLine();
        String middleName=sc.nextLine();
        String lastName=sc.nextLine();
        int i=0;
        System.out.println(firstName+" "+middleName+" "+lastName+"-"+firstName.charAt(i)+"."+middleName.charAt(i)+"."+lastName.charAt(i));
    }
}
