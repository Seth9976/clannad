// 函数: _xtow_s@20
// 地址: 0x75d265
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

void* eax_3
int32_t result

if (arg3 u> 0)
    *arg2 = 0
    int32_t eax_4
    eax_4.b = arg5 != 0
    
    if (arg3 u> eax_4 + 1)
        result = 0x22
        
        if (arg4 - 2 u> 0x22)
            goto label_75d28e
        
        void* edi_1 = arg2
        bool cond:2_1 = arg5 == 0
        arg5 = 0
        int32_t edx_2 = arg1
        
        if (not(cond:2_1))
            *arg2 = 0x2d
            edi_1 = &arg2[1]
            edx_2 = neg.d(edx_2)
            arg5 = 1
        
        int32_t ecx_1 = arg5
        void* ebx_1 = edi_1
        
        do
            int32_t edx_3 = 0
            uint32_t temp1_1 = modu.dp.d(edx_3:edx_2, arg4)
            edx_2 = divu.dp.d(edx_3:edx_2, arg4)
            int16_t eax_11
            
            if (temp1_1 u<= 9)
                eax_11 = temp1_1.w + 0x30
            else
                eax_11 = temp1_1.w + 0x57
            
            *edi_1 = eax_11
            edi_1 += 2
            ecx_1 += 1
            
            if (edx_2 == 0)
                break
        while (ecx_1 u< arg3)
        
        if (ecx_1 u< arg3)
            *edi_1 = 0
            void* edi_2 = edi_1 - 2
            
            do
                int16_t ecx_3 = *edi_2
                *edi_2 = *ebx_1
                edi_2 -= 2
                *ebx_1 = ecx_3
                ebx_1 += 2
            while (ebx_1 u< edi_2)
            
            return 0
        
        *arg2 = 0
        eax_3 = __errno()
    else
        eax_3 = __errno()
        result = 0x22
else
label_75d28e:
    eax_3 = __errno()
    result = 0x16

*eax_3 = result
__invalid_parameter_noinfo()
return result
