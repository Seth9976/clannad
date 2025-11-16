// 函数: _xtoa_s@20
// 地址: 0x766a13
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

void* eax_3
int32_t result

if (arg3 u> 0)
    int32_t edx_1 = arg5
    *arg2 = 0
    int32_t eax_4
    eax_4.b = edx_1 != 0
    
    if (arg3 u> eax_4 + 1)
        result = 0x22
        
        if (arg4 - 2 u> 0x22)
            goto label_766a3c
        
        void* edi_1 = arg2
        arg5 = 0
        int32_t eax_9
        
        if (edx_1 == 0)
            eax_9 = arg1
        else
            *arg2 = 0x2d
            arg5 = 1
            edi_1 = &arg2[1]
            eax_9 = neg.d(arg1)
        
        int32_t ecx_1 = arg5
        void* ebx_1 = edi_1
        
        do
            int32_t edx_2 = 0
            uint32_t temp1_1 = modu.dp.d(edx_2:eax_9, arg4)
            eax_9 = divu.dp.d(edx_2:eax_9, arg4)
            uint32_t edx_3
            
            if (temp1_1 u<= 9)
                edx_3.b = temp1_1.b + 0x30
            else
                edx_3.b = temp1_1.b + 0x57
            
            *edi_1 = edx_3.b
            edi_1 += 1
            ecx_1 += 1
            
            if (eax_9 == 0)
                break
        while (ecx_1 u< arg3)
        
        if (ecx_1 u< arg3)
            *edi_1 = 0
            void* edi_2 = edi_1 - 1
            
            do
                eax_9.b = *ebx_1
                char* ecx_2
                ecx_2.b = *edi_2
                *edi_2 = eax_9.b
                edi_2 -= 1
                *ebx_1 = ecx_2.b
                ebx_1 += 1
            while (ebx_1 u< edi_2)
            
            return 0
        
        *arg2 = 0
        eax_3 = __errno()
    else
        eax_3 = __errno()
        result = 0x22
else
label_766a3c:
    eax_3 = __errno()
    result = 0x16

*eax_3 = result
__invalid_parameter_noinfo()
return result
