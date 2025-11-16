// 函数: sub_4bde10
// 地址: 0x4bde10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18 = 0
uint32_t eax = zx.d(*arg3)
uint32_t ebx = *(arg3 + 0x14)
int32_t edi = *(arg3 + 4)
uint32_t eax_1 = zx.d(arg3[1])
BOOL var_10 = 0
sub_4d6960(eax_1, &var_10, &var_18, ebx, "NWK_WAVE")
uint32_t edx_1 = ebx
uint32_t var_8

if (edi != 0x10)
    var_8 = ebx
else
    edx_1 s>>= 1
    var_8 = edx_1

int32_t eax_2 = *(arg3 + 0x10)
int32_t edi_1 = 0
BOOL ebx_1 = var_10
uint32_t ecx_3

if (eax_2 s<= 0)
    ecx_3 = eax_1
else
    do
        int32_t eax_4
        
        if (edi_1 != eax_2 - 1)
            eax_4 = *(arg3 + 0x20)
        else
            eax_4 = *(arg3 + 0x24)
        
        void* ecx_1 = *(arg3 + (edi_1 << 2) + 0x2c)
        int32_t eax_5
        int32_t var_14
        
        if (ecx_1 == neg.d(arg3))
            eax_5 = 0
            var_14 = 0
        else
            sub_4bbec0(eax_4, eax_4, ecx_1 + arg3, eax.w, eax_1.w, *(arg3 + 8), *(arg3 + 0xc), 0, 
                var_8, ebx_1, &var_14)
            eax_5 = var_14
            edx_1 = var_8
        ecx_3 = eax_1
        edx_1 -= eax_5
        var_8 = edx_1
        
        if (ecx_3 != 0x10)
            ebx_1 += eax_5
        else
            ebx_1 += eax_5 << 1
        
        eax_2 = *(arg3 + 0x10)
        edi_1 += 1
    while (edi_1 s< eax_2)

*arg2 = var_18
*arg4 = var_10
*arg5 = ebx
*arg6 = eax
*arg7 = ecx_3
*arg8 = edi
return arg8
