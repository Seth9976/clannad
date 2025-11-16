// 函数: __wwincmdln
// 地址: 0x755c61
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const result = data_4ece2e8
int32_t edx = 0

if (result == 0)
    result = &data_ad7c90

while (true)
    uint32_t eax_1 = zx.d(*result)
    
    if (eax_1.w u<= 0x20)
        if (eax_1.w == 0)
            return result
        
        if (edx == 0)
            while (true)
                int16_t eax_3 = *result
                
                if (eax_3 == 0)
                    break
                
                if (eax_3 u> 0x20)
                    break
                
                result += 2
            
            return result
    
    if (eax_1 == 0x22)
        int32_t eax_2
        eax_2.b = edx == 0
        edx = eax_2
    
    result += 2
