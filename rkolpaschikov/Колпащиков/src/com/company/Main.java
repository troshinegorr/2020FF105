package com.company;
import java.util.Scanner;
import java.math.*;
import java.math.BigDecimal;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        Integer a = 0, b =0;
        while ((a < 20)||(b < 20))
        {
            System.out.print("Введите делимое больше 20");
            a = in.nextInt();
            System.out.print("Введите делитель больше 20");
            b = in.nextInt();
        }
        BigDecimal A = new BigDecimal(a);
        BigDecimal B = new BigDecimal(b);
        a = a/b;
        A = A.remainder(B);
        System.out.print("Частное от числа: " + a + "\n Остаток от деления: " + A);
    }
}
