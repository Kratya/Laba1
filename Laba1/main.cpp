#include <cstdlib>
#include <iostream>
#include <ctime> 
using namespace std;

int main()
{
   setlocale(LC_ALL, "rus");

   int randomDigits[10]{};
   int randomDigits_2[10]{};
   int randomDigits_3[10]{};
   int randomDigits_4[10]{};
   float randomDigits_5[10]{}; // ��� ����� c ��������� ������

   srand(time(NULL));
   for (int i = 0; i < 10; i++)
   {
      randomDigits_5[i] = 0.01 * (rand() % 101);// 0.01 ... 1 
   }


   cout << endl << "������ c ������� o� 0.01 �o 1: ";
   for (int i = 0; i < 10; i++)
   {
      cout << randomDigits_5[i] << "  ";
   }
   cout << endl;

   return 0;
}