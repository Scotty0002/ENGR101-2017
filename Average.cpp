int main()
{
	init();
	
	int adc_readingMax;
	int adc_reading2;
	int adc_readingMin = 2000;
	int array[5];
	
	for(int i=0;i<5;i++){
		adc_reading2 = read_analog(0);
		array[i] = adc_reading2;
		if(adc_reading2>adc_readingMax){
			adc_readingMax = adc_reading2;
			sleep1(0,500000);
		}
		if(adc_reading2<adc_readingMin){
			adc_readingMin = adc_reading2;
			sleep1(0,50000);
		
		}
		printf("%d\n" ,adc_reading2);
	}
	for(int i=0;i<5;i++){
		 printf("In array: i=%d a=%d\n",i,array[i]);
    }		
		
	printf("The average is: %d\n",(array[0]+array[1]+array[2]+array[3]+array[4])/5);
	printf("Half range: %d\n" ,(adc_readingMax-adc_readingMin)/2);

	
	
  
	return 0;
