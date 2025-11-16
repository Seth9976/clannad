// 函数: sub_67b820
// 地址: 0x67b820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi = *arg1
int32_t esi = edi
int32_t ecx = arg1[3]
int32_t var_1c = esi
int32_t var_18 = 0
int32_t var_c = ecx

if (ecx != 0)
    sub_67bd10(&var_1c, ((arg3 - edi) s>> 2 << 5) + arg4)
    ebx = var_18
    esi = var_1c
    ecx = var_c

int32_t edx = 0
int32_t var_24 = edi
int32_t var_20 = 0

if (ecx != 0)
    sub_67bd10(&var_24, ((arg5 - edi) s>> 2 << 5) + arg6)
    ecx = var_c
    edx = var_20

int32_t eax_11 = var_1c
int32_t esi_4 = ((esi - edi) s>> 2 << 5) + ebx
int32_t* edi_1

if (eax_11 != var_24 || ebx != edx)
    int32_t* edx_1 = nullptr
    int32_t var_10 = edi
    int32_t* var_c_1 = nullptr
    
    if (ecx != 0)
        sub_67bd10(&var_10, ecx)
        edx_1 = var_c_1
        edi = var_10
        eax_11 = var_1c
    
    int32_t var_34_4 = ebx
    sub_67bef0(eax_11, edx_1, &var_24, arg2, var_24, var_20, edi, edx_1, eax_11)
    edi_1 = arg1
    sub_67bca0(edi_1, ((var_24 - *edi_1) s>> 2 << 5) + var_20)
else
    edi_1 = arg1

int32_t edx_2 = *edi_1
arg4 = 0

if (esi_4 s< 0 && neg.d(esi_4) != 0)
    *arg2 = edx_2 + 0xfffffffc - ((0xffffffff - esi_4) u>> 5 << 2)
    arg2[1] = esi_4 & 0x1f
    return arg2

arg2[1] = esi_4 & 0x1f
*arg2 = edx_2 + (esi_4 u>> 5 << 2)
return arg2
