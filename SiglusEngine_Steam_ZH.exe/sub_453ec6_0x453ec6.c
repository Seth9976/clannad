// 函数: sub_453ec6
// 地址: 0x453ec6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (arg3 != 0)
    int32_t edx_2
    
    if (arg2 s< 0)
        edx_2 = not.d(arg2)
    label_453f0e:
        void** eax_3 = *(*(arg1 + 0xb0) + (*(edx_2 + 0x14) << 2))
        int32_t* ebx_1 = *(edx_2 + 4)
        int32_t edi
        int32_t var_14_1 = edi
        __builtin_memset(arg3, 0, 0x2c)
        void* edi_3 = arg1
        int32_t eax_4 = *(edx_2 + 0x14)
        void* ecx_5 = *(*(edi_3 + 0xb0) + (eax_4 << 2))
        
        if ((*(ecx_5 + 0x28) & 1) != 0)
            goto label_453f57
        
        int32_t edi_2 = *(edi_3 + 0xac)
        void* eax_6
        
        if (eax_4 u< edi_2)
            edi_3 = arg1
        label_453f57:
            
            if (*(ecx_5 + 0x40) != 0)
                eax_6 = *(*(edi_3 + 0x38) + 0x10)
            else
                eax_6 = *(edi_3 + 0x20)
        else
            eax_6 = *(*(arg1 + 0x11c) + ((eax_4 - edi_2) << 2))
        
        arg3[2] = ebx_1[1]
        arg3[3] = *ebx_1
        int32_t ecx_10
        
        if (*(edx_2 + 8) != 0xffffffff)
            ecx_10 = 0
        else
            ecx_10 = ebx_1[4]
        
        arg3[6] = ecx_10
        int32_t* ecx_12 = ebx_1[2] + eax_6
        void* ecx_13
        
        if (*ecx_12 != 0)
            ecx_13 = &ecx_12[1]
        else
            ecx_13 = nullptr
        
        *arg3 = ecx_13
        int32_t* eax_8 = eax_6 + ebx_1[3]
        void* eax_9
        
        if (*eax_8 != 0)
            eax_9 = &eax_8[1]
        else
            eax_9 = nullptr
        
        arg3[1] = eax_9
        arg3[0xa] = *(edx_2 + 0xc)
        arg3[9] = eax_3[0xa]
        
        if (*(edx_2 + 0x18) != 0 || *(edx_2 + 0x1c) != 0 || *(edx_2 + 8) != 0xffffffff)
            arg3[7] = 0
        else
            arg3[7] = eax_3[0xe]
        
        int32_t eax_13 = arg3[2]
        
        if (eax_13 == 1)
            arg3[8] = 0
            arg3[4] = ebx_1[6]
            arg3[5] = ebx_1[5]
        else if (eax_13 == 4)
            arg3[8] = 0
            arg3[4] = 0
            arg3[5] = 0
        else if (eax_13 == 5)
            arg3[8] = ebx_1[5]
            arg3[4] = 0
            arg3[5] = 0
        else
            arg3[8] = 0
            arg3[4] = ebx_1[5]
            arg3[5] = ebx_1[6]
        
        return 0
    
    edx_2 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (edx_2 != 0)
        goto label_453f0e

return 0x8876086c
