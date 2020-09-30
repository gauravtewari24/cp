import java.io.BufferedReader;
//import java.io.CharConversionException;
import java.io.IOException;
import java.io.InputStreamReader;

//import java.util.Comparator;
//import java.util.Deque;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.PriorityQueue;
import javafx.beans.binding.StringBinding;
import javax.xml.bind.SchemaOutputResolver;
//import java.util.LinkedList;
//import java.util.PriorityQueue;
//import java.util.Random;


public class Journey_Planning {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());
        String s[]=br.readLine().trim().split(" ");
        HashMap<Integer,Long>hm=new HashMap<>();
        for (int i = 0; i < t; ++i) {

            int ele=Integer.parseInt(s[i]);
            int diff=ele-i;
            if(hm.get(diff)==null)
                hm.put(diff,(long)ele);
            else
                hm.put(diff,(long)hm.get(diff)+ele);
        }
        Long max=Long.MIN_VALUE;
        for(Long i :hm.values())
        {
            if(max<i)
                max=i;
        }
        System.out.println(max);
        }

    }








