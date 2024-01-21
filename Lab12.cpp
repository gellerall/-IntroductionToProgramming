// 1. Дан номер дня – целое число от 1 до 31 и месяца — 
//    целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
//    Вывести дату в виде текста (например, «пятое января»).

#include <iostream>
#include <map>

using namespace std;

// Словарь дней
map <int, string> days_map = {
	{1, "Первое"},
	{2, "Второе"},
	{3, "Третье"},
	{4, "Четвертое"},
	{5, "Пятое"},
	{6, "Шестое"},
	{7, "Седьмое"},
	{8, "Восьмое"},
	{9, "Девятое"},
	{10, "Десятое"},
	{11, "Одиннадцатое"},
	{12, "Двенадцатое"},
	{13, "Тринадцатое"},
	{14, "Четырнадцатое"},
	{15, "Пятнадцатое"},
	{16, "Шестнадцатое"},
	{17, "Семнадцатое"},
	{18, "Восемнадцатое"},
	{19, "Девятнадцатое"},
	{20, "Двадцатое"},
	{21, "Двадцать первое"},
	{22, "Двадцать второе"},
	{23, "Двадцать третье"},
	{24, "Двадцать четвертое"},
	{25, "Двадцать пятое"},
	{26, "Двадцать шестое"},
	{27, "Двадцать седьмое"},
	{28, "Двадцать восьмое"},
	{29, "Двадцать девятое"},
	{30, "Тридцатое"},
	{31, "Тридцать первое"} 
};

// Словарь месяцев
map <int, string> months_map = {	// Задаем словарь месяцев
	{1, "января"},
	{2, "февраля"}, 
	{3, "марта"}, 
	{4, "апреля"}, 
	{5, "мая"}, 
	{6, "июня"}, 
	{7, "июля"}, 
	{8, "августа"}, 
	{9, "сентября"}, 
	{10, "октября"}, 
	{11, "ноября"}, 
	{12, "декабря"} 
};

int main() {
    setlocale(LC_ALL, "RU"); // RU локализация консоли

	int day, month;

    // Принимаем параметры
	cin >> day >> month;  

    // Выводим результат
	cout << days_map[day] << " " << months_map[month] << endl; 

	return 0;
} 

// 2. Робот может перемещаться в четырех направлениях 
//    («С» — север, «З» — запад, «Ю» — юг, «В» — восток) 
//    и принимать три цифровые команды: 
//    0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. 
//    Дан символ C — исходное направление робота и целое число N — посланная ему команда. 
//    Вывести направление робота после выполнения полученной команды

# include <iostream>
# include <windows.h>
# include <cmath>

int main()

{
    //Устанавливаем кодовые страницы ввода и вывода, используемые консолью, связанные с вызывающим процессом
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    char S; 
    int N; 

    // Принимаем данные
    cout << "Введите символ направления («С» — север, «З» — запад, «Ю» — юг, «В» — восток): ";
    cin >> S;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> N;
    cout << "Направление - ";
    switch (N) {
    case 1: switch (S) {
    case 'С': cout << "З"; break;
    case 'Ю': cout << "В"; break;
    case 'З': cout << "Ю"; break;
    case 'В': cout << "С"; break;
    } break;
    case -1: switch (S) {
    case 'С': cout << "В"; break;
    case 'Ю': cout << "З"; break;
    case 'З': cout << "С"; break;
    case 'В': cout << "Ю"; break;
    } break;
    case 0: switch (S) {
    case 'С': cout << "С"; break;
    case 'Ю': cout << "Ю"; break;
    case 'З': cout << "З"; break;
    case 'В': cout << "В"; break;
    } break;
    }

    cout << endl;

    system("pause");

    return 0;
}

// 3. Дано целое число в диапазоне 10–40, 
//    определяющее количество учебных заданий по некоторой теме. 
//    Вывести строку-описание указанного количества заданий, 
//    обеспечив правильное согласование числа со словами «учебное задание», 
//    например: 18 — «восемнадцать учебных заданий».

# include <iostream>
#include <windows.h>

