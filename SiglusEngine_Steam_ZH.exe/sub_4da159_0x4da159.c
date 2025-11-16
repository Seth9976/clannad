// 函数: sub_4da159
// 地址: 0x4da159
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t edi
int32_t var_10 = edi
*(zx.d(arg1[0x14].w) + *arg1) = arg3.b
arg1[0x14].w += 1

if (arg2 != 0)
    void* ecx_2 = &arg1[zx.d(*(arg1 + arg3 + 0x1b85)) + 0x12f]
    *ecx_2 += 1
    uint32_t ecx_3
    
    if (arg2 - 1 s>= 0x100)
        ecx_3 = zx.d(*(((arg2 - 1) s>> 7) + arg1 + 0x1d85))
    else
        ecx_3 = zx.d(*(arg1 + arg2 - 1 + 0x1c85))
    
    arg1[ecx_3 + 0x26b].w += 1
    *(arg1[2] + (zx.d(*(arg1 + 0x52)) << 1)) = (arg2 - 1).w
    uint32_t ecx_7
    ecx_7.b = *(arg1 + 0x57)
    *(arg1 + 0x52) += 1
    *(arg1 + 0x56) |= ecx_7.b
else
    arg1[arg3 + 0x2e].w += 1

*(arg1 + 0x57) <<= 1

if ((arg1[0x14].b & 7) == 0)
    arg2.b = *(arg1 + 0x56)
    *(zx.d(arg1[0x15].w) + arg1 + 0x1f74) = arg2.b
    arg1[0x15].w += 1
    *(arg1 + 0x56) = 0
    *(arg1 + 0x57) = 1

uint32_t esi
esi.w = arg1[0x14].w

if ((esi.w & 0xfff) != 0)
label_4da259:
    
    if (esi.w != 0x7fff && *(arg1 + 0x52) != 0x8000)
        return 0
else
    uint32_t ecx_10 = zx.d(esi.w) << 3
    void* const i = &data_acd9c0
    esi = &arg1[0x26b]
    
    do
        int32_t edi_3 = *i
        i += 4
        ecx_10 += (edi_3 + 5) * zx.d(*esi)
        esi += 4
    while (i s< 0xacda38)
    
    esi.w = arg1[0x14].w
    int32_t edi_5
    edi_5.w = esi.w
    edi_5.w u>>= 1
    
    if (*(arg1 + 0x52) u>= edi_5.w
            || (ecx_10 u>> 2 & 0x3ffffffe) u>= ((zx.d(arg1[0x11].w) - arg1[0xf]) & 0xfffffffe))
        goto label_4da259

return 1
