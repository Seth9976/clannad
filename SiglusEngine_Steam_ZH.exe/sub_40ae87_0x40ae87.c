// 函数: sub_40ae87
// 地址: 0x40ae87
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
int32_t eax = sub_745f3f(arg3)

if (eax != 0)
    int32_t edi
    int32_t var_10_1 = edi
    __builtin_memset(__builtin_memset(eax, 0, arg3 u>> 2 << 2), 0, arg3 & 3)
    char* edi_3 = nullptr
    
    if (arg3 u> 0)
        do
            if (edi_3[eax] == 0)
                char* esi_1 = *(arg1 + (edi_3 << 2))
                
                if (esi_1 != 0xffffffff)
                    do
                        if (esi_1 == edi_3)
                            sub_40ae51(edi_3, arg1, arg2)
                            break
                        
                        sub_40ae18(edi_3, esi_1, arg2)
                        sub_40ae51(esi_1, arg1, arg2)
                        esi_1[eax] = 1
                        esi_1 = *(arg1 + (esi_1 << 2))
                        
                        if (esi_1 == 0xffffffff)
                            break
                    while (esi_1[eax] == 0)
            
            edi_3 = &edi_3[1]
        while (edi_3 u< arg3)
else
    result = 0x8007000e

j__free(eax)
return result
