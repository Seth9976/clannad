// 函数: sub_468768
// 地址: 0x468768
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = arg1
ecx.b = edi_1[2].b
int32_t* result = *edi_1

if (ecx.b == 2 && arg3 != 0 && *(edi_1 + 9) == 8)
    char* edx_1 = arg2
    arg2 = edx_1
    
    if (result u> 0)
        arg1 = result
        int32_t* i
        
        do
            char* eax_5
            eax_5.b = (((zx.d(*edx_1) & 0xf8) << 5 | (zx.d(edx_1[1]) & 0xf8)) << 2
                | (zx.d(edx_1[2]) s>> 3 & 0x1f))[arg3]
            char* esi_5 = arg2
            edx_1 = &edx_1[3]
            arg2 = &arg2[1]
            i = arg1
            arg1 -= 1
            *esi_5 = eax_5.b
        while (i != 1)
    
    goto label_4687d5

if (ecx.b == 6 && arg3 != 0 && *(edi_1 + 9) == 8)
    char* edx_4 = arg2
    arg2 = edx_4
    
    if (result u> 0)
        arg1 = result
        int32_t* i_1
        
        do
            char* eax_11
            eax_11.b = (((zx.d(*edx_4) & 0xf8) << 5 | (zx.d(edx_4[1]) & 0xf8)) << 2
                | (zx.d(edx_4[2]) s>> 3 & 0x1f))[arg3]
            char* esi_10 = arg2
            edx_4 = &edx_4[4]
            arg2 = &arg2[1]
            i_1 = arg1
            arg1 -= 1
            *esi_10 = eax_11.b
        while (i_1 != 1)
    
label_4687d5:
    ecx.b = *(edi_1 + 9)
    *(edi_1 + 0xb) = ecx.b
    edi_1[2].b = 3
    *(edi_1 + 0xa) = 1
    edi_1[1] = (zx.d(ecx.b) * result + 7) u>> 3
else if (ecx.b == 3 && arg4 != 0 && *(edi_1 + 9) == 8)
    char* ecx_5 = arg2
    
    if (result u> 0)
        int32_t* i_2
        
        do
            uint32_t edx_8
            edx_8.b = *(zx.d(*ecx_5) + arg4)
            *ecx_5 = edx_8.b
            ecx_5 = &ecx_5[1]
            i_2 = result
            result -= 1
        while (i_2 != 1)

return result
