for(i = 0 ; i < NUMBER_OF_DATA_SYMBOLS ; i++)
	{
	// REAL PART
		if ( RES_REAL >= 2 ){
			BIT1[i] = 1;
			BIT2[i] = 0;
		}
		else if ( RES_REAL >= 0 ){
		if( RES_REAL < 2 ){
			BIT1[i] = 1;
			BIT2[i] = 1;
			}
		}
		else if ( RES_REAL >= -2 ){
		if( RES_REAL < 0 ){
			BIT1[i] = 0;
			BIT2[i] = 1;
			}
		}
		else{
			BIT1[i] = 0;
			BIT2[i] = 0;
		}
	// IMAGINARY PART	
		if ( RES_IMAG >= 2 ){
			BIT3[i] = 0;
			BIT4[i] = 0;
		}
		else if ( RES_IMAG >= 0 ){
		if( RES_IMAG < 2 ){
			BIT3[i] = 0;
			BIT4[i] = 1;
			}
		}
		else if ( RES_IMAG >= -2 ){
		if( RES_IMAG < 0 ){
			BIT3[i] = 1;
			BIT4[i] = 1;
			}
		}
		else{
			BIT3[i] = 1;
			BIT4[i] = 0;
		}
	}
