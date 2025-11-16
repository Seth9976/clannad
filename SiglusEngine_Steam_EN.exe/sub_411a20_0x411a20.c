// 函数: sub_411a20
// 地址: 0x411a20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2

if (arg3 s< 0x21 && result u<= 0x20)
    int32_t edx = arg2 << 5
    int32_t var_c_1 = edx
    
    if (*(edx + &data_976b50) == 0)
        sub_411500(result, data_70300c, result, data_7030dc)
        edx = var_c_1
    
    void* ebx_1 = arg4
    void* esi_1 = arg6
    
    if (ebx_1 s> esi_1)
        void* eax = ebx_1
        ebx_1 = esi_1
        esi_1 = eax
    
    int32_t edi_1 = arg7
    int32_t ecx_1 = arg5
    
    if (ecx_1 s> edi_1)
        int32_t eax_1 = ecx_1
        ecx_1 = edi_1
        edi_1 = eax_1
    
    result = *(edx + &data_976b58)
    
    if (ebx_1 s< result && esi_1 s>= 0)
        int32_t edx_2 = *(edx + &data_976b5c)
        
        if (ecx_1 s< edx_2 && edi_1 s>= 0)
            if (ebx_1 s< 0)
                ebx_1 = nullptr
            
            if (esi_1 s>= result)
                esi_1 = result - 1
            
            result = nullptr
            
            if (ecx_1 s< 0)
                ecx_1 = 0
            
            if (edi_1 s>= edx_2)
                edi_1 = edx_2 - 1
            
            if (esi_1 - ebx_1 + 1 s> 0 && edi_1 - ecx_1 + 1 s> 0)
                int32_t ecx_4 =
                    sub_411500(sub_411350(arg3), esi_1 - ebx_1 + 1, arg3, edi_1 - ecx_1 + 1)
                int32_t var_20_3 = 0
                int32_t var_24_1 = 0xff
                int32_t var_28_1 = 0
                int32_t var_2c_1 = 0
                int32_t var_30_1 = 0
                return sub_584980(var_c_1, (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], 
                    (&data_976b5c)[arg3 * 8], *(var_c_1 + &data_976b54), *(var_c_1 + &data_976b58), 
                    *(var_c_1 + &data_976b5c), ebx_1, ecx_1, 0, 0, 0, 0xffffffff, 0xff, 0xffffffff, 
                    0xffffffff, ecx_4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)

return result
