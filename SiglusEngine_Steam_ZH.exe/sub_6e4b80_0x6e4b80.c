// 函数: sub_6e4b80
// 地址: 0x6e4b80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
int32_t* edx_1 = edi[2] - edi[3]
int32_t* ebx_1 = *edi + edi[3]
arg1 = edx_1

if (edi[1] s>= 0)
    if (edi[5] != 0)
    label_6e4bef:
        
        if (edi[5] + edi[6] s<= edx_1)
            int32_t esi_2 = *(ebx_1 + 0x16)
            *(ebx_1 + 0x16) = 0
            void* eax_7 = edi[5]
            void* var_14_1 = eax_7
            void* var_10_1 = eax_7 + ebx_1
            int32_t eax_9 = edi[6]
            int32_t* var_18 = ebx_1
            int32_t var_c_1 = eax_9
            sub_6e49c0(&var_18)
            
            if (esi_2 != *(ebx_1 + 0x16))
                edx_1 = arg1
                *(ebx_1 + 0x16) = esi_2
                goto label_6e4c2f
            
            int32_t edx_4 = *edi + edi[3]
            
            if (arg2 != 0)
                *arg2 = edx_4
                arg2[1] = edi[5]
                arg2[2] = edi[5] + edx_4
                arg2[3] = edi[6]
            
            int32_t result = edi[5] + edi[6]
            edi[3] += result
            edi[4] = 0
            edi[5] = 0
            edi[6] = 0
            return result
    else if (edx_1 s>= 0x1b)
        if (*ebx_1 != 0x5367674f)
        label_6e4c2f:
            edi[5] = 0
            edi[6] = 0
            void* eax_13 = _memchr(ebx_1 + 1, 0x4f, edx_1 - 1)
            
            if (eax_13 == 0)
                eax_13 = edi[2] + *edi
            
            edi[3] = eax_13 - *edi
            return ebx_1 - eax_13
        
        uint32_t eax_2 = zx.d(*(ebx_1 + 0x1a))
        
        if (edx_1 s>= eax_2 + 0x1b)
            int32_t i = 0
            
            if (eax_2 s> 0)
                int32_t edx_2 = edi[6]
                
                do
                    uint32_t eax_3 = zx.d(*(ebx_1 + i + 0x1b))
                    i += 1
                    edx_2 += eax_3
                    edi[6] = edx_2
                while (i s< zx.d(*(ebx_1 + 0x1a)))
                
                edx_1 = arg1
            
            edi[5] = eax_2 + 0x1b
            goto label_6e4bef

return 0
