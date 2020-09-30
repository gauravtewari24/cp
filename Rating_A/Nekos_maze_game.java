import java.io.BufferedReader;
//import java.io.CharConversionException;
import java.io.IOException;
import java.io.InputStreamReader;

//import java.util.Comparator;
//import java.util.Deque;
import java.math.BigInteger;
import java.security.acl.LastOwnerException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.PriorityQueue;
import java.util.Set;
import javafx.beans.binding.StringBinding;
import javax.xml.bind.SchemaOutputResolver;
//import java.util.LinkedList;
//import java.util.PriorityQueue;
//import java.util.Random;


public class Nekos_maze_game {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s[]=br.readLine().trim().split(" ");
        int n=Integer.parseInt(s[0]);
        int q= Integer.parseInt(s[1]);
        HashMap<Integer,Boolean>hm1=new HashMap<Integer, Boolean>();
        HashMap<Integer,Boolean>hm2=new HashMap<Integer, Boolean>();
        //ArrayList<String>al=new ArrayList<>();
        Set hs=new HashSet();

        String ans="Yes";
        for(int i=0;i<q;++i)
        {

            String s1[]=br.readLine().trim().split(" ");
            int ii=Integer.parseInt(s1[0]);
            int jj= Integer.parseInt(s1[1]);

            if(ii==2)
            {
                if(hm2.get(jj)==null||hm2.get(jj)==true)
                {hm2.put(jj,false);}

                else
                {hm2.put(jj,true);
                    if(hs.contains(jj+" "+jj))
                        hs.remove(jj+" "+jj);
                    if(hs.contains((jj+1)+" "+(jj)))
                        hs.remove((jj+1)+" "+(jj));
                    if(hs.contains((jj-1)+" "+(jj)))
                        hs.remove((jj-1)+" "+(jj));
                }
            }
            else
            {
                if(hm1.get(jj)==null||hm1.get(jj)==true)
                { hm1.put(jj,false);

                }
                else {
                    hm1.put(jj, true);
                    if(hs.contains(jj+" "+jj))
                        hs.remove(jj+" "+jj);
                    if(hs.contains(jj+" "+(jj+1)))
                        hs.remove(jj+" "+(jj+1));
                    if(hs.contains(jj+" "+(jj-1)))
                        hs.remove(jj+" "+(jj-1));
                }
            }
           // System.out.println(hs.toString());
             if(ii==1&&hm1.get(jj)==false)
            {
                if(hm2.get(jj)!=null&&hm2.get(jj)==false)
                    hs.add(jj+" "+jj);
                if(hm2.get(jj-1)!=null&&hm2.get(jj-1)==false)
                    hs.add(jj+" "+(jj-1));
                if(hm2.get(jj+1)!=null&&hm2.get(jj+1)==false)
                    hs.add(jj+" "+(jj+1));

            }
            if(ii==2&&hm2.get(jj)==false)
            {
                if(hm1.get(jj)!=null&&hm1.get(jj)==false)
                    hs.add(jj+" "+jj);
                if(hm1.get(jj-1)!=null&&hm1.get(jj-1)==false)
                    hs.add((jj-1)+" "+jj);
                if(hm1.get(jj+1)!=null&&hm1.get(jj+1)==false)
                    hs.add((jj+1)+" "+jj);
            }
          //  System.out.println(hs.toString());
            if (hs.isEmpty()) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
           // System.out.println();


        }
        }


    }








