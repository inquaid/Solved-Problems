using System;

namespace practice
{
    public class Program
    {
        public static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[] ary = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int mx = -1;
            for (int i = 0; i < n; i++)
            {
                mx = Math.Max(mx, ary[i]);
            }

            Console.WriteLine(mx);
        }
    }
}