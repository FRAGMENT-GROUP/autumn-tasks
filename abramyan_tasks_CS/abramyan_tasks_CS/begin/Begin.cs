using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace abramyan_tasks_CS.begin
{
    internal static class Begin
    {
        public static int Task1(int a)
        {
            return 4 * a;
        }
        public static int Task2(int a)
        {
            return a * a;
        }
        public static void Task3(int a, int b)
        {
            SquareRectangle(a,b);
            PerimetrRectangle(a,b);
        }
        private static int SquareRectangle(int a, int b)
        {
            return a * b;
        }
        private static int PerimetrRectangle(int a, int b)
        {
            return (a + b) * 2;
        }

        public static double Task4(int d)
        {
            return Math.PI * d;
        }

        public static void Task5(int a)
        {
            CubeVolume(a);
            CubeSquare(a);
        }

        private static double CubeVolume(int a)
        {
            return Math.Pow(a, 3);
        }

        private static double CubeSquare(int a)
        {
            return 6 * Math.Pow(a, 2);
        }

        public static void Task6(int a, int b, int c)
        {
            ParallelepipedVolume(a,b,c);
            ParallelepipedSquare(a, b, c);
        }

        private static int ParallelepipedVolume(int a, int b, int c)
        {
            return a * b * c;
        }

        private static int ParallelepipedSquare(int a, int b, int c)
        {
            return 2 * (a * b + b * c + b * c);
        }

        public static void Task7(int r)
        {
            CircleCircuit(r);
            CircleSquare(r);
        }

        private static double CircleCircuit(int r)
        {
            return 2 * Math.PI * r;
        }

        private static double CircleSquare(int r)
        {
            return Math.PI * Math.Pow(r, 2);
        }

        public static double Task8(int a, int b)
        {
            return (a + b) / 2;
        }

        public static double Task9(int a, int b)
        {
            if (a < 0 || b < 0)
                throw new ArgumentException();
            return Math.Sqrt(a * b);
        }

        public static void Task10(int a, int b)
        {
            if (a == 0 || b == 0)
                throw new ArgumentException();

            Console.WriteLine($"Sum: {a + b} Dif: {a - b} Com: {a * b} Sqr: {Math.Pow(a, 2) / Math.Pow(b, 2)}");
        }

        

    }
}
