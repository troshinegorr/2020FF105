package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	System.out.print("Input k = ");
	int k = in.nextInt();
	System.out.print("Input n = ");
	String count = in.next();
	int v;
	v = count.length();
	int[] a = new int[50];
	int[] b = new int[50];
	for(int i=0;i<v;i++)
    {
        a[i]=Integer.parseInt(""+count.charAt(v-1-i));
    }
	for (int i=0;i<v;i++)
    {
        b[i] = a[i];
    }
	int t=v;
	a[0]=a[0]+1;
	if(a[0]==10)
    {
        for (int j=0;j<v;j++)
        {
            a[j+1]=a[j+1]+a[j]/10;
            a[j]=a[j]%10;
        }
    }
	for(int i=49;i>=0;i--)
    {
        if(a[i]!=0)
        {
            v=i+1;
            break;
        }
    }
	for(int i=0;i<v;i++)
    {
        b[i]=b[i]*k;
    }
	for (int i=0;i<49;i++)
    {
        b[i+1]=b[i+1]+b[i]/10;
        b[i]=b[i]%10;
    }
	for(int i=49;i>=0;i--)
    {
        if(b[i]!=0)
        {
            t=i+1;
            break;
        }
    }
	int d=v+t;
    int[] c = new int[d];
    for (int i=0;i<v;i++)
    {
        for(int j=0;j<t;j++)
        {
            c[i+j]=c[i+j]+a[i]*b[j];
        }
    }
    for (int i=0;i<d;i++)
    {
        if(i>0)
        {
            c[i]=c[i]+c[i-1]/10;
            c[i-1]=c[i-1]%10;
        }
    }
    for(int i=d-1;i>=0;i--)
    {
        if(c[i]==0)
            d--;
        else break;
    }
    for (int i=d-1;i>=0;i--)
    {
        if(i>0)
        {
            c[i-1]=c[i-1]+c[i]%2*10;
        }
        c[i]=c[i]/2;
    }
    for(int i=d-1;i>=0;i--)
    {
        if(c[i]!=0)
        {
           d=i+1;
           break;
        }
    }
    System.out.print("Sum of: ");
    for(int i=d-1;i>=0;i--)
    {
            System.out.print(c[i]);
    }
    in.close();
    }
}
