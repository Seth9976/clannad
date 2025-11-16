// 函数: sub_630d70
// 地址: 0x630d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg3
int32_t* esi = arg4
int32_t eax = *arg1

if (edx == eax && esi == arg1[1])
    arg1[1] = eax
    *arg2 = edx
    return arg2

if (edx != esi)
    int32_t ebx_1 = arg1[1]
    int32_t* ecx = edx
    
    if (esi != ebx_1)
        do
            *ecx = *esi
            int32_t eax_3 = esi[1]
            esi = &esi[2]
            ecx[1] = eax_3
            ecx = &ecx[2]
        while (esi != ebx_1)
        
        edx = arg3
    
    arg1[1] = ecx

*arg2 = edx
return arg2
