int LDR = 0;	
int lectura;	
int LED = 13;	
void setup () 
{
  pinMode (LED, OUTPUT);	
}

void loop () 
{
  lectura = analogRead (LDR);	
  if (lectura <= 512)	
  {
    digitalWrite (LED, HIGH);	
  }
  
  else {
  	digitalWrite (LED,LOW);
  }
}