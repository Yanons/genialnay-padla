#include <stdio.h>
int voda = 20000;
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
         "200руб.\n 6.Латте 200руб.\n 7.Какао 150руб.\n (Сделайте выбор)\n");
    menu();
}
void menu()
{
    printf("%d_%d_%d_%d", voda, coffe, beznal, money);
    int b = 0;
    setbuf(stdin, NULL);
    scanf("%d", &b);
    printf("Вы выбрали %d\n", b);
    setbuf(stdin, NULL);
    switch (b) {
    case 1:
        ecspresso(&voda, &coffe);
        break;
    case 2:
        lungo(&voda, &coffe);
        break;
    case 3:
        doppio(&voda, &coffe);
        break;
    case 4:
        americano(&voda, &coffe);
        break;
    case 5:
        copuchino(&voda, &coffe, &moloko);
        break;
    case 6:
        latte(&voda, &coffe, &moloko);
        break;
    case 7:
        cacao(&voda, &chocolad);
        break;
    case 9:
        scrt_menu(&voda, &coffe, &moloko, &chocolad, &money, &beznal);
        break;
    case 0:
        break;
    }
}

// unused parameter - pvoda, pcoffe
void ecspresso(int *pVoda, int *pCoffe)
{
    // переменную можно не использовать
    int vmoney = 50;
    if (voda >= 100 && coffe >= 25) {
        oplata(vmoney, &beznal, &money);
        voda -= 100;
        coffe -= 25;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pvoda, pcoffe, pmoloko
void copuchino(int *pVoda, int *pCoffe, int *pMoloko)
{
    // переменную можно не использовать
    int vmoney = 200;
    if (voda >= 100 && coffe >= 25 && moloko >= 50) {
        oplata(vmoney, &beznal, &money);
        voda -= 100;
        coffe -= 25;
        moloko -= 50;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pvoda, pcoffe
void doppio(int *pVoda, int *pCoffe)
{
    // переменную можно не использовать
    int vmoney = 100;
    if (voda >= 200 && coffe >= 50) {
        oplata(vmoney, &beznal, &money);
        voda -= 200;
        coffe -= 50;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pvoda, pcoffe
void americano(int *pVoda, int *pCoffe)
{
    // переменную можно не использовать
    int vmoney = 150;
    if (voda >= 250 && coffe >= 25) {
        oplata(vmoney, &beznal, &money);
        voda -= 250;
        coffe -= 25;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pvoda, pcoffe
void lungo(int *pVoda, int *pCoffe)
{
    // переменную можно не использовать
    int vmoney = 50;
    if (voda >= 100 && coffe >= 25) {
        oplata(vmoney, &beznal, &money);
        voda -= 100;
        coffe -= 25;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pvoda, pcoffe, pmoloko
void latte(int *pVoda, int *pCoffe, int *pMoloko)
{
    // переменную можно не использовать
    int vmoney = 200;
    if (voda >= 100 && coffe >= 25 && moloko >= 100) {
        oplata(vmoney, &beznal, &money);
        voda -= 100;
        coffe -= 25;
        moloko -= 100;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pvoda, pchocolad
void cacao(int *pVoda, int *pChocolad)
{
    // переменную можно не использовать
    int vmoney = 150;
    if (voda >= 200 && chocolad >= 50) {
        oplata(vmoney, &beznal, &money);
        voda -= 200;
        chocolad -= 50;
        puts("Ваш заказ выполнен\n");
        main();
    } else {
        puts("На этот вариант нет ресурсов\n");
    }
}

// unused parameter - pbezmal, pmoney
void oplata(int vmoney, int *pBezmal, int *pMoney)
{
    setbuf(stdin, NULL);
    puts("Выберите способ оплаты\n 1.Безнал\n 2.Наличные\n");
    int b = 0;
    scanf("%d", &b);
    printf("Вы выбрали %d\n", b);
    switch (b) {
    case 1:
        beznaling(vmoney, &beznal);
        break;
    case 2:
        nalichka(vmoney, &money);
        break;
    }
}

// unused parameter - pMoney
void nalichka(int vmoney, int *pMoney)
{
    // переменная zdacha не нужна
    int nal = 0, h = 0, vrem = 0, zdacha = 0;
    for (; h != 1;) {

        setbuf(stdin, NULL);
        puts("Ваша сумма\n");
        scanf("%d", &nal);
        vrem += nal;
        if (vrem >= vmoney) {
            if (vmoney - vrem == 0) {
                h++;
                money += vrem;
            } else {
                zdacha = vrem - vmoney;
                printf("Ваша сдача %d", zdacha);
                h++;
                vrem -= zdacha;
                money += vrem;
            }
        } else {
            printf("Не достаточно средств, пополните ещё %d\n", vmoney - vrem);
        }
    }
}

// unused parameter - pBeznal
void beznaling(int vmoney, int *pBeznal)
{
    puts("Оплатите картой\n");
    beznal += vmoney;
    return;
}

void scrt_menu(int *pVoda, int *pCoffe, int *pMoloko, int *pChocolad,
               int *pMoney, int *pBeznal)
{
    int vp = 0;
    puts(
        "Вы оказалиьс в панели разработчика!!!\n1.Данные по бакам\n2.Провести "
        "замену баков\n3.Режим инкасации\n4.Накатить винду\n5.Выйти из тулс\n");
    setbuf(stdin, NULL);
    scanf("%d", &vp);
    switch (vp) {
    case 1:
        printf("Вода%d\nКоффе%d\nМолоко%d\nКакао%d\nНаличные%d\n1.Выйти\n",
               voda, coffe, moloko, chocolad, money);
        setbuf(stdin, NULL);
        scanf("%d", &vp);
        switch (vp) {
        case 1:
            scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
            break;
        }
        break;
    case 2:
        puts("Замена блоков\n1.Внести данные\n2.Выйти\n");
        setbuf(stdin, NULL);
        scanf("%d", &vp);
        switch (vp) {
        case 1:
            puts("Вода\n");
            setbuf(stdin, NULL);
            scanf("%d", &voda);
            puts("Коффе\n");
            setbuf(stdin, NULL);
            scanf("%d", &coffe);
            puts("Молоко\n");
            setbuf(stdin, NULL);
            scanf("%d", &moloko);
            puts("Какао\n");
            setbuf(stdin, NULL);
            scanf("%d", &chocolad);
            puts("Наличные\n");
            setbuf(stdin, NULL);
            scanf("%d", &money);
            puts("Задача выполнена");
            scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
            break;
        case 2:
            scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
            break;
        }
        break;
    case 3:
        // переменную d объявить выше
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
            scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
            break;
        case 2:
            // переменную df объявить выше
            int df = 0;
            printf("Наличные:%d\nСколько внести?\n", money);
            setbuf(stdin, NULL);
            scanf("%d", &df);
            money += df;
            scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
            break;
        case 3:
            scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
            break;
        }
        break;
    case 4:
        puts("Чел, в кофейном автомате винда\n");
        scrt_menu(pVoda, pCoffe, pMoloko, pChocolad, pMoney, pBeznal);
        break;
    case 5:
        main();
        break;
    }
}
