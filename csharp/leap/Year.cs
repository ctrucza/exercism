namespace Leap
{
    public class Year
    {
        public static bool IsLeap(int year)
        {
            if (year % 4 != 0)
                return false;
            if (year % 100 != 0)
                return true;
            if (year % 400 == 0)
                return true;
            return false;

            //return DivisibleBy4(year) && (!DivisibeBy100(year) || DivisibleBy400(year));

        }
    }
}
