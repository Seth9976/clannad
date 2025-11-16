// 函数: sub_64d0a0
// 地址: 0x64d0a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = arg2
uint32_t result_1 = result

if (arg3 != 0)
    uint32_t result_7
    int32_t arg_24
    uint32_t result_2
    int32_t arg_2c
    sub_64c4d0(result, arg4, result, &result_7, &arg_24, &result_2, &arg_2c)
    uint32_t result_5 = arg5
    uint32_t result_3 = arg7
    
    if (result_5 s> result_3)
        uint32_t result_4 = result_5
        result_5 = result_3
        result_3 = result_4
    
    int32_t edi_1 = arg6
    int32_t esi_1 = arg8
    
    if (edi_1 s> esi_1)
        int32_t eax = edi_1
        edi_1 = esi_1
        esi_1 = eax
    
    result = result_2
    
    if (result_5 s<= result)
        uint32_t result_6 = result_7
        
        if (result_3 s>= result_6 && edi_1 s<= arg_2c && esi_1 s>= arg_24)
            if (result_5 s< result_6)
                result_5 = result_6
            
            if (result_3 s> result)
                result_3 = result
            
            if (edi_1 s< arg_24)
                edi_1 = arg_24
            
            if (esi_1 s> arg_2c)
                esi_1 = arg_2c
            
            int32_t eax_4
            
            if (arg10 == 0)
                eax_4.b = arg9
            else
                eax_4.b = 0xff
                eax_4.b = 0xff - arg9
            
            uint32_t eax_5 = zx.d(eax_4.b)
            int32_t edi_2 = arg3 + ((result_1 * edi_1 + result_5) << 2)
            result = ((eax_5 << 8 | eax_5) << 8 | eax_5) << 8 | eax_5
            int32_t i = esi_1 - edi_1 + 1
            
            do
                int32_t ecx_10
                int32_t edi_3
                edi_3, ecx_10 = __memfill_u32(edi_2, result, result_3 - result_5 + 1)
                edi_2 = edi_3 + ((result_1 - (result_3 - result_5 + 1)) << 2)
                i -= 1
            while (i != 0)

return result
