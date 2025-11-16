// 函数: sub_41b980
// 地址: 0x41b980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg5
*result = 0

if (arg3 s> 0)
    result = 7
    
    if (arg3 s>= 7)
        arg3 = 7
else
    arg3 = 0

if ((&data_98be10)[arg3 * 8] != 0)
    int32_t esi_1 = (&data_98be04)[arg3 * 8]
    int32_t edx = 0
    
    if (esi_1 s<= 0)
    label_41b9cc:
        edx = 0xffffffff
    else
        result = (&data_98be14)[arg3 * 8]
        
        while (*result != arg2)
            edx += 1
            result = &result[1]
            
            if (edx s>= esi_1)
                goto label_41b9cc
    
    int32_t edi_1 = (&data_98be08)[arg3 * 8]
    int32_t esi_2 = 0
    
    if (edi_1 s<= 0)
    label_41b9ec:
        esi_2 = 0xffffffff
    else
        result = (&data_98be18)[arg3 * 8]
        
        while (*result != arg4)
            esi_2 += 1
            result = &result[2]
            
            if (esi_2 s>= edi_1)
                goto label_41b9ec
    
    if (edx != 0xffffffff && esi_2 != 0xffffffff)
        result = (&data_98be18)[arg3 * 8]
        
        if (result[esi_2 * 2 + 1] == 0x53)
            result = *((&data_98be1c)[arg3 * 8] + ((edi_1 * edx + esi_2) << 2))
                + (&data_98be20)[arg3 * 8]
            *arg5 = result

return result
