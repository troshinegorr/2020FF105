package com.company;

public class Main {

    public static void main(String[] args)
    {
        String str = "apple apple apple";
        System.out.println("[" + str + "]");
        System.out.println("[" + str.replace(" ", ", ") + "]");
    }
}