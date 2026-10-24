################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice2/MainProduit.cpp \
../exercice2/Produit.cpp 

CPP_DEPS += \
./exercice2/MainProduit.d \
./exercice2/Produit.d 

OBJS += \
./exercice2/MainProduit.o \
./exercice2/Produit.o 


# Each subdirectory must supply rules for building sources it contributes
exercice2/%.o: ../exercice2/%.cpp exercice2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice2

clean-exercice2:
	-$(RM) ./exercice2/MainProduit.d ./exercice2/MainProduit.o ./exercice2/Produit.d ./exercice2/Produit.o

.PHONY: clean-exercice2

