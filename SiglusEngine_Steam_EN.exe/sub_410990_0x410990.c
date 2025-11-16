// 函数: sub_410990
// 地址: 0x410990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[4]

if (*arg1 + 4 s>= eax)
    int32_t eax_2 = _realloc(arg1[2], eax + 0x100)
    int32_t edi_2 = arg1[4] + 0x100
    int32_t ecx_3 = *arg1 + eax_2
    arg1[2] = eax_2
    arg1[4] = edi_2
    arg1[3] = ecx_3

int32_t ebp = arg1[1]
int32_t eax_4 = arg2 & *((arg3 << 2) + &data_63d000)
char* edx_3 = arg1[3]
int32_t ebx
ebx.b = eax_4.b
int32_t edi_4 = arg3 + ebp
ebx.b <<= ebp.b
*edx_3 |= ebx.b

if (edi_4 s>= 8)
    *(arg1[3] + 1) = (eax_4 u>> (8 - (arg1[1]).b)).b
    
    if (edi_4 s>= 0x10)
        *(arg1[3] + 2) = (eax_4 u>> (0x10 - (arg1[1]).b)).b
        
        if (edi_4 s>= 0x18)
            *(arg1[3] + 3) = (eax_4 u>> (0x18 - (arg1[1]).b)).b
            
            if (edi_4 s>= 0x20)
                int32_t edx_10 = arg1[1]
                
                if (edx_10 == 0)
                    *(arg1[3] + 4) = 0
                else
                    *(arg1[3] + 4) = (eax_4 u>> (0x20 - edx_10.b)).b

int32_t eax_8
int32_t edx_12
edx_12:eax_8 = sx.q(edi_4)
int32_t result = (eax_8 + (edx_12 & 7)) s>> 3
int32_t edx_15 = *arg1 + result
int32_t ecx_13 = arg1[3] + result
arg1[1] = edi_4 & 7
*arg1 = edx_15
arg1[3] = ecx_13
return result
