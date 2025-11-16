// 函数: sub_42a1f0
// 地址: 0x42a1f0
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
            int32_t eax_5
            eax_5.b = *edi
            int32_t eax_7
            eax_7.b = edi[1]
            int32_t eax_9
            eax_9.b = edi[2]
            uint32_t edx_3 =
                (*(eax_2 + (eax_5 << 2)) + *(eax_1 + (eax_7 << 2)) + *(eax + (eax_9 << 2))) u>> 8
            int32_t eax_11
            eax_11.b = *edi
            int32_t eax_15 = *(eax_4 + ((eax_11 - edx_3) << 2)) + edx_3
            
            if ((eax_15 & 0x80000000) != 0)
                eax_15 = 0
            else if ((eax_15 & 0x7fffff00) != 0)
                eax_15 = 0xff
            
            *edi = eax_15.b
            int32_t eax_16
            eax_16.b = edi[1]
            int32_t eax_20 = *(eax_4 + ((eax_16 - edx_3) << 2)) + edx_3
            
            if ((eax_20 & 0x80000000) != 0)
                eax_20 = 0
            else if ((eax_20 & 0x7fffff00) != 0)
                eax_20 = 0xff
            
            edi[1] = eax_20.b
            int32_t eax_21
            eax_21.b = edi[2]
            result = *(eax_4 + ((eax_21 - edx_3) << 2)) + edx_3
            
            if ((result & 0x80000000) != 0)
                result = 0
            else if ((result & 0x7fffff00) != 0)
                result = 0xff
            
            edi[2] = result.b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
