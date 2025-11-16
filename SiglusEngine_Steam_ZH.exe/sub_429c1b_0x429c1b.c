// 函数: sub_429c1b
// 地址: 0x429c1b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* ebx = arg1
int32_t* ecx_1 = *ebx
int32_t edx = ecx_1[1]
int32_t esi = *ecx_1
int32_t edi
int32_t var_14 = edi
int32_t i_1 = ecx_1[4]
int32_t result = 0

if (i_1 u< 1)
    i_1 = 1

if (edx s>= 0)
    if (edx s<= 3)
        if (esi == 1 || esi == 2 || esi == 3)
            int32_t edx_7 = (ecx_1[6] * ecx_1[5] * i_1) << 2
            int32_t esi_6
            int32_t edi_2
            edi_2, esi_6 = __builtin_memcpy(*arg2, *arg3, edx_7 u>> 2 << 2)
            __builtin_memcpy(edi_2, esi_6, edx_7 & 3)
            *arg2 += edx_7
            *arg3 += edx_7
            *ebx += 0x1c
            return 0
    else if (edx == 4)
        if (esi - 4 u<= 0xe)
            switch (esi + &jump_table_429d14[1])
                case &lookup_table_429d1c, &lookup_table_429d1c[1], &lookup_table_429d1c[2], 
                        &lookup_table_429d1c[3], &lookup_table_429d1c[4], &lookup_table_429d1c[5], 
                        &lookup_table_429d1c[0xb], &lookup_table_429d1c[0xc]
                    int32_t ecx_6 = i_1 << 2
                    *arg2 += ecx_6
                    *arg3 += ecx_6
            
            *ebx += 0x14
            return result
    else if (edx == 5)
        int32_t edx_1 = ecx_1[5]
        *ebx = &ecx_1[6]
        
        if (i_1 != 0)
            int32_t i
            
            do
                arg1 = nullptr
                *ebx = &ecx_1[6]
                
                if (edx_1 u> 0)
                    do
                        result = sub_429c1b(ebx, arg2, arg3)
                        
                        if (result s< 0)
                            return result
                        
                        arg1 += 1
                    while (arg1 u< edx_1)
                
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        return result

return 0x80004005
