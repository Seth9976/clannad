// 函数: sub_72cd60
// 地址: 0x72cd60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = arg1
int32_t ecx_1 = 0
int32_t ebx = 0
int32_t var_8_1 = 0
int32_t* result = edi[1]
arg1 = result
int32_t* i_2 = result[0x11]
int32_t* i = i_2

if (i != 0)
    do
        if (*i == 0)
            ebx += i[3] * i[2]
            ecx_1 = var_8_1 + i[1] * i[2]
            var_8_1 = ecx_1
        
        i = i[9]
    while (i != 0)
    
    result = arg1

int32_t* i_1 = result[0x12]

if (i_1 != 0)
    do
        if (*i_1 == 0)
            ebx += (i_1[3] * i_1[2]) << 7
            ecx_1 = var_8_1 + ((i_1[1] * i_1[2]) << 7)
            var_8_1 = ecx_1
        
        i_1 = i_1[9]
    while (i_1 != 0)
    
    result = arg1

if (ebx s> 0)
    int32_t edx_1 = result[0xb] - result[0x13]
    int32_t var_8_2
    
    if (edx_1 s< ecx_1)
        int32_t eax_12 = divs.dp.d(sx.q(edx_1), ebx)
        
        if (eax_12 s<= 0)
            eax_12 = 1
        
        var_8_2 = eax_12
    else
        var_8_2 = 0x3b9aca00
    
    for (; i_2 != 0; i_2 = i_2[9])
        if (*i_2 == 0)
            int32_t ebx_1 = i_2[1]
            int32_t ecx_4 = i_2[3]
            
            if (divu.dp.d(0:(ebx_1 - 1), ecx_4) + 1 s> var_8_2)
                int32_t ecx_5 = ecx_4 * var_8_2
                i_2[4] = ecx_5
                int32_t eax_16 = sub_762e12(ecx_5)
                i_2[0xd] = eax_16
                
                if (eax_16 == 0)
                    *(*edi + 0x14) = 0x41
                    _strncpy(*edi + 0x18, &data_b0018c, 0x50)
                    (**edi)(edi)
                
                i_2[0xa] = sub_735d00
                i_2[0xb] = sub_735d70
                i_2[0xc] = sub_735de0
                *(i_2 + 0x22) = 1
            else
                i_2[4] = ebx_1
            
            *i_2 = sub_72cb10(edi, 1, i_2[2], i_2[4])
            i_2[5] = arg1[0x14]
            i_2[6] = 0
            i_2[7] = 0
            *(i_2 + 0x21) = 0
    
    result = arg1
    
    for (void** i_3 = result[0x12]; i_3 != 0; i_3 = i_3[9])
        if (*i_3 == 0)
            int32_t ebx_2 = i_3[1]
            int32_t ecx_6 = i_3[3]
            
            if (divu.dp.d(0:(ebx_2 - 1), ecx_6) + 1 s> var_8_2)
                int32_t ecx_7 = ecx_6 * var_8_2
                i_3[4] = ecx_7
                int32_t eax_28 = sub_762e12(ecx_7)
                i_3[0xd] = eax_28
                
                if (eax_28 == 0)
                    *(*edi + 0x14) = 0x41
                    _strncpy(*edi + 0x18, &data_b0018c, 0x50)
                    (**edi)(edi)
                
                i_3[0xa] = sub_735d00
                i_3[0xb] = sub_735d70
                i_3[0xc] = sub_735de0
                *(i_3 + 0x22) = 1
            else
                i_3[4] = ebx_2
            
            *i_3 = sub_72cbc0(edi, 1, i_3[2], i_3[4])
            result = arg1[0x14]
            i_3[5] = result
            i_3[6] = 0
            i_3[7] = 0
            *(i_3 + 0x21) = 0

return result
