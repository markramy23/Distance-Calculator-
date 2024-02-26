################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Ultrasonic.c \
../distance_calculator.c \
../gpio.c \
../icu.c \
../my_lcd.c 

OBJS += \
./Ultrasonic.o \
./distance_calculator.o \
./gpio.o \
./icu.o \
./my_lcd.o 

C_DEPS += \
./Ultrasonic.d \
./distance_calculator.d \
./gpio.d \
./icu.d \
./my_lcd.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


