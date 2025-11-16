// 函数: sub_410dfd
// 地址: 0x410dfd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
char* edi_1 = nullptr
int32_t result = 0

if (*(arg1 + 0x18) != 0)
label_410e5b:
    int32_t eax_9 = arg2
    int32_t ecx_3 = arg3
    *(arg1 + 8) = 0xffffffff
    *(arg1 + 0xc) = 0xffffffff
    *(arg1 + 0x10) = 0xffffffff
    *(arg1 + 0x14) = 0xffffffff
    *(arg1 + 0x1c) = eax_9
    *(arg1 + 0x20) = ecx_3
    arg2 = eax_9
    
    if (eax_9 u< eax_9 + ecx_3)
        arg4 = 0
        int32_t ebx_2 = eax_9 * 0xc
        
        do
            ecx_3.b = 0
            
            for (int32_t j = 0; j u< 3; j += 1)
                if (*(*(arg1 + 4) + ebx_2 + (j << 2)) != 0xffffffff)
                    ecx_3.b += 1
            
            edi_1[*(arg1 + 0x18)] = 0
            edi_1[*(arg1 + 0x18) + 1] = ecx_3.b
            sub_40d8f7(arg1, arg4)
            arg2 += 1
            ebx_2 += 0xc
            edi_1 = &edi_1[0xc]
            arg4 += 1
        while (arg2 u< *(arg1 + 0x1c) + arg3)
        
        ecx_3 = arg3
    
    int32_t edi_3 = *(arg1 + 0x2c)
    
    if (edi_3 != 0)
        __builtin_memset(edi_3, 0, ecx_3 << 2)
        *(arg1 + 0x28) = 0
else
    int32_t eax_4 = sub_745f3f(*(arg1 + 0x24) * 0xc)
    *(arg1 + 0x18) = eax_4
    
    if (eax_4 == 0)
        result = 0x8007000e
        j__free(*(arg1 + 0x18))
    else
        if (arg4.b == 0)
            goto label_410e5b
        
        int32_t eax_7 = sub_745f3f(*(arg1 + 0x24) << 2)
        *(arg1 + 0x2c) = eax_7
        
        if (eax_7 != 0)
            goto label_410e5b
        
        result = 0x8007000e
        j__free(*(arg1 + 0x18))

return result
