void setup() {
  // put your setup code here, to run once:
         pinMode( 13, OUTPUT) ;
         pinMode( 12, OUTPUT) ;
         pinMode( 11, OUTPUT) ;
         pinMode( 10, OUTPUT) ;
}

void loop() {
     int v[4]={10,11,12,13};
     for(int i=0;i<16;i++){
        int resto=i;
        for(int j=3;j>=0;j--){
          if(resto>=pow(2,(double)j)){
            digitalWrite(v[j],HIGH);
            resto=resto-pow(2,(double)j);
          }
        }
        delay(1000);
        for(int j=0;j<4;j++){
           digitalWrite(v[j],LOW);
        }
     }

}
