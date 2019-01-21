/*********************************************Capitulo 3 - Salidas PWM        *****************************************************
*                                                                                                                                 *
*     En este tercer capitulo aprenderemos a hacer a utilizar los pines PWM de nuestra placa arduino Uno, la cual                 *
*  tiene disponibles 6 pines digitales y cada pin puede funcionar como salida PWM. Los reconoceremos por un simbolo               *
*  que tiene a la par del numero de pin. (Pines PWM 11,10,9,6,5,3).                                                               *                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 LED                                                                                                                         *
*  -1 Resistencia de 1k ohm (Si no tienen de 1k pueden variar el valor entre 100 ohm a 2.2 K omh)                                 *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/   

int led = 3; // Declaramos nuestra variable que usaremos para el led
int brillo;  //Declaramos la variable que almacenara el valor de PWM
void setup(){
  pinMode(led,OUTPUT); //Declaramos como pin de salida la variable led
  }
void loop(){
  for(brillo = 0; brillo < 256; brillo++){ //Iniciamos un conteo de 0 a 255 
    analogWrite(led,brillo); //Escribimos el valor analogico que tiene brillo
    delay(20);  //Damos una pausa para ver como aumenta el brillo del led
    }
    //Cuando cuente hasta 255
  for(brillo = 255; brillo >= 0; brillo--){ //Iniciamos un conteo alrevez de 255 a 0 
    analogWrite(led,brillo);  //Escribimos el valor analogico que tiene brillo
    delay(20);//Damos una pausa para ver como disminuye el brillo del led
    }
}
