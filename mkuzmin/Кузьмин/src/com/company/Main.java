package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Исходная строка: ");
        String str = in.nextLine();
        String ss = str.replace(':',';');
        char a, b;
        int c = 0;
        for (int i = 0; i < str.length(); i++)
        {
            a = str.charAt(i);
            b = ss.charAt(i);
            if (a!=b)
            {
                c++;
            }
        }
        System.out.print("Преобразованная строка: " + ss + "\n Количество замен: " + c);
    }
}
