import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int res = 0;
        Scanner in = new Scanner(System.in);
        System.out.print("Введите строку: ");
        String str = in.nextLine();
        int a = str.length();
        char[] s1 = str.toCharArray();
        for (int i = 0; s1[i] != ':'; i++) {
                res++;
        }
            System.out.println("Число символов перед двоеточием: " + res);
        in.close();
    }
}