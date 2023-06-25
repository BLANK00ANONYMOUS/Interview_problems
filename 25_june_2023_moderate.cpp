bool isReachable(int startX, int startY, int endX, int endY)
{
    if (startX > endX || startY > endY)
    {
        return false;
    }

    while (startX < endX && endY > startY)
    {
        if (endX > endY)
        {
            endX %= endY;
        }
        else
        {
            endY %= endX;
        }
    }

    if (startX == endX && endY >= startY && (endY - startY) % endX == 0)
    {
        return true;
    }
    else if (startY == endY && endX >= startX && (endX - startX) % endY == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
