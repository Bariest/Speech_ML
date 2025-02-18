#ifndef ADC_SAMPLER_H
#define ADC_SAMPLER_H

#include "I2SSampler.h"
#include "driver/i2s.h"
#include "driver/adc.h"

class ADCSampler : public I2SSampler {
private:
    adc_unit_t m_adcUnit;
    adc1_channel_t m_adcChannel;

protected:
    void configureI2S() override;
    void processI2SData(uint8_t *i2sData, size_t bytesRead) override;

public:
    ADCSampler(adc_unit_t adc_unit, adc1_channel_t adc_channel);
};

#endif 