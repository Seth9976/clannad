// 函数: sub_6436e0
// 地址: 0x6436e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = arg5 << 3
int32_t eax = arg4 << 3

if (eax s<= 0 || edx_1 s<= 0)
    eax.b = 0
    return eax

arg3[3] = eax
arg3[4] = edx_1
sub_5979b0(arg3, (eax * edx_1) << 2)
int32_t* ecx = arg3
char* edi = arg6
int32_t i_1 = 8
int32_t eax_4 = ecx[3] - 1
int32_t eax_6 = ecx[4] - 1
int32_t eax_7 = *ecx

if (eax_7 == ecx[1])
    eax_7 = 0

int32_t ebx = 0
int32_t eax_10 = arg5 - 1
int32_t var_2c = eax_10
int32_t i

do
    int32_t edx_2 = eax_10 + ebx
    int32_t j_1 = 8
    uint32_t esi_1 = 0
    int32_t var_28_1 = edx_2
    int32_t j
    
    do
        int32_t var_3c_1 = eax_6
        int32_t var_40_1 = eax_4
        int32_t var_44_1 = 0
        int32_t var_48_1 = 0
        uint32_t eax_13 = arg4 - 1 + esi_1
        sub_64d0a0(eax_13, ecx[3], eax_7, ecx[4], esi_1, ebx, eax_13, edx_2, *edi, arg2)
        esi_1 += arg4
        ecx = arg3
        edi = &edi[1]
        j = j_1
        j_1 -= 1
        edx_2 = var_28_1
    while (j != 1)
    ebx += arg5
    i = i_1
    i_1 -= 1
    eax_10 = var_2c
while (i != 1)
eax_10.b = 1
return eax_10
