// 函数: sub_4cfdf0
// 地址: 0x4cfdf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg3
char* edi = arg2

if (arg4 s<= 0)
    return 0

int32_t result = sub_4cfc80(edi)

if (result s< arg4)
    if (result s> 0)
        void* edi_1 = edi - esi
        int32_t ecx_3 = result
        int32_t i
        
        do
            int32_t eax_1
            eax_1.b = *(edi_1 + esi)
            *esi = eax_1.b
            esi = &esi[1]
            i = ecx_3
            ecx_3 -= 1
        while (i != 1)
    
    *esi = 0
    return result

int32_t eax_3 = arg4 - 1
int32_t edx = 0

if (eax_3 != 0)
    do
        char ecx_1 = *edi
        
        if (ecx_1 u< 0x80)
        label_4cfe73:
            *esi = ecx_1
            edi = &edi[1]
            esi = &esi[1]
            edx += 1
        else
            if (ecx_1 u< 0xa0)
                if (ecx_1 u>= 0xfe)
                    goto label_4cfe73
            else if (ecx_1 u<= 0xdf || ecx_1 u>= 0xfe)
                goto label_4cfe73
            
            if (edx == arg4 - 2)
                break
            
            *esi = ecx_1
            int32_t eax_4
            eax_4.b = edi[1]
            edi = &edi[2]
            esi[1] = eax_4.b
            esi = &esi[2]
            edx += 2
            eax_3 = arg4 - 1
    while (edx != eax_3)

*esi = 0
return edx + 1
