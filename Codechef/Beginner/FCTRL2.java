//problem statement can be found at:
//https://www.codechef.com/problems/FCTRL2

import java.io.*;
import java.math.BigInteger;
import java.util.*;
public class Main {

    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int t, n;
        t = s.nextInt();
        for(int i=0; i<t; i++) {
            n = s.nextInt();
            System.out.println(factorial(n));
        }
    }
    
    public static String factorial(int n) {
        BigInteger b = new BigInteger("1");
        for(int i=1; i<=n; i++)
            b=b.multiply(new BigInteger(i + ""));
        return b.toString();
    }
}
