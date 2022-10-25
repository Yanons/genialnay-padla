#include <stdio.h>
int *voda = 20000;
int coffe = 10000;
int moloko = 5000;
int chocolad = 2000;
int beznal = 0;
int money = 0;
int vmoney = 0;
void ecspresso(int *voda, int *coffe);
void copuchino(int *voda, int *coffe, int *moloko);
void doppio(int *voda, int *coffe);
void americano(int *voda, int *coffe);
void lungo(int *voda, int *coffe);
void latte(int *voda, int *coffe, int *moloko);
void cacao(int *voda, int *chocolad);
void scrt_menu(int *voda, int *coffe, int *moloko, int *chocolad, int *money,
               int *beznal);
void menu();
void oplata(int vmoney, int *bezmal, int *money);
void beznaling(int vmoney, int *beznal);
void nalichka(int vmoney, int *money);
int main(void)
{
    puts("хай \n Выбери кофе на свой вкус\n У нас есть:\n 1.Экспрессо 50руб.\n "
         "2.Лунго 50руб.\n 3.Доппио 100руб.\n 4.Американо 150руб.\n 5.Капучино "
         "200руб.\n 6.Латте 200руб.\n 7.Какао 150руб.\n (Сделайте выбор)");
    menu();
}
void menu()
{
    printf("%d_%d_%d_%d", voda, money, beznal, vmoney);
    int b = 0;
    setbuf(stdin, NULL);
    scanf("%d", &b);
    printf("Вы выбрали %d", b);
    setbuf(stdin, NULL);
    switch (b) {
    case 1:
        ecspresso(voda, coffe);
        break;
    case 2:
        lungo(voda, coffe);
        break;
    case 3:
        doppio(voda, coffe);
        break;
    case 4:
        americano(voda, coffe);
        break;
    case 5:
        copuchino(voda, coffe, moloko);
        break;
    case 6:
        latte(voda, coffe, moloko);
        break;
    case 7:
        cacao(voda, chocolad);
        break;
    case 9:
        scrt_menu(voda, coffe, moloko, chocolad, money, beznal);
        break;
    case 0:
        break;
    }
}

void ecspresso(int *voda, int *coffe)
{
    int vmoney = 50;
    if (voda >= 100 && coffe >= 25) {
        oplata(vmoney, beznal, money);
        voda -= 100;
        coffe -= 25;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void copuchino(int *voda, int *coffe, int *moloko)
{
    int vmoney = 200;
    if (voda >= 100 && coffe >= 25 && moloko >= 50) {
        oplata(vmoney, beznal, money);
        voda -= 100;
        coffe -= 25;
        moloko -= 50;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void doppio(int *voda, int *coffe)
{
    int vmoney = 100;
    if (voda >= 200 && coffe >= 50) {
        oplata(vmoney, beznal, money);
        voda -= 200;
        coffe -= 50;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void americano(int *voda, int *coffe)
{
    int vmoney = 150;
    if (voda >= 250 && coffe >= 25) {
        oplata(vmoney, beznal, money);
        voda -= 250;
        coffe -= 25;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void lungo(int *voda, int *coffe)
{
    int vmoney = 50;
    if (voda >= 100 && coffe >= 25) {
        oplata(vmoney, beznal, money);
        voda -= 100;
        coffe -= 25;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void latte(int *voda, int *coffe, int *moloko)
{
    int vmoney = 200;
    if (voda >= 100 && coffe >= 25 && moloko >= 100) {
        oplata(vmoney, beznal, money);
        voda -= 100;
        coffe -= 25;
        moloko -= 100;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void cacao(int *voda, int *chocolad)
{
    int vmoney = 150;
    if (voda >= 200 && chocolad >= 50) {
        oplata(vmoney, beznal, money);
        voda -= 200;
        chocolad -= 50;
        puts("Ваш заказ выполнен");
        main();
    } else {
        puts("На этот вариант нет ресурсов");
    }
}
void oplata(int vmoney, int *bezmal, int *money)
{
    setbuf(stdin, NULL);
    puts("Выберите способ оплаты\n 1.Безнал\n 2.Наличные");
    int b = 0;
    scanf("%d", &b);
    printf("Вы выбрали %d", b);
    switch (b) {
    case 1:
        beznaling(vmoney, beznal);
        break;
    case 2:
        nalichka(vmoney, money);
        break;
    }
}
void nalichka(int vmoney, int *money)
{
    int nal = 0, h = 0, vrem = 0;
    for (; h != 1;) {

        setbuf(stdin, NULL);
        puts("Ваша сумма");
        scanf("%d", &nal);
        vrem += nal;
        if (vrem >= vmoney) {
            if (vmoney - vrem == 0) {
                h++;
            } else {
                printf("Ваша сдача %d", vrem - vmoney);
                h++;
            }
        } else {
            printf("Не достаточно средств, пополните ещё %d", vmoney - vrem);
        }
    }
}
void beznaling(int vmoney, int *beznal)
{
    puts("Оплатите картой");
    beznal += vmoney;
    return;
}
void scrt_menu(int *voda, int *coffe, int *moloko, int *chocolad, int *money,
               int *beznal)
{
    printf("vau yi v shoke");
}