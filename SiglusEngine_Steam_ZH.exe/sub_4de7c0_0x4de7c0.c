// 函数: sub_4de7c0
// 地址: 0x4de7c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax = arg3
int32_t edi
int32_t var_10 = edi
int32_t var_8_1 = arg5
int32_t edx

if (eax s>= arg5)
    edx = arg2
else
    if (sub_4de6a0(arg1, arg2, eax, arg5) == 0)
        return 0xffffffff
    
    edx = arg1[2]
    eax = arg1[3]

int32_t eax_4 = eax - arg5
int32_t esi
int32_t var_14_2 = esi
int32_t i = edx s>> eax_4.b & ((1 << arg5.b) - 1)
void* ebx_3 = arg4
int32_t ecx_6

if (i s<= *(ebx_3 + (arg5 << 2)))
    ecx_6 = var_8_1
else
    do
        if (eax_4 s< 1)
            if (sub_4de6a0(arg1, edx, eax_4, 1) == 0)
                return 0xffffffff
            
            edx = arg1[2]
            eax_4 = arg1[3]
        
        eax_4 -= 1
        i = i << 1 | (edx s>> eax_4.b & 1)
        ebx_3 = arg4
        ecx_6 = var_8_1 + 1
        var_8_1 = ecx_6
    while (i s> *(ebx_3 + (ecx_6 << 2)))

arg1[2] = edx
arg1[3] = eax_4

if (ecx_6 s<= 0x10)
    return zx.d(*(*(ebx_3 + (ecx_6 << 2) + 0x48) + *(ebx_3 + 0x8c) + i + 0x11))

int32_t* edi_4 = arg1[4]
void* eax_7 = *edi_4
*(eax_7 + 0x14) = 0x76
(*(eax_7 + 4))(edi_4, 0xffffffff)
return 0
