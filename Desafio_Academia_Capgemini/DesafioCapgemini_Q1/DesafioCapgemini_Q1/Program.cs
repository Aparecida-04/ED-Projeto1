using System;

namespace testeQuestao1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.Write("*");
            Console.Write("\n");

            Console.Write("* *");
            Console.Write("\n");

            Console.Write("* * *");
            Console.Write("\n");

            Console.Write("* * * *");

            Console.Write("\n");
            Console.Write("* * * * * ");

            Console.Write("\n");
            Console.Write("* * * * * * *");


            Console.WriteLine("\n========================================================================\n");
            Console.WriteLine("Digite o valor da escada");
            int num = Convert.ToInt32(Console.ReadLine());
            int linha = 0;



            while (linha <= num)
            {
                Console.Write("\n*");
                for (int coluna = 0; coluna <= num; coluna++)
                {
                    Console.Write("*");
                }
                linha++;

            }

            Console.ReadLine();
        }
    }
}