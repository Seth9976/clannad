// 函数: sub_6e4cb0
// 地址: 0x6e4cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[1] s>= 0)
    while (true)
        int32_t edx_1 = arg1[2] - arg1[3]
        int32_t* ebx_2 = *arg1 + arg1[3]
        int32_t var_8_1 = edx_1
        
        if (arg1[1] s< 0)
            break
        
        if (arg1[5] == 0)
            if (edx_1 s< 0x1b)
                break
            
            if (*ebx_2 != 0x5367674f)
                goto label_6e4d73
            
            uint32_t eax_1 = zx.d(*(ebx_2 + 0x1a))
            
            if (edx_1 s< eax_1 + 0x1b)
                break
            
            int32_t i = 0
            
            if (eax_1 s> 0)
                int32_t edx_2 = arg1[6]
                
                do
                    uint32_t eax_2 = zx.d(*(ebx_2 + i + 0x1b))
                    i += 1
                    edx_2 += eax_2
                    arg1[6] = edx_2
                while (i s< zx.d(*(ebx_2 + 0x1a)))
                
                edx_1 = var_8_1
            
            arg1[5] = eax_1 + 0x1b
            goto label_6e4d2f
        
    label_6e4d2f:
        
        if (arg1[6] + arg1[5] s> edx_1)
            break
        
        int32_t esi_2 = *(ebx_2 + 0x16)
        *(ebx_2 + 0x16) = 0
        void* eax_6 = arg1[5]
        void* var_1c_1 = eax_6
        void* var_18_1 = eax_6 + ebx_2
        int32_t eax_8 = arg1[6]
        int32_t* var_20 = ebx_2
        int32_t var_14_1 = eax_8
        sub_6e49c0(&var_20)
        void* ebx_3
        
        if (esi_2 == *(ebx_2 + 0x16))
            int32_t ecx_4 = arg1[3] + *arg1
            
            if (arg2 != 0)
                *arg2 = ecx_4
                arg2[1] = arg1[5]
                arg2[2] = arg1[5] + ecx_4
                arg2[3] = arg1[6]
            
            ebx_3 = arg1[6] + arg1[5]
            arg1[3] += ebx_3
            arg1[4] = 0
            arg1[5] = 0
            arg1[6] = 0
        else
            edx_1 = var_8_1
            *(ebx_2 + 0x16) = esi_2
        label_6e4d73:
            arg1[5] = 0
            arg1[6] = 0
            void* ecx_1 = _memchr(ebx_2 + 1, 0x4f, edx_1 - 1)
            
            if (ecx_1 == 0)
                ecx_1 = arg1[2] + *arg1
            
            ebx_3 = ebx_2 - ecx_1
            arg1[3] = ecx_1 - *arg1
        
        if (ebx_3 s> 0)
            return 1
        
        if (ebx_3 == 0)
            break
        
        if (arg1[4] == 0)
            arg1[4] = 1
            return 0xffffffff

return 0
