for (i = 0; i < MaxBits; i++) 
{
	if (y < 0 || z >= 0) 
	{
		y = y + x*t;
		z = z - t;
	}
	else 
	{
		y = y - x*t;
		z = z + t;
	}
	t = t >> 1;
}  
