// 函数: sub_4a4e90
// 地址: 0x4a4e90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ebx = arg3
int32_t* result_1 = arg2
int32_t* esi = arg2
int32_t* i_3 = arg7
int32_t* edi = arg4

if (i_3 s> 0)
    int32_t* i_2 = i_3
    int32_t* i
    
    do
        sub_4d6c40(esi, edi)
        esi += arg5
        edi += arg6
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_3 = arg7

int32_t* result = sub_4a4ca0(i_3, i_3, ebx, arg8)
int32_t* ecx_2 = result
arg7 = ecx_2

if (ecx_2 != 0)
    int32_t* edi_1 = arg4
    result = result_1
    int32_t* i_1
    
    do
        if (*ebx != 0)
            char* eax_1 = ebx
            int32_t esi_1 = 0
            
            do
                ecx_2.b = *eax_1
                
                if (ecx_2.b u< 0x80)
                    esi_1 += 1
                    eax_1 = &eax_1[1]
                else if (ecx_2.b u< 0xa0)
                    if (ecx_2.b u>= 0xfe)
                        esi_1 += 1
                        eax_1 = &eax_1[1]
                    else
                        esi_1 += 2
                        eax_1 = &eax_1[2]
                else if (ecx_2.b u<= 0xdf || ecx_2.b u>= 0xfe)
                    esi_1 += 1
                    eax_1 = &eax_1[1]
                else
                    esi_1 += 2
                    eax_1 = &eax_1[2]
            while (*eax_1 != 0)
            
            sub_4d1c30(sub_4d6960(eax_1, edi_1, result_1, esi_1 + 1, arg9), ebx, *edi_1, esi_1 + 1)
            int32_t edx_4 = 0
            char* eax_3 = ebx
            
            if (*ebx != 0)
                do
                    char ecx_5 = *eax_3
                    
                    if (ecx_5 u< 0x80)
                        edx_4 += 1
                        eax_3 = &eax_3[1]
                    else if (ecx_5 u< 0xa0)
                        if (ecx_5 u>= 0xfe)
                            edx_4 += 1
                            eax_3 = &eax_3[1]
                        else
                            edx_4 += 2
                            eax_3 = &eax_3[2]
                    else if (ecx_5 u<= 0xdf || ecx_5 u>= 0xfe)
                        edx_4 += 1
                        eax_3 = &eax_3[1]
                    else
                        edx_4 += 2
                        eax_3 = &eax_3[2]
                while (*eax_3 != 0)
            
            ecx_2 = arg7
            ebx = &ebx[edx_4 + 1]
            result = result_1
        else
            ebx = &ebx[1]
        
        result += arg5
        edi_1 += arg6
        i_1 = ecx_2
        ecx_2 -= 1
        result_1 = result
        arg7 = ecx_2
    while (i_1 != 1)

return result
