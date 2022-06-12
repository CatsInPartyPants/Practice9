#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    // линейный поиск

    /*
    int arr[5]{ 1,2,3,4,5};
    int a = 4;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == a) {
            std::cout << "Число есть в массиве под индексом " << i;
            break;
        }
    }*/

    //сортировка выбором

    /*
    const int Size = 5;
    int i, j, k;
    int x;
    int arr[Size]{ 1,3,3,4,5 };
    for (i = 0; i < 5; i++) {
        k = i;
        x = arr[i];
        //цикл выбора наименьшего элемента
        for (j = i + 1; j < Size; j++) {
            if (arr[j] < x) {
                k = j; // k - индекс наименьшего элемента
                x = arr[j];
            }
        }
        if (k != i) {
            arr[k] = arr[i];
            arr[i] = x;
        }
    }*/

    //сортировка пузырьком

    /*
    const int Size = 5;
    int arr[Size]{ 1,3,3,4,5 };

    int i, j, x;
    for (i = 0; i < Size; i++) { // остается в любом случае
        // первый вариант
        for (j = Size - 1; j > i; j--) {
            if (arr[j - 1] > arr[j]) {
                x = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = x;
            }
        }
        //второй вариант, начинается с другого конца
        for (j = i; j < Size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                x = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = x;
            }
        }
    }
    */

    // сортировка вставками

    /*
    const int Size = 5;
    int arr[Size]{ 1,2,3,4,5 };

    int i, j, x;

    for (i = 0; i < Size; i++) {
        x = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > x; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = x;
    }
    */

    // двумерные массивы

    /*
    int arr[2][3] = { {1,2,3},
                      {4,5,6}
    }; // первая цифра строки, вторая столбцы
    //cout << arr[1][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */


    // задача 1

    //есть двумерный массив, ввести данные, посчитать сумму столбцов

    /*
    const size_t col = 3, row = 4;

    int arr[col][row] = { {5,8,7,1},
                          {6,3,4,7},
                          {1,8,9,2} };

    //занесение информации в двумерный массив


    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++)
            cin >> arr[i][j];
    }


    //сумма столбцов

    int summ = 0;
    for (int j = 0; j < row; j++) {
        for (int i = 0; i < col; i++) {
            summ += arr[i][j];
        }
        cout << summ << endl;
        summ = 0;
    }
        */

        //задача 2 

    /*
        const size_t col = 3, row = 4;

        int arr[col][row] = { {1,2,3,4},
                              {5,6,7,8},
                              {9,10,11,12}
        };

        //for (int i = 0; i < col; i++) {
        //    for (int j = 0; j < row; j++) {
        //        cin >> arr[i][j];
        //    }
        //}

        int summ = 0;

        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                summ += arr[i][j];
            }
            cout << summ << endl;
            summ = 0;
        }
        */

        //задача 3 из 2 массивов сделать 3й без повторений

    /*
    const size_t s = 5;
    size_t size_final = 0;
    int arr[s] = { 7,8,9,1,7 };
    int arr2[s] = { 2,6,7,2,1 };

    //подсчет количества элементов для третьего массива
    int arr_all[s + s]; // создание общего массива
    for (int i = 0; i < s; i++) {
        arr_all[i] = arr[i];
        arr_all[i + s] = arr2[i];
    }

    int final_size = 1;
    int count = 0;
    //цикл для подсчета размера
    for (int i = 1; i < 2 * s; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr_all[i] == arr_all[j]) {
                count++;
            }
        }
        if (count == 0) {
            final_size++;
        }
        count = 0;
    }
    cout << final_size;

    //создаем новый массив размера final size и в него суем неповторяющиеся значения
    // занесение числел без повторений в третий массив
    int* arr_final = new int[final_size];
    int temp = 1;
    arr_final[0] = arr_final[0];
    for (int i = 1; i < 2 * s; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr_all[i] == arr_all[j]) {
                count++;
            }
        }
        if (count == 0) {
            arr_final[temp] = arr_all[i];
            temp++;
        }
        count = 0;
    }

    for (int i = 0; i < final_size; i++) {
        cout << arr_final[i] << " ";
    }
    */
     
    //задача 4

    /*

    //в двумерном массиве посчитать среднее арифметическое каждой строки
    
    const int col = 3;
    const int row = 5;

    double arr_double[col][row];

    // записываем элементы в двумерный массив
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << "Введите число для " << i << " строки и " << j << " столбца->";
            cin >> arr_double[i][j];
        }
    }

    //вычисляем среднее арифмитическое каждой из строк
    double sum = 0;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            sum += arr_double[i][j];
        }
        cout << "Среднее арифмитическое строки " << i << " " << sum / row << endl;
        sum = 0;
    }
    */

    //задача 5
    //написать программу, которая выводит строку сумма элементов которой - максимальна
    /*
    int arr[3][5] = {
        {8,7,1,3,4}, // 23
        {9,5,2,8,7}, // 31
        {6,4,9,2,3} // 24
    };

    int sum = 0;
    int max_index=0;
    int sum_max = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
        if (sum_max < sum) {
            sum_max = sum;
            max_index = i;
        }
        sum = 0;
    }

    cout << "Номер строки с максимальной суммой " << max_index << endl;
    */
 

    //магический квадрат не работает - проверить столбцы
