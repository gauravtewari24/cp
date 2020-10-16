package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;
public class Solution15 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Formatter f=new Formatter();
        int rollno[]=new int[10];
        String name[]=new String[10];

        for(int i=0;i<5;i++){

            rollno[i]=sc.nextInt();
            sc.nextLine();
           name[i]=sc.nextLine();


        }

        f.format("%15s %15s\n","Roll Number","Name");
        for(int i=0;i<5;i++){
         f.format("%15d %15s\n",rollno[i],name[i]);
        }
        System.out.println(f);


    }}