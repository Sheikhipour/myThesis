PROCESS(clk, rst_n )
VARIABLE I : INTEGER := 0;
BEGIN
	IF rst_n = '0' THEN
		BIT1	<=	0;
		BIT2	<=	0;
		BIT3	<=	0;
		BIT4	<=	0;
	ELSIF RISING_EDGE (clk) THEN
		IF I < NUMBER_OF_DATA_SAMPLES THEN 
			IF RES_REAL >= 2 THEN
				BIT1 <= 1;
				BIT2 <= 0;					  
			ELSIF RES_REAL < 2 AND RES_REAL >= 0 THEN
				BIT1 <= 1;
				BIT2 <= 1;							  
			ELSIF RES_REAL < 0 AND RES_REAL >= -2 THEN
				BIT1 <= 0;
				BIT2 <= 1;					  
			ELSE
				BIT1 <= 0;
				BIT2 <= 0;							
			END IF;
							
			IF RES_IMAG >= 2 THEN
				BIT3 <= 0;
				BIT4 <= 0;
			ELSIF RES_IMAG < 2 AND RES_IMAG >= 0 THEN
				BIT3 <= 0;
				BIT4 <= 1;
			ELSIF RES_IMAG < 0 AND RES_IMAG >= -2 THEN
				BIT3 <= 1;
				BIT4 <= 1;
			ELSE 
				BIT3 <= 1;
				BIT4 <= 0;
			END IF;				
			I := I + 1;		
		END IF			
	END IF;
END PROCESS;