/*
    int arr[3][3] = {
        {2,9,4},
        {7,5,3},
        {6,1,8} 
    };
       
    int summa = 0;
    int temp_sum = 0;
   
    //сумма главной диагонали
    for (int i = 0; i < 3; i++) {
        summa += arr[i][i];
    }

    //цикл для подсчета суммы в строках
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp_sum += arr[i][j];
        }
        if (temp_sum != summa) {
            cout << "не магический квадрат!" << endl;
            break;
        }
        else temp_sum = 0;
    }
    //цикл для подсчета суммы в столбцах
     for(int j = 0; j<3; j++){
        for (int i = 0; i < 3; i++) {
            temp_sum += arr[i][j];
        }
        if (temp_sum != summa) {
            cout << "не магический квадрат!!" << endl;
            break;
        }
        else temp_sum = 0;
        
        // в диагоналях
        for (int i = 0, j = 2; i < 3; i++, j--) {
            temp_sum += arr[i][j];
        }if (temp_sum != summa) {
            cout << "не магический квадрат";
        }
    }*/

    //если есть 0 то сдвинуть их вправо и заменить на -1 
    /*

    int arr[10] = { 8,-1,7,0,-5,9,0,3,-2, 5 };
    int temp = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 0) {
            for (int j = i; j < 9; j++) {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    */

    // написать программу копирующую элементы 2-х массивов размером 5 элементов каждый в оид массив 10 элементов следующим образом:
    // сначала копируются последовательно элементы большие 0, затем 0, затем все элементы меньшие 0
    /*
    const int size = 5;
    int arr1[size] = { 5,7,-1,-5,0 };
    int arr2[size] = { 9,0,-4,-5,0 };
    int arr3[size*2];

    for (int i = 0; i < size * 2; ) {
        for (int j = 0; j < size; j++) {
            if (arr1[j] > 0)
            {
                arr3[i] = arr1[j];
                i++;
            }
            if (arr2[j] > 0)
            {
                arr3[i] = arr2[j];
                i++;
            }
        }
        for (int j = 0; j < size; j++) {
            if (arr1[j] == 0)
            {
                arr3[i] = arr1[j];
                i++;
            }
            if (arr2[j] == 0)
            {
                arr3[i] = arr2[j];
                i++;
            }
        }

        for (int j = 0; j < size; j++) {
            if (arr1[j] < 0)
            {
                arr3[i] = arr1[j];
                i++;
            }
            if (arr2[j] < 0)
            {
                arr3[i] = arr2[j];
                i++;
            }
        }
    }

    for (int i = 0; i < size * 2; i++) {
        cout << arr3[i] << " ";
    }
    */

    // в двумерном массве целых чисел посчитать:
// сумму всех элементов
//среднее арифметическое всех элементов
// минимальный элемент
//максимальный элемент
/*
int arr[3][5] = {
    {6,8,1,7,2},
    {0,0,4,5,7},
    {9,6,3,4,2}
};
int min =arr[0][0], max = arr[0][0];
int all_summ = 0;
double sr_arifm = 0;

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        all_summ += arr[i][j];
        if (min > arr[i][j]) {
            min = arr[i][j];
        }
        if (max < arr[i][j]) {
            max = arr[i][j];
        }
        
    }
}
sr_arifm = (double) all_summ / (3 * 5);

cout << "Сумма элементов массива -> " << all_summ << endl;
cout << "Среднее арифметическое элементов массива -> " << round(sr_arifm*100)/100 << endl;
cout << "Минимальный элемент -> " << min << endl;
cout << "Максимальный элемент -> " << max << endl;
*/


// задание с выводом таблички

int arr[3][4] = {
    {3,5,6,7},
    {12,1,1,1},
    {0,7,12,1}
};

int sum = 0;
int sum_all = 0;

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        sum += arr[i][j];
        sum_all += arr[i][j];
        cout << setw(3) << arr[i][j];
    }
    cout << " | " << setw(3) << sum << endl;
    sum = 0;
}
cout << string(18, '-') << endl;
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
        sum += arr[j][i];
        
    }
    cout << setw(3) << sum;
    sum = 0;
}
cout << " | " << setw(3) << sum_all;


}

