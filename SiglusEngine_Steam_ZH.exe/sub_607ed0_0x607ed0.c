// 函数: sub_607ed0
// 地址: 0x607ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* ebx = arg1
int32_t* var_8_1 = ebx

if (*ebx == 0 || ebx[0xc].b != 0)
    arg1.b = 1
else
    arg1.b = 0

char edx

if (*arg2 == 0 || arg2[0xc].b != 0)
    edx = 1
else
    edx = 0

if (arg1.b != 0 || edx != 0)
    int32_t eax_1
    eax_1.b = arg1.b == edx
    return eax_1

char* eax = arg2[8]
int32_t ecx = ebx[9]
char* edx_1 = ebx[8]

if (ecx - edx_1 == arg2[9] - eax)
    if (edx_1 != ecx)
        eax -= edx_1
        
        do
            ebx.b = *edx_1
            
            if (ebx.b != *(eax + edx_1))
                goto label_607f53
            
            edx_1 = &edx_1[1]
        while (edx_1 != ecx)
        
        ebx = var_8_1
    
    if (ebx[0xa] == arg2[0xa] && ebx[0xb] == arg2[0xb])
        eax.b = 1
        return eax

label_607f53:
eax.b = 0
return eax
