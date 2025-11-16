// 函数: sub_4e13e0
// 地址: 0x4e13e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx = arg1[9]
int32_t edi
int32_t var_c = edi
int32_t i_1 = arg1[0x1c]
int32_t result = arg5 - 1
int32_t i_2 = i_1

if (arg5 - 1 s>= 0)
    void* ebx
    void* var_10_1 = ebx
    arg5 = result + 1
    arg1 = arg3 << 2
    result = 4
    bool cond:1_1
    
    do
        int32_t esi_1 = 0
        
        if (edx s> 0)
            void* ecx_4 = *arg4
            
            do
                char* eax_6 = *(arg1 + *(arg2 + (esi_1 << 2)))
                char* ecx_7 = ecx_4 + esi_1
                
                if (i_1 u> 0)
                    int32_t i
                    
                    do
                        ebx.b = *eax_6
                        *ecx_7 = ebx.b
                        eax_6 = &eax_6[1]
                        ecx_7 = &ecx_7[edx]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    i_1 = i_2
                
                esi_1 += 1
            while (esi_1 s< edx)
            
            result = 4
        
        cond:1_1 = arg5 != 1
        arg1 = &arg1[1]
        arg4 = &arg4[1]
        arg5 -= 1
    while (cond:1_1)

return result
