// 函数: sub_4e9460
// 地址: 0x4e9460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax = arg1
BOOL var_c = eax
void* edi = *(eax + 0x13b3c)
void* esi = edi * 0x3920
char* edx = *(esi + 0xf8c77c)

if (*(esi + 0xf8c780) == edx)
    if (edi u<= 0x3f)
        eax = sub_460f20(eax, edx, esi + &data_f8d35c, 0, 0, 0)
    
    if (data_702fc0 != 0)
        sub_4cfdf0(eax, *(esi + 0xf8c77c), &data_1af0b10, 0x400)

char* result = *(edi * 0x1d4 + &data_1090b2c)

if (result != 0)
    if (result == 1)
        result = sub_4eeae0(result, arg2, var_c, edi, 3, nullptr, nullptr)
        
        if (*(edi * 0x1d4 + &data_1090b6c) != 0xffffffff)
            result = sub_57e5a0(edi, *(esi + 0xf8c77c))
            
            if (*(edi * 0x1d4 + 0x1090b30) != 0 && edi u<= 0x3f)
                *(edi * 0x2d0 + 0x8fcb0c) = *(edi * 0x2d0 + 0x8fcb14)
                *(edi * 0x2d0 + 0x8fcb10) += *(esi + 0xf8d2f0)
                result = sub_57ea10(edi)
                
                if (data_702fc0 != 0)
                    result = sub_460e20(sub_41bcb0(), 0, esi + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 
                        0xffffffff, 0)
    
    *(esi + 0xf8d324) = 2
    *(esi + 0xf8c780) = 0
else
    result = *(esi + 0xf8c780)
    
    if (*result != 0)
        sub_4eeae0(result, arg2, var_c, edi, 3, nullptr, nullptr)
        
        if (sub_57ce10() == 0)
            char* eax_5
            eax_5.b = **(esi + 0xf8c780)
            
            if (eax_5.b u< 0x80)
                result = sub_4eca80(eax_5, arg2, var_c, 1, 1)
            else if (eax_5.b u< 0xa0)
                if (eax_5.b u>= 0xfe)
                    result = sub_4eca80(eax_5, arg2, var_c, 1, 1)
                else
                    result = sub_4eca80(eax_5, arg2, var_c, nullptr, 1)
            else if (eax_5.b u<= 0xdf || eax_5.b u>= 0xfe)
                result = sub_4eca80(eax_5, arg2, var_c, 1, 1)
            else
                result = sub_4eca80(eax_5, arg2, var_c, nullptr, 1)
        else
            result = sub_57e2b0(edi, 0x3f)
    else
        bool cond:0_1 = *(edi * 0x1d4 + 0x1090b30) == 0
        *(esi + 0xf8c780) = 0
        *(esi + 0xf8d324) = 1
        
        if (not(cond:0_1) && edi u<= 0x3f)
            *(edi * 0x2d0 + 0x8fcb0c) = *(edi * 0x2d0 + 0x8fcb14)
            *(edi * 0x2d0 + 0x8fcb10) += *(esi + 0xf8d2f0)
            result = sub_57ea10(edi)
            
            if (data_702fc0 != 0)
                result = sub_460e20(sub_41bcb0(), 0, esi + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 
                    0xffffffff, 0)

if (*(esi + 0xf8c780) == 0 && edi u<= 0x3f)
    int32_t eax_9 = *(esi + &data_f8c790)
    
    if (eax_9 == 0xffffffff)
        return sub_542980(edi)
    
    result = *(eax_9 * 0x98 + 0x12c9340)
    
    if (result != 0)
        if (result == 1 || result == 2)
            return sub_57d6a0(result, *(eax_9 * 0x98 + 0x12c9344), edi, *(eax_9 * 0x98 + 0x12c9348))
        
        if (result == 3)
            result = edi * 0x2d0 + &data_8fcadc
            *(result + 0x28) = 0xffffffff
            *(result + 0x2c) = 0xffffffff

return result
