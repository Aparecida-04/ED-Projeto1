using System;

namespace TesteQuestao_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Insira o seu nome por favor: ");
            string nome = Console.ReadLine();
            Console.WriteLine("Escolha uma senha");
            Console.WriteLine("Para escolher uma senha forte:\nCom 6 caracteres\n Com no mínimo 1 dígito" +
                "\nno mínimo 1 letra minúscula\nno mínimo uma letra maiuscula\nno mínimo 1 caracte especial (!@#$%^~*&+-)");


            string senha = Console.ReadLine();
            if (senha.Length < 6)
            {
                Console.WriteLine("Senha inváliada, digite pelo menos 6 caracter");
                while (senha.Length < 6)
                {
                    senha = Console.ReadLine();
                }
            }
            else if (!((senha.Contains("!")) || (senha.Contains("@")) || (senha.Contains("&")) || (senha.Contains("=")) || (senha.Contains("*"))
                || (senha.Contains("$")) || (senha.Contains("#")) || (senha.Contains("%")) || (senha.Contains("+"))))
            {
                Console.WriteLine("Senha inválida");
            }
            else if (!((senha.Contains("0")) || (senha.Contains("1")) || (senha.Contains("2")) || (senha.Contains("3")) ||
                (senha.Contains("4")) || (senha.Contains("5")) || (senha.Contains("6")) || (senha.Contains("7")) ||
                (senha.Contains("8")) || (senha.Contains("9"))))
            {
                Console.WriteLine("Senha inválida");
            }
            else if (!((senha.Contains("a")) || (senha.Contains("b")) || (senha.Contains("c")) || (senha.Contains("d")) ||
                 (senha.Contains("e")) || (senha.Contains("f")) || (senha.Contains("g")) || (senha.Contains("h")) ||
                 (senha.Contains("i")) || (senha.Contains("j")) || ((senha.Contains("l")) || (senha.Contains("k")) ||
                 (senha.Contains("m")) || (senha.Contains("n")) || (senha.Contains("0")) || (senha.Contains("p")) ||
                 (senha.Contains("q")) || (senha.Contains("r")) || (senha.Contains("s")) || (senha.Contains("t")) ||
                 ((senha.Contains("u")) || (senha.Contains("v")) || (senha.Contains("x")) || (senha.Contains("w")) ||
                (senha.Contains("y")) || (senha.Contains("z"))))))
            {
                Console.WriteLine("Senha inválida");
            }
            else if (!((senha.Contains("A")) || (senha.Contains("B")) || (senha.Contains("C")) || (senha.Contains("D")) ||
                 (senha.Contains("E")) || (senha.Contains("F")) || (senha.Contains("G")) || (senha.Contains("H")) ||
                 (senha.Contains("I")) || (senha.Contains("J")) || ((senha.Contains("L")) || (senha.Contains("K")) ||
                 (senha.Contains("M")) || (senha.Contains("N")) || (senha.Contains("O")) || (senha.Contains("P")) ||
                 (senha.Contains("Q")) || (senha.Contains("R")) || (senha.Contains("S")) || (senha.Contains("T")) ||
                 ((senha.Contains("U")) || (senha.Contains("V")) || (senha.Contains("X")) || (senha.Contains("W")) ||
                (senha.Contains("Y")) || (senha.Contains("Z"))))))
            {
                Console.WriteLine("Senha inválida");
            }
            else
            {
                Console.WriteLine($"Parabéns {nome}, sua senha escolhida com sucesso");
            }


            Console.ReadLine();
        }
    }
}
