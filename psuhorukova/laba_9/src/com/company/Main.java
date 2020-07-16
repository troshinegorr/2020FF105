package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
     Scanner in = new Scanner(System.in);
     System.out.print("Input word: ");
     String slovo = in.nextLine();
     int a=slovo.length();
     int b=0;
     char[] s1=slovo.toCharArray();
     for (int i=0;i<a/2;i++)
     {
         if (s1[i] != s1[a - 1 - i])
         {
             b=b+1;
         }
     }
     if(b==0)
     {
         System.out.println("Word is palindrome");
     }
     else{
         System.out.println("Word isn't palindrome");
     }
     in.close();
    }
}
