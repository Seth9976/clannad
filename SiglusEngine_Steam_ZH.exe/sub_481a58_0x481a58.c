// 函数: sub_481a58
// 地址: 0x481a58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_c = edi
int32_t result = 0
char* var_8_1 = nullptr

if (*(arg4 + 4) != 0xd)
    return 0

void* esi_1 = *(arg4 + 0x20)

if (*(esi_1 + 4) == 1)
    int32_t ebx_2 = arg2 << 4
    char* eax_1 = sub_745f3f(ebx_2)
    var_8_1 = eax_1
    
    if (eax_1 != 0)
        __builtin_memset(__builtin_memset(eax_1, 0, ebx_2 u>> 2 << 2), 0, ebx_2 & 3)
        char* eax_2 = arg2
        
        if (eax_2 u> 0)
            arg2 = var_8_1
            arg4 = eax_2
            char* i
            
            do
                int32_t j_1 = arg3
                
                if (j_1 u> 0)
                    char* ecx_7 = arg2
                    int32_t j
                    
                    do
                        void* eax_3 = *(esi_1 + 8)
                        
                        if (*(eax_3 + 0x10) != 3)
                            *ecx_7 = *(eax_3 + 0x18)
                        else
                            *ecx_7 = fconvert.s(fconvert.t(*(eax_3 + 0x18)))
                        
                        esi_1 = *(esi_1 + 0xc)
                        ecx_7 = &ecx_7[4]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                arg2 = &arg2[0x10]
                i = arg4
                arg4 -= 1
            while (i != 1)
        
        result = sub_4c6c51(arg1, var_8_1, ebx_2, 6, arg5)
    else
        result = 0x8007000e

j__free(var_8_1)
return result
