// 函数: sub_6ea220
// 地址: 0x6ea220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg6
void* edx = nullptr
void* var_2c = arg3
void* var_8 = nullptr

while (true)
    int32_t result_1 = result
    int32_t result_2 = result_1
    
    if (result s> 4)
        result_1 = 4
        result_2 = 4
    else if (result s<= 0)
        return result
    
    int32_t ebx_1 = arg4
    char* ecx = arg3 + (edx << 6)
    int32_t var_c_1 = ebx_1
    int32_t eax_2 = arg5
    void* var_28_1 = &ecx[0x10]
    
    while (true)
        int32_t esi_2 = eax_2
        int32_t var_10_1 = esi_2
        
        if (eax_2 s> 4)
            esi_2 = 4
            var_10_1 = 4
        else if (eax_2 s<= 0)
            break
        
        char* eax_3
        int32_t i_1
        eax_3, i_1 = _memset(ecx, 0xff, 0x40)
        
        if (result_1 s> 0)
            int32_t edx_1 = arg5
            eax_3 = &data_adc1d4
            i_1 = result_1
            char* var_14_1 = &data_adc1d4
            int32_t i_2 = i_1
            int32_t i
            
            do
                int32_t edi_1 = 0
                
                if (esi_2 s> 0)
                    do
                        int32_t ecx_1 = *(eax_3 - 4)
                        int32_t esi_3 = edi_1 + ebx_1
                        eax_3 = &eax_3[8]
                        edi_1 += 1
                        *(var_2c + ((*(eax_3 - 8) + ((ecx_1 + (var_8 << 2)) << 2)) << 2)) = esi_3
                        esi_2 = var_10_1
                    while (edi_1 s< esi_2)
                    
                    eax_3 = var_14_1
                    i_1 = i_2
                    edx_1 = arg5
                
                eax_3 = &eax_3[0x20]
                ebx_1 += edx_1
                i = i_1
                i_1 -= 1
                var_14_1 = eax_3
                i_2 = i_1
            while (i != 1)
            result_1 = result_2
        
        char* edx_5 = var_8
        eax_3.b = edx_5[arg2]
        i_1.b = *(var_28_1 - 0x10) s>= 0
        i_1.b <<= 2
        i_1.b |= eax_3.b
        i_1.b ^= eax_3.b
        i_1.b &= 0x3c
        i_1.b ^= eax_3.b
        edx_5[arg2] = i_1.b
        eax_3.b = *var_28_1 s>= 0
        eax_3.b <<= 3
        eax_3.b |= i_1.b
        eax_3.b ^= i_1.b
        eax_3.b &= 0x3c
        eax_3.b ^= i_1.b
        edx_5[arg2] = eax_3.b
        i_1.b = *(var_28_1 + 0x10) s>= 0
        i_1.b <<= 4
        i_1.b |= eax_3.b
        i_1.b ^= eax_3.b
        i_1.b &= 0x3c
        i_1.b ^= eax_3.b
        edx_5[arg2] = i_1.b
        eax_3.b = *(var_28_1 + 0x28) s>= 0
        var_c_1 += 4
        eax_3.b <<= 5
        eax_3.b |= i_1.b
        eax_3.b ^= i_1.b
        eax_3.b &= 0x3c
        eax_3.b ^= i_1.b
        edx_5[arg2] = eax_3.b
        ecx = &ecx[0x40]
        edx = &edx_5[1]
        eax_2 -= 4
        var_8 = edx
        var_28_1 += 0x40
        ebx_1 = var_c_1
    
    result = arg6 - 4
    arg4 += arg5 << 2
    arg3 = var_2c
    arg6 = result
