################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Calculate.cpp \
../src/Computing.cpp \
../src/Main.cpp \
../src/Main_test.cpp 

OBJS += \
./src/Calculate.o \
./src/Computing.o \
./src/Main.o \
./src/Main_test.o 

CPP_DEPS += \
./src/Calculate.d \
./src/Computing.d \
./src/Main.d \
./src/Main_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I../inc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


