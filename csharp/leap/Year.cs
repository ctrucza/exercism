using System;

namespace Leap
{
    public class Year
    {
        public static bool IsLeap(int year)
        {
            Func<int, bool> DivisibleBy = n => (year % n == 0);

            if (DivisibleBy(4))
            {
                if (DivisibleBy(100))
                {
                    if (DivisibleBy(400))
                        return true;

                    return false;
                }
                return true;
            }

            return false;
        }
    }
}
