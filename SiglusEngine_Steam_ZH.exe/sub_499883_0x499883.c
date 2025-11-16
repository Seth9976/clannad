// 函数: sub_499883
// 地址: 0x499883
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t ecx_1 = zx.d(*(arg1 + 0xfb))
int32_t edi
int32_t var_10 = edi
uint32_t result

if (arg3 == 0xff)
    uint32_t result_1 = (ecx_1 * *(arg1 + 0xb8) + 7) u>> 3
    result = result_1
    int32_t esi_3
    int32_t edi_2
    edi_2, esi_3 = __builtin_memcpy(arg2, *(arg1 + 0xdc) + 1, result_1 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_3, result & 3)
else if (ecx_1 == 1)
    result = *(arg1 + 0xb8)
    char* edi_7 = arg2
    char* esi_11 = *(arg1 + 0xdc) + 1
    arg2 = 0x80
    uint32_t edx_11 = 7
    
    if (result u> 0)
        arg1 = result
        uint32_t i
        
        do
            result = arg3
            
            if ((arg2 & result) != 0)
                ecx_1.b = edx_11.b
                result.b = (zx.d(*esi_11) u>> ecx_1.b & 1).b << edx_11.b
                *edi_7 = ((0x7f7f s>> (7 - edx_11.b)).b & *edi_7) | result.b
            
            if (edx_11 != 0)
                edx_11 -= 1
            else
                esi_11 = &esi_11[1]
                edx_11 = 7
                edi_7 = &edi_7[1]
            
            if (arg2 != 1)
                arg2 s>>= 1
            else
                arg2 = 0x80
            
            i = arg1
            arg1 -= 1
        while (i != 1)
else if (ecx_1 == 2)
    result = *(arg1 + 0xb8)
    char* edi_6 = arg2
    char* esi_9 = *(arg1 + 0xdc) + 1
    arg2 = 0x80
    uint32_t edx_9 = 6
    
    if (result u> 0)
        arg1 = result
        uint32_t i_1
        
        do
            result = arg3
            
            if ((arg2 & result) != 0)
                ecx_1.b = edx_9.b
                result.b = (zx.d(*esi_9) u>> ecx_1.b & 3).b << edx_9.b
                *edi_6 = ((0x3f3f s>> (6 - edx_9.b)).b & *edi_6) | result.b
            
            if (edx_9 != 0)
                edx_9 -= 2
            else
                esi_9 = &esi_9[1]
                edx_9 = 6
                edi_6 = &edi_6[1]
            
            if (arg2 != 1)
                arg2 s>>= 1
            else
                arg2 = 0x80
            
            i_1 = arg1
            arg1 -= 1
        while (i_1 != 1)
else if (ecx_1 == 4)
    result = *(arg1 + 0xb8)
    char* edi_5 = arg2
    char* esi_7 = *(arg1 + 0xdc) + 1
    arg2 = 0x80
    uint32_t edx_8 = 4
    
    if (result u> 0)
        arg1 = result
        uint32_t i_2
        
        do
            result = arg3
            
            if ((arg2 & result) != 0)
                ecx_1.b = edx_8.b
                result.b = (zx.d(*esi_7) u>> ecx_1.b & 0xf).b << edx_8.b
                *edi_5 = ((0xf0f s>> (4 - edx_8.b)).b & *edi_5) | result.b
            
            if (edx_8 != 0)
                edx_8 -= 4
            else
                esi_7 = &esi_7[1]
                edx_8 = 4
                edi_5 = &edi_5[1]
            
            if (arg2 != 1)
                arg2 s>>= 1
            else
                arg2 = 0x80
            
            i_2 = arg1
            arg1 -= 1
        while (i_2 != 1)
else
    result = *(arg1 + 0xb8)
    char* ebx_1 = arg2
    uint32_t result_2 = ecx_1 u>> 3
    int32_t edx_7 = *(arg1 + 0xdc) + 1
    arg2:3.b = 0x80
    
    if (result u> 0)
        uint32_t var_8_1 = result
        uint32_t i_3
        
        do
            result.b = arg3.b
            
            if ((arg2:3.b & result.b) != 0)
                result = result_2
                int32_t esi_5
                int32_t edi_4
                edi_4, esi_5 = __builtin_memcpy(ebx_1, edx_7, result_2 u>> 2 << 2)
                __builtin_memcpy(edi_4, esi_5, result & 3)
            
            edx_7 += result_2
            ebx_1 = &ebx_1[result_2]
            
            if (arg2:3.b != 1)
                arg2:3.b u>>= 1
            else
                arg2:3.b = 0x80
            
            i_3 = var_8_1
            var_8_1 -= 1
        while (i_3 != 1)

return result