int main()
{
    // Устанавливаем кодовые страницы ввода и вывода, используемые консолью, связанные с вызывающим процессом
    SetConsoleCP(1251);      
    SetConsoleOutputCP(1251);

    int n;  
    printf_s("кол-во:");
    scanf_s("%i", &n);

    // Отдельно учитываем числа с 10 по 19
    if (n / 10 == 1)    
        switch (n) {
        case 10:
            printf("десять учебных заданий. \n");
            break;
        case 11:
            printf("одинадцать учебных заданий.\n");
            break;
        case 12:
            printf("двенадцать учебных заданий.\n");
            break;
        case 13:
            printf("тринадцать учебных заданий.\n");
            break;
        case 14:
            printf("четырнадцать учебных заданий.\n");
            break;
        case 15:
            printf("пятнадцать учебных заданий.\n");
            break;
        case 16:
            printf("шестнадцать учебных заданий.\n");
            break;
        case 17:
            printf("семнадцать учебных заданий.\n");
            break;
        case 18:
            printf("восемнадцать учебных заданий.\n");
            break;
        case 19:
            printf("девятнадцать учебных заданий.\n");
            break;
        }
    else {
        // Вычисляем десятки
        switch (n / 10) {       
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        }

        // Вычисляем единицы
        switch (n % 10) {       
        case 1:
            printf("одно ");
            break;
        case 2:
            printf("два ");
            break;
        case 3:
            printf("три ");
            break;
        case 4:
            printf("четыре ");
            break;
        case 5:
            printf("пять ");
            break;
        case 6:
            printf("шесть ");
            break;
        case 7:
            printf("семь ");
            break;
        case 8:
            printf("восемь ");
            break;
        case 9:
            printf("девять ");
            break;
        }

        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("учебных заданий.\n");
            break;
        case 1:
            printf("учебное задание.\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("учебных задания.\n");
            break;
        }
    }

    return 0;
}

// 4. Дано целое число в диапазоне 100–999. 
//    Вывести строку-описание данного числа, 
//    например: 256 — «двести пятьдесят шесть», 
//    814 — «восемьсот четырнадцать».

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    // Устанавливаем кодовые страницы ввода и вывода, используемые консолью, связанные с вызывающим процессом
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int K;

    cout << "Введите целое число в диапазоне 100–999:  ";
    cin >> K;
    cout << K << " - ";   

    // Определяем сотки
    switch (K / 100) {      
    case 1: cout << "Сто "; break;
    case 2: cout << "Двести "; break;
    case 3: cout << "Триста "; break;
    case 4: cout << "Четыреста "; break;
    case 5: cout << "Пятьсот "; break;
    case 6: cout << "Шестьсот "; break;
    case 7: cout << "Семьсот "; break;
    case 8: cout << "Восемьсот "; break;
    case 9: cout << "Девятьсот "; break;
    }
    // Определяем десятки
    switch ((K % 100) / 10) {   
    case 0: break;
    case 2: cout << "двадцать "; break;
    case 3: cout << "тридцать "; break;
    case 4: cout << "сорок "; break;
    case 5: cout << "пятьдесят "; break;
    case 6: cout << "шестьдесят "; break;
    case 7: cout << "семьдесят "; break;
    case 8: cout << "восемьдесят "; break;
    case 9: cout << "девяносто "; break;
    // Отдельно учитываем 11-19
    case 1: switch (K % 100) {         
    case 11: cout << "одиннадцать "; break;
    case 12: cout << "двенадцать "; break;
    case 13: cout << "тринадцать "; break;
    case 14: cout << "четырнадцать "; break;
    case 15: cout << "пятнадцать "; break;
    case 16: cout << "шестнадцать "; break;
    case 17: cout << "семнадцать "; break;
    case 18: cout << "восемнадцать "; break;
    case 19: cout << "девятнадцать "; break;
    case 10: cout << "десять "; break;
    }
    }
    // Определяем единицы
    if ((K % 100 / 10) != 1) {  
        switch (K % 10) {
        case 0: break;
        case 1: cout << "один "; break;
        case 2: cout << "два "; break;
        case 3: cout << "три "; break;
        case 4: cout << "четыре "; break;
        case 5: cout << "пять "; break;
        case 6: cout << "шесть "; break;
        case 7: cout << "семь "; break;
        case 8: cout << "восемь "; break;
        case 9: cout << "девять "; break;
        }
    }
    cout << endl;

    system("pause");

    return 0;
}
 
// 5. В восточном календаре принят 60-летний цикл, 
// состоящий из 12- летних подциклов, обозначаемых названиями цвета: 
// зеленый, красный, желтый, белый и черный. 
// В каждом подцикле годы носят названия животных: 
// крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. 
// По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	// Устанавливаем кодовые страницы ввода и вывода, используемые консолью, связанные с вызывающим процессом
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cin >> a;
	a -= 1984;

	cout << "Введите целое число больше 1984:  ";
	cin >> a;
	cout << a << " - год ";

	switch (a % 12) {
	case 0:cout << "обезъяна "; break;
	case 1:cout << "петуха "; break;
	case 2:cout << "пса "; break;
	case 3:cout << "свина "; break;
	case 4:cout << "крысы "; break;
	case 5:cout << "быка "; break;
	case 6:cout << "тигра "; break;
	case 7:cout << "зайца "; break;
	case 8:cout << "дракона "; break;
	case 9:cout << "змея "; break;
	case 10:cout << "коня "; break;
	case 11:cout << "козла "; break;
	}
	switch (a % 5) {
	case 0:cout << "красного " << endl; break;
	case 1:cout << "желтого " << endl; break;
	case 2:cout << "белого " << endl; break;
	case 3:cout << "черного " << endl; break;
	case 4:cout << "зеленого " << endl; break;
	}

	system("pause");

	return 0;
}