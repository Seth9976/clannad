// 函数: sub_571440
// 地址: 0x571440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
char* eax = *(arg1 + 4)
int32_t ebx = 0
char i = *eax
int32_t edi = 1

if (i == 0)
    edi += 1
else
    do
        if (i u< 0x80)
        label_571471:
            
            if (i != 0xd || eax[1] != 0xa)
                if (i != 0xa)
                    ebx = 0
                else
                    edi += 1
                    ebx = 1
                
                eax = &eax[1]
            else
                edi += 1
                ebx = 1
                eax = &eax[2]
        else if (i u< 0xa0)
            if (i u>= 0xfe)
                goto label_571471
            
            ebx = 0
            eax = &eax[2]
        else
            if (i u<= 0xdf || i u>= 0xfe)
                goto label_571471
            
            ebx = 0
            eax = &eax[2]
        
        i = *eax
    while (i != 0)
    
    if (ebx == 0)
        edi += 1

*(arg1 + 0x10) = edi
uint32_t eax_1 = edi << 2
sub_4d6960(eax_1, arg1 + 0xc, arg1 + 8, eax_1, "SDBsource_line")
int32_t* edx_1 = *(arg1 + 0xc)
*edx_1 = 0
void* edx_2 = &edx_1[1]
char* result = *(arg1 + 4)
void* ecx_1
ecx_1.b = *result

while (ecx_1.b != 0)
    if (ecx_1.b u< 0x80)
    label_5714f9:
        
        if (ecx_1.b != 0xd || result[1] != 0xa)
            result = &result[1]
            
            if (ecx_1.b == 0xa)
                *edx_2 = result - *(arg1 + 4)
                edx_2 += 4
        else
            result = &result[2]
            *edx_2 = result - *(arg1 + 4)
            edx_2 += 4
    else if (ecx_1.b u< 0xa0)
        if (ecx_1.b u>= 0xfe)
            goto label_5714f9
        
        result = &result[2]
    else
        if (ecx_1.b u<= 0xdf || ecx_1.b u>= 0xfe)
            goto label_5714f9
        
        result = &result[2]
    
    ecx_1.b = *result

if (ebx == 0)
    result -= *(arg1 + 4)
    *edx_2 = result

return result
