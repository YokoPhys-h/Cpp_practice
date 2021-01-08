int factrial(int x)
{
    if (x > 0)
    {
        int y;
        y = x * factrial(x - 1);
        return y;
    }

    else
    {
        int y;
        y = 1;
        return y;
    }
}