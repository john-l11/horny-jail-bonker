/**
 * This function will be used to initialize all the ports.
 */
void portInit(void);

/**
 * This function will be used to initialize the pwm peripheral since it is
 * being used by the motor.
 */
void pwmInit();

/**
 * This function will be used to initialize the uart peripheral which will be
 * the main input reading if I send a dm to someone. This will also be used to
 * send the audio file to the speaker.
 */
void uartInit();