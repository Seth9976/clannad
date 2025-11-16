// 函数: sub_429b11
// 地址: 0x429b11
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t result = 0
int32_t* esi = arg1
int32_t* ecx_1 = *esi
int32_t* edx = ecx_1[4]
int32_t eax = *ecx_1
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = ecx_1[1]
arg1 = 1

if (edx u>= 1)
    arg1 = edx

if (edi_1 s>= 0)
    if (edi_1 s<= 3)
        if (eax == 1 || eax == 2 || eax == 3)
            *arg2 += (ecx_1[6] * ecx_1[5] * arg1) << 2
            *esi += 0x1c
            return result
    else if (edi_1 == 4)
        if (eax s>= 4)
            if (eax s<= 9)
            label_429baa:
                int32_t* i_2 = arg1
                
                if (i_2 != 0)
                    int32_t* i
                    
                    do
                        **arg3 = **arg2
                        *arg3 += 4
                        *arg2 += 4
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                *esi += 0x14
                return result
            
            if (eax s> 0xe && eax s<= 0x10)
                goto label_429baa
    else if (edi_1 == 5)
        int32_t ebx_1 = ecx_1[5]
        *esi = &ecx_1[6]
        
        if (arg1 != 0)
            int32_t* i_1
            
            do
                int32_t var_c_1 = 0
                *esi = &ecx_1[6]
                
                if (ebx_1 u> 0)
                    do
                        int32_t result_1 = sub_429b11(esi, arg2, arg3)
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        var_c_1 += 1
                    while (var_c_1 u< ebx_1)
                
                i_1 = arg1
                arg1 -= 1
            while (i_1 != 1)
        
        return result

return 0x80004005
