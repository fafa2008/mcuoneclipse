#ifndef __LED3_CONFIG_H
#define __LED3_CONFIG_H

#ifndef LED3_CONFIG_USE_GPIO_PIN
  #define LED3_CONFIG_USE_GPIO_PIN   (1)
    /*!< 1: use GPIO pin; 0: use PWM pin */
#endif

#ifndef LED3_CONFIG_IS_LOW_ACTIVE
  #define LED3_CONFIG_IS_LOW_ACTIVE   (1)
    /*!< 1: LED is low active (cathode on port side), 0: LED is HIGH active (anode on port side) */
#endif

#endif /* __LED3_CONFIG_H */
