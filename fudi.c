#include <stdio.h>
int voda = 20000;
int coffe = 10000;
int moloko = 5000;
int chocolad = 2000;
int beznal = 0;
int money = 0;
void ecspresso();
void copuchino();
void doppio();
void americano();
void lungo();
void latte();
void cacao();
void scrt_menu();
void menu();
void oplata();
void beznaling();
void nalichka();
int main(void) { menu(); }
void menu()
{
    puts("хай \n Выбери кофе на свой вкус\n У нас есть:\n 1.Экспрессо 50руб.\n "
         "2.Лунго 50руб.\n 3.Доппио 100руб.\n 4.Американо 150руб.\n 5.Капучино "
         "200руб.\n 6.Латте 200руб.\n 7.Какао 150руб.\n (Сделайте выбор)\n");
    // printf("%d_%d_%d_%d", voda, coffe, beznal, money);
    int b = 0;
    setbuf(stdin, NULL);
    scanf("%d", &b);
    printf("Вы выбрали %d\n", b);
    setbuf(stdin, NULL);
    switch (b) {
    case 1:
        ecspresso();
        break;
    case 2:
        lungo();
        break;
    case 3:
        doppio();
        break;
    case 4:
        americano();
        break;
    case 5:
        copuchino();
        break;
    case 6:
        latte();
        break;
    case 7:
        cacao();
        break;
    case 9:
        scrt_menu();
        break;
    case 0:
        break;
    }
}

void ecspresso()
{
    if (voda >= 100 && coffe >= 25) {
        oplata(50);
        voda -= 100;
        coffe -= 25;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void copuchino()
{
    if (voda >= 100 && coffe >= 25 && moloko >= 50) {
        oplata(200);
        voda -= 100;
        coffe -= 25;
        moloko -= 50;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void doppio()
{
    if (voda >= 200 && coffe >= 50) {
        oplata(100);
        voda -= 200;
        coffe -= 50;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void americano()
{
    if (voda >= 250 && coffe >= 25) {
        oplata(150);
        voda -= 250;
        coffe -= 25;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void lungo()
{
    if (voda >= 100 && coffe >= 25) {
        oplata(50);
        voda -= 100;
        coffe -= 25;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void latte()
{
    if (voda >= 100 && coffe >= 25 && moloko >= 100) {
        oplata(200);
        voda -= 100;
        coffe -= 25;
        moloko -= 100;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void cacao()
{
    if (voda >= 200 && chocolad >= 50) {
        oplata(150);
        voda -= 200;
        chocolad -= 50;
        puts("Ваш заказ выполнен\n");
        menu();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}
void oplata(int *vmoney)
{
    setbuf(stdin, NULL);
    puts("Выберите способ оплаты\n 1.Безнал\n 2.Наличные\n");
    int b = 0;
    scanf("%d", &b);
    printf("Вы выбрали %d\n", b);
    switch (b) {
    case 1:
        beznaling(vmoney);
        break;
    case 2:
        nalichka(vmoney);
        break;
    }
}
void nalichka(int vmoney)
{
    int nal = 0, h = 0;
    for (; h != 1;) {

        setbuf(stdin, NULL);
        puts("Ваша сумма\n");
        scanf("%d", &nal);
        if (nal >= vmoney) {
            if (vmoney - nal == 0) {
                h++;
                money += nal;
            } else {
                // printf("%d%d%d", zdacha, nal, *vmoney);
                printf("Ваша сдача %d\n", nal - vmoney);
                h++;
                nal -= nal - vmoney;
                money += nal;
            }
        } else {
            printf("Не достаточно средств, пополните ещё %d\n", vmoney - nal);
        }
    }
}
void beznaling(int vmoney)
{

    puts("Оплатите картой\n");
    beznal += vmoney;
    return;
}
void scrt_menu()
{
    int vp = 0;
    puts(
        "Вы оказалиьс в панели разработчика!!!\n1.Данные по бакам\n2.Провести "
        "замену баков\n3.Режим инкасации\n4.Накатить винду\n5.Выйти из тулс\n");
    setbuf(stdin, NULL);
    scanf("%d", &vp);
    switch (vp) {
    case 1:
        printf("Вода:%d\nКоффе:%d\nМолоко:%d\nКакао:%d\nНаличные:%d\nБезнал:%"
               "d\n1.Выйти\n",
               voda, coffe, moloko, chocolad, money, beznal);
        setbuf(stdin, NULL);
        scanf("%d", &vp);
        switch (vp) {
        case 1:
            scrt_menu();
            break;
        }
        break;
    case 2:
        puts("Замена блоков\n1.Внести данные\n2.Выйти\n");
        setbuf(stdin, NULL);
        scanf("%d", &vp);
        switch (vp) {
        case 1:
            puts("Вода:\n");
            setbuf(stdin, NULL);
            scanf("%d", &voda);
            puts("Коффе:\n");
            setbuf(stdin, NULL);
            scanf("%d", &coffe);
            puts("Молоко:\n");
            setbuf(stdin, NULL);
            scanf("%d", &moloko);
            puts("Какао:\n");
            setbuf(stdin, NULL);
            scanf("%d", &chocolad);
            puts("Наличные:\n");
            setbuf(stdin, NULL);
            scanf("%d", &money);
            puts("Задача выполнена\n");
            scrt_menu();
            break;
        case 2:
            scrt_menu();
            break;
        }
        break;
    case 3:
        int d = 0;
        puts("Режим инкасации\n1.Вывести наличные\n2.Внести "
             "наличные\n3.Выйти\n");
        setbuf(stdin, NULL);
        scanf("%d", &vp);
        switch (vp) {
        case 1:
            printf("Наличные:%d\nСколько вывести?\n", money);
            setbuf(stdin, NULL);
            scanf("%d", &d);
            if (d > money) {
                money = 0;
            } else {
                money -= d;
            }
            scrt_menu();
            break;
        case 2:
            int df = 0;
            printf("Наличные:%d\nСколько внести?\n", money);
            setbuf(stdin, NULL);
            scanf("%d", &df);
            money += df;
            scrt_menu();
            break;
        case 3:
            scrt_menu();
            break;
        }
        break;
    case 4:
        puts("Чел, в кофейном автомате винда\n");
        scrt_menu();
        break;
    case 5:
        menu();
        break;
    }
}