################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BankAccount.cpp \
../Book.cpp \
../Library.cpp \
../main.cpp \
../mainBank.cpp 

CPP_DEPS += \
./BankAccount.d \
./Book.d \
./Library.d \
./main.d \
./mainBank.d 

OBJS += \
./BankAccount.o \
./Book.o \
./Library.o \
./main.o \
./mainBank.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./BankAccount.d ./BankAccount.o ./Book.d ./Book.o ./Library.d ./Library.o ./main.d ./main.o ./mainBank.d ./mainBank.o

.PHONY: clean--2e-

