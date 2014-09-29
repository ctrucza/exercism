namespace Leap
{
    public class Year
    {
        public static bool IsLeap(int year)
        {
            if (!DivisibleBy(year, 4))
                return false;

            if (!DivisibleBy(year, 100))
                return true;

            if (DivisibleBy(year, 400))
                return true;

            return false;
        }

        private static bool DivisibleBy(int year, int divisor)
        {
            return year % divisor == 0;
        }
    }
}
