    // Global variables here

 
void setup(){
    // Any general setup stuff goes here to run once      

    pinMode(D7, OUTPUT);

    Spark.subscribe("hook-response/post-to-particle", gotHookReply, MY_DEVICES);
	Particle.publish("post-to-particle");
	
}


void gotHookReply(const char *name, const char *data){
    
    if (String(data) == "The access token was not found"){
       digitalWrite(D7, 1);   // light D7 
    }
    
}


void loop(){
  // your looping stuff goes here

}



  // Note: type into your browser https://api.spark.io/v1/devices/ 
  // to see what the full json reply is
  // {
  //   "error": "invalid_request",
  //   "error_description": "The access token was not found"
  // }









