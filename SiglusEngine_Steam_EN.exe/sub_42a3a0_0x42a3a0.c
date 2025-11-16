// 函数: sub_42a3a0
// 地址: 0x42a3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1cd4344
int32_t eax_1 = data_1cd4340
int32_t eax_2 = data_1cd433c
void* eax_4 = *(data_1cd4338 + (arg5 << 2) + 0x190)
char* edi = arg3
int32_t i_1 = arg4
int32_t result
int32_t i

do
    int32_t j_1 = arg2
    int32_t j
    
    do
        result.b = edi[3]
        result.b = result.b
        
        if (result.b != 0)
            int32_t eax_8
            eax_8.b = *edi
            int32_t eax_10
            eax_10.b = edi[1]
            int32_t eax_12
            eax_12.b = edi[2]
            uint32_t edx_3 =
                (*(eax_2 + (eax_8 << 2)) + *(eax_1 + (eax_10 << 2)) + *(eax + (eax_12 << 2))) u>> 8
            int32_t eax_14
            eax_14.b = *edi
            int32_t eax_18 = *(eax_4 + ((eax_14 - edx_3) << 2)) + edx_3
            
            if ((eax_18 & 0x80000000) != 0)
                eax_18 = 0
            else if ((eax_18 & 0x7fffff00) != 0)
                eax_18 = 0xff
            
            eax_18.b = *(arg8 + eax_18)
            *edi = eax_18.b
            int32_t eax_19
            eax_19.b = edi[1]
            int32_t eax_23 = *(eax_4 + ((eax_19 - edx_3) << 2)) + edx_3
            
            if ((eax_23 & 0x80000000) != 0)
                eax_23 = 0
            else if ((eax_23 & 0x7fffff00) != 0)
                eax_23 = 0xff
            
            eax_23.b = *(arg7 + eax_23)
            edi[1] = eax_23.b
            int32_t eax_24
            eax_24.b = edi[2]
            result = *(eax_4 + ((eax_24 - edx_3) << 2)) + edx_3
            
            if ((result & 0x80000000) != 0)
                result = 0
            else if ((result & 0x7fffff00) != 0)
                result = 0xff
            
            result.b = *(arg6 + result)
            edi[2] = result.b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
