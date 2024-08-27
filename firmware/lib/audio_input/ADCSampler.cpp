#include "ADCSampler.h"

ADCSampler::ADCSampler(adc_unit_t adcUnit, adc1_channel_t adcChannel)
    : I2SSampler(), m_adcUnit(adcUnit), m_adcChannel(adcChannel) {
}

void ADCSampler::configureI2S() {
}

void ADCSampler::processI2SData(uint8_t *i2sData, size_t bytesRead) {
    uint16_t *rawSamples = reinterpret_cast<uint16_t *>(i2sData);
    for (int i = 0; i < bytesRead / 2; i++) {
        addSample((2048 - (rawSamples[i] & 0xfff)) * 15);
    }
}
