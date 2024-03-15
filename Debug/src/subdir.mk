################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/DAC.c \
../src/IR.c \
../src/LEDS.c \
../src/MEXTI.c \
../src/MGPIO.c \
../src/MNVIC.c \
../src/MRCC_prg.c \
../src/MSYSTICK.c \
../src/SPI.c \
../src/STP.c \
../src/STP_Show.c \
../src/TFT.c \
../src/TIMER_Program.c \
../src/main.c 

OBJS += \
./src/DAC.o \
./src/IR.o \
./src/LEDS.o \
./src/MEXTI.o \
./src/MGPIO.o \
./src/MNVIC.o \
./src/MRCC_prg.o \
./src/MSYSTICK.o \
./src/SPI.o \
./src/STP.o \
./src/STP_Show.o \
./src/TFT.o \
./src/TIMER_Program.o \
./src/main.o 

C_DEPS += \
./src/DAC.d \
./src/IR.d \
./src/LEDS.d \
./src/MEXTI.d \
./src/MGPIO.d \
./src/MNVIC.d \
./src/MRCC_prg.d \
./src/MSYSTICK.d \
./src/SPI.d \
./src/STP.d \
./src/STP_Show.d \
./src/TFT.d \
./src/TIMER_Program.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=16000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


