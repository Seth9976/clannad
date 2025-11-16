// 函数: sub_499d72
// 地址: 0x499d72
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
char* result = arg5
int32_t edi
int32_t var_10 = edi

if (arg5 != 0)
    if (result == 1)
        int32_t ecx_8 = *(arg2 + 4)
        result = (zx.d(*(arg2 + 0xb)) + 7) s>> 3
        char* esi_5 = result + arg3
        
        if (result u< ecx_8)
            char* edx_10 = esi_5 - result
            void* i_6 = ecx_8 - result
            void* i
            
            do
                result.b = *edx_10
                *esi_5 += result.b
                esi_5 = &esi_5[1]
                edx_10 = &edx_10[1]
                i = i_6
                i_6 -= 1
            while (i != 1)
    else if (result == 2)
        int32_t esi_4 = *(arg2 + 4)
        result = arg3
        char* ecx_7 = nullptr
        
        if (esi_4 u> 0)
            do
                char* edx_7
                edx_7.b = *(ecx_7 + arg4)
                *result += edx_7.b
                result = &result[1]
                ecx_7 = &ecx_7[1]
            while (ecx_7 u< esi_4)
    else if (result == 3)
        char* esi_3 = arg3
        char* edi_2 = arg4
        result = (zx.d(*(arg2 + 0xb)) + 7) s>> 3
        void* i_5 = *(arg2 + 4) - result
        char* ebx_4 = esi_3
        
        if (result u> 0)
            char* i_1
            
            do
                *esi_3 += *edi_2 u>> 1
                edi_2 = &edi_2[1]
                esi_3 = &esi_3[1]
                i_1 = result
                result -= 1
            while (i_1 != 1)
        
        if (i_5 u> 0)
            void* i_2
            
            do
                int32_t eax_16
                int32_t edx_6
                edx_6:eax_16 = sx.q(zx.d(*ebx_4) + zx.d(*edi_2))
                result = (eax_16 - edx_6) s>> 1
                *esi_3 += result.b
                ebx_4 = &ebx_4[1]
                edi_2 = &edi_2[1]
                esi_3 = &esi_3[1]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else if (result == 4)
        char* edx_1 = arg3
        char* edi_1 = arg4
        result = (zx.d(*(arg2 + 0xb)) + 7) s>> 3
        void* ecx_3 = *(arg2 + 4) - result
        arg5 = edx_1
        arg3 = edx_1
        arg4 = edi_1
        
        if (result u> 0)
            char* esi_1 = result
            char* i_3
            
            do
                result.b = *edi_1
                *edx_1 += result.b
                edi_1 = &edi_1[1]
                edx_1 = &edx_1[1]
                i_3 = esi_1
                esi_1 -= 1
            while (i_3 != 1)
            arg5 = edx_1
        
        if (ecx_3 u> 0)
            arg1 = ecx_3
            void* i_4
            
            do
                uint32_t ecx_4 = zx.d(*arg3)
                uint32_t eax_8 = zx.d(*edi_1)
                uint32_t esi_2 = zx.d(*arg4)
                arg3 = &arg3[1]
                edi_1 = &edi_1[1]
                arg4 = &arg4[1]
                uint32_t eax_9 = eax_8 - esi_2
                uint32_t edx_4 = ecx_4 - esi_2
                
                if (eax_9 s>= 0)
                    arg2 = eax_9
                else
                    arg2 = neg.d(eax_9)
                
                uint32_t ebx_3 = edx_4
                
                if (edx_4 s< 0)
                    ebx_3 = neg.d(ebx_3)
                
                uint32_t eax_10 = eax_9 + edx_4
                
                if (eax_9 + edx_4 s< 0)
                    eax_10 = neg.d(eax_10)
                
                if (arg2 s> ebx_3 || arg2 s> eax_10)
                    ecx_4 = eax_8
                    
                    if (ebx_3 s> eax_10)
                        ecx_4 = esi_2
                
                *arg5 += ecx_4.b
                result = &arg5[1]
                i_4 = arg1
                arg1 -= 1
                arg5 = result
            while (i_4 != 1)
    else
        sub_46693e(arg1, "Ignoring bad adaptive filter type")
        result = arg3
        *result = 0

return result
