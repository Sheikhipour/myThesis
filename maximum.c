  int  maximum, x, location = 1;
  maximum = Result[80];
  
  for (x = 1; x < 80; x++)
  {
    if (Result[x] > maximum)
    {
        maximum  = Result[x];
       	location = x+1;
   	}
  }
