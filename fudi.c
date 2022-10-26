#include <stdio.h>
int voda = 20000;
int coffe = 10000;
int moloko = 5000;
int chocolad = 2000;
int beznal = 0;
int money = 24700;
int Des = 20;
int pD = 20;
int sS = 20;
int dvS = 20;
int pS = 5;
int odT = 5;
int dvT = 5;
int peT = 0;
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
void scheot();
void razmen();
void vozvrat();
char vat();
int main(void) { menu(); }
void menu()
{
    if (pD >= 1 && sS >= 4) {
        printf("%d_%d_%d_%d_%d_%d_%d_%d", Des, pD, sS, dvS, pS, odT, dvT, peT);
        puts(
            "хай \n Выбери кофе на свой вкус\n У нас есть:\n 1.Экспрессо "
            "50руб.\n "
            "2.Лунго 50руб.\n 3.Доппио 100руб.\n 4.Американо 150руб.\n "
            "5.Капучино "
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
    } else {
        puts("!!!Кофейный-автомат не работает!!!");
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
    int nal = 0, h = 0, fgh = 0;
    for (; h != 1;) {
        setbuf(stdin, NULL);
        puts("Ваша сумма\n");
        scanf("%d", &nal);
        fgh = nal / 10;
        if (fgh * 10 == nal) {
            scheot(nal);
            if (nal >= vmoney) {
                if (vmoney - nal == 0) {
                    h++;
                    money += nal;
                } else {
                    printf("Ваша сдача %d\n", nal - vmoney);
                    h++;
                    razmen(nal - vmoney);
                    nal -= nal - vmoney;
                    money += nal;
                }
            } else {
                printf("Не достаточно средств, пополните ещё %d\n",
                       vmoney - nal);
            }
        } else {
            puts("Не правильная сумма");
        }
    }
}
void razmen(int zdacha)
{
    for (int j = 0; j != 1;) {
        if (zdacha == 5000) {
        } else if (zdacha >= 2000) {
            zdacha -= 2000;
            dvT -= 1;
        } else if (zdacha >= 1000) {
            zdacha -= 1000;
            odT -= 1;
        } else if (zdacha >= 500) {
            zdacha -= 500;
            pS -= 1;
        } else if (zdacha >= 200) {
            zdacha -= 200;
            dvS -= 1;
        } else if (zdacha >= 100) {
            zdacha -= 100;
            sS -= 1;
        } else if (zdacha >= 50) {
            zdacha -= 50;
            pD -= 1;
        } else if (zdacha >= 10) {
            zdacha -= 10;
            Des -= 1;
        } else if (zdacha == 0) {
            j++;
        }
    }
}
void scheot(int kupuri)
{
    for (int j = 0; j != 1;) {
        if (kupuri == 5000) {
            kupuri -= 5000;
            peT += 1;
        } else if (kupuri >= 2000) {
            kupuri -= 2000;
            dvT += 1;
        } else if (kupuri >= 1000) {
            kupuri -= 1000;
            odT += 1;
        } else if (kupuri >= 500) {
            kupuri += 500;
            pS += 1;
        } else if (kupuri >= 200) {
            kupuri -= 200;
            dvS += 1;
        } else if (kupuri >= 100) {
            kupuri -= 100;
            sS += 1;
        } else if (kupuri >= 50) {
            kupuri -= 50;
            pD += 1;
        } else if (kupuri >= 10) {
            kupuri -= 10;
            Des += 1;
        } else if (kupuri == 0) {
            j++;
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
    int aka = 0;
    int vp = 0;
    char d;
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
        puts("Режим инкасации\n1.Вывести наличные\n2.Внести "
             "наличные\n3.Выйти\n");
        setbuf(stdin, NULL);
        scanf("%d", &vp);
        switch (vp) {
        case 1:
            printf(
                "Наличные:%d\nКупюры\n| 10 |:%d---| 50 |:%d---| 100 |:%d---| "
                "200 |:%d\n| 500 "
                "|:%d---|1000|:%d---|2000|:%d---|5000|:%d\nВывести всё?\n",
                money, Des, pD, sS, dvS, pS, odT, dvT, peT);
            setbuf(stdin, NULL);
            scanf("%c", &d);
            if (d == 'y') {
                money = 0;
                Des = 0;
                pD = 0;
                sS = 0;
                dvS = 0;
                pS = 0;
                odT = 0;
                dvT = 0;
                peT = 0;
                scrt_menu();
            } else {
                scrt_menu();
            }
            break;
        case 2:
            printf("Наличные:%d\nВнести?\n", money);
            puts("| 10 |:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 10 * aka;
            Des += aka;
            puts("| 50 |:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 50 * aka;
            pD += aka;
            puts("| 100 |:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 100 * aka;
            sS += aka;
            puts("| 200 |:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 200 * aka;
            dvS += aka;
            puts("| 500 |:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 500 * aka;
            pS += aka;
            puts("|1000|:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 1000 * aka;
            odT += aka;
            puts("|2000|:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 2000 * aka;
            dvT += aka;
            puts("|5000|:\n");
            setbuf(stdin, NULL);
            scanf("%d", &aka);
            money += 5000 * aka;
            peT += aka;
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