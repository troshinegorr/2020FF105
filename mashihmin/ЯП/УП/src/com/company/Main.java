package com.company;
import java.math.*;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args)
    {
	int c = 64;
	BigInteger a = new BigInteger("1");
	BigInteger b = new BigInteger("2");
	b = b.pow(c);
	b = b.subtract(a);
	System.out.print(b);
    }
}
