

void initLifeLog();


void freeLifeLog();



void logBirth( int inPlayerID, char *inPlayerEmail,
               int inParentID, char *inParentEmail,
               char inIsMale,
               int inMapX, int inMapY,
               int inTotalPopulation );


// killer email NULL if died of natural causes
void logDeath( int inPlayerID, char *inPlayerEmail,
               double inAge,
               char inIsMale,
               int inMapX, int inMapY,  
               int inTotalRemainingPopulation,
               char inDisconnect = false,
               int inKillerID = -1, 
               char *inKillerEmail = NULL );


