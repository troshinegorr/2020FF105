package com.company;
import java.util.Scanner; // Импортируем сканер
public class Main {

    public static void main(String[] args) {
        String res = ""; // Создаем переменные
        int k = 0;
        System.out.println("Введите строку символов");
        Scanner scan = new Scanner(System.in); // Считываем с клавиатуры и заносим в строку
        String str = scan.nextLine();
        for (int i = 0; i < str.length(); i++) {
            if (res.indexOf(str.charAt(i)) == -1) { // Проверяем есть ли в строке res символ из строки str с индексом i
                res = res + str.charAt(i); // Если нет то добавляем его в строку res
                k = k + 1; // К нашему счетчику символов добавляем 1
            }
        }
        System.out.println("Всего индивидуальных символов: " + k); // Делаем вывод
        System.out.print("Символы которые встретились: ");
        for (int i = 0; i < res.length(); i++) {
            {
                System.out.print(res.charAt(i) + " ");
            }
        }
    }
}
