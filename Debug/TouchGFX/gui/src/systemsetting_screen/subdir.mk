################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.cpp \
../TouchGFX/gui/src/systemsetting_screen/systemSettingView.cpp 

OBJS += \
./TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.o \
./TouchGFX/gui/src/systemsetting_screen/systemSettingView.o 

CPP_DEPS += \
./TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.d \
./TouchGFX/gui/src/systemsetting_screen/systemSettingView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/systemsetting_screen/%.o TouchGFX/gui/src/systemsetting_screen/%.su TouchGFX/gui/src/systemsetting_screen/%.cyclo: ../TouchGFX/gui/src/systemsetting_screen/%.cpp TouchGFX/gui/src/systemsetting_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m33 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U585xx -c -I../Core/Inc -I../Drivers/touch/BL6133 -I../Drivers/audio -I../Drivers/BLE -I../Drivers/BLE/stm32wb_at -I../Drivers/CatM1 -I../Drivers/pmic -I../Drivers/pmic/MAX20303 -I../Drivers/ST7789 -I../Drivers/sensorhub -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Drivers/STM32U5xx_HAL_Driver/Inc -I../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-systemsetting_screen

clean-TouchGFX-2f-gui-2f-src-2f-systemsetting_screen:
	-$(RM) ./TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.cyclo ./TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.d ./TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.o ./TouchGFX/gui/src/systemsetting_screen/systemSettingPresenter.su ./TouchGFX/gui/src/systemsetting_screen/systemSettingView.cyclo ./TouchGFX/gui/src/systemsetting_screen/systemSettingView.d ./TouchGFX/gui/src/systemsetting_screen/systemSettingView.o ./TouchGFX/gui/src/systemsetting_screen/systemSettingView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-systemsetting_screen

