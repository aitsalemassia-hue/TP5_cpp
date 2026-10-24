################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice3/MainUtilisateur.cpp \
../exercice3/Utilisateur.cpp 

CPP_DEPS += \
./exercice3/MainUtilisateur.d \
./exercice3/Utilisateur.d 

OBJS += \
./exercice3/MainUtilisateur.o \
./exercice3/Utilisateur.o 


# Each subdirectory must supply rules for building sources it contributes
exercice3/%.o: ../exercice3/%.cpp exercice3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice3

clean-exercice3:
	-$(RM) ./exercice3/MainUtilisateur.d ./exercice3/MainUtilisateur.o ./exercice3/Utilisateur.d ./exercice3/Utilisateur.o

.PHONY: clean-exercice3

