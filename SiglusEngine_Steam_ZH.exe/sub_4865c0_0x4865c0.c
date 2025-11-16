// 函数: sub_4865c0
// 地址: 0x4865c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx_16 = data_b9a5e0
data_b9a5f0 = 0
uint32_t eax = sub_48643c(ecx_16)

while (true)
    uint32_t ebx_1 = eax
    
    if (ebx_1 == 0xffffffff)
        break
    
    if (ebx_1 == 0x22)
        int32_t eax_17 = data_b9a5f0
        data_b9a5f0 += 1
        (&data_b98080)[eax_17] = 0
        char* eax_18 = &data_b98080
        char i
        
        do
            i = *eax_18
            eax_18 = &eax_18[1]
        while (i != 0)
        int32_t eax_20 = _malloc(eax_18 - &data_b98080)
        data_b9a5a8 = eax_20
        
        if (eax_20 == 0)
            break
        
        int32_t esi_4
        int32_t edi_3
        edi_3, esi_4 = __builtin_memcpy(eax_20, &data_b98080, (eax_18 - &data_b98080) u>> 2 << 2)
        __builtin_memcpy(edi_3, esi_4, (eax_18 - &data_b98080) & 3)
        return 2
    
    if (ebx_1 == 0x5c)
        ebx_1 = sub_48643c(data_b9a5e0)
        
        switch (ebx_1)
            case 0x30
                ebx_1 = 0
                uint32_t eax_2 = sub_48643c(data_b9a5e0)
                bool cond:0_1
                
                if (eax_2 != 0xffffffff)
                    cond:0_1 = _isdigit(eax_2) == 0
                
                if (eax_2 == 0xffffffff || cond:0_1 || eax_2 == 0x38 || eax_2 == 0x39)
                    (*(**(data_b9a5e0 + 0xc) + 8))()
                    (*(**(data_b9a5e0 + 0xc) + 8))()
                    (*(**(data_b9a5e0 + 0xc) + 8))()
                else
                    ebx_1 = eax_2 - 0x30
                    uint32_t eax_4 = sub_48643c(data_b9a5e0)
                    
                    if (eax_4 == 0xffffffff)
                        (*(**(data_b9a5e0 + 0xc) + 8))()
                        (*(**(data_b9a5e0 + 0xc) + 8))()
                    else if (_isdigit(eax_4) == 0 || eax_4 == 0x38 || eax_4 == 0x39)
                        (*(**(data_b9a5e0 + 0xc) + 8))()
                        (*(**(data_b9a5e0 + 0xc) + 8))()
                    else
                        ebx_1 = eax_4 + (ebx_1 << 3) - 0x30
                        uint32_t eax_6 = sub_48643c(data_b9a5e0)
                        
                        if (eax_6 == 0xffffffff)
                            (*(**(data_b9a5e0 + 0xc) + 8))()
                        else if (_isdigit(eax_6) == 0 || eax_6 == 0x38 || eax_6 == 0x39)
                            (*(**(data_b9a5e0 + 0xc) + 8))()
                        else
                            ebx_1 = eax_6 + (ebx_1 << 3) - 0x30
            case 0x62
                ebx_1 = 8
            case 0x65
                ebx_1 = 0x1b
            case 0x66
                ebx_1 = 0xc
            case 0x6e
                ebx_1 = 0xa
            case 0x72
                ebx_1 = 0xd
            case 0x74
                ebx_1 = 9
            case 0x76
                ebx_1 = 0xb
            case 0xffffffff
                break
    
    int32_t eax_14 = data_b9a5f0
    
    if (eax_14 s< 0x1ff)
        (&data_b98080)[eax_14] = ebx_1.b
        data_b9a5f0 = eax_14 + 1
    
    eax = sub_48643c(data_b9a5e0)

return 0xff
