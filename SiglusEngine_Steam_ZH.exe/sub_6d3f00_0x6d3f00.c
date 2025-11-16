// 函数: sub_6d3f00
// 地址: 0x6d3f00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *(arg1 + 0x124)

if (edx == 0)
    sub_6d42e0(arg1, "NULL row buffer")
    noreturn

int32_t eax = *(arg1 + 0x78)

if ((eax & 0x4000) != 0 && (eax.b & 0x40) == 0)
    sub_6d42e0(arg1, "Uninitialized row")
    noreturn

uint32_t eax_1 = *(arg1 + 0x7c)

if ((eax_1 & 0x1000) != 0)
    if (arg2[2].b != 3)
        uint32_t var_c_2
        
        if (*(arg1 + 0x148) == 0 || (eax_1 & &data_2000000) == 0)
            var_c_2 = 0
        else
            eax_1 = arg1 + 0x1b0
            var_c_2 = eax_1
        
        sub_6d3940(eax_1, edx + 1, arg2, var_c_2)
    else
        uint32_t eax_2 = zx.d(*(arg1 + 0x148))
        sub_6d3740(eax_2, edx + 1, arg2, *(arg1 + 0x13c), *(arg1 + 0x1ac), eax_2)

char* eax_3 = *(arg1 + 0x7c)

if ((eax_3 & 0x40000) != 0 && eax_3.b s>= 0)
    eax_3.b = arg2[2].b
    
    if (eax_3.b == 6 || eax_3.b == 4)
        eax_3 = sub_6cf370(eax_3, *(arg1 + 0x124) + 1, arg2, 0)

if ((*(arg1 + 0x7c) & 0x600000) != 0)
    char* eax_5 = *(arg1 + 0x124) + 1
    eax_3 = sub_6d1d50(eax_5, arg2, arg1, eax_5)
    
    if (eax_3 != 0)
        int32_t eax_7 = *(arg1 + 0x7c) & 0x600000
        *(arg1 + 0x240) = 1
        
        if (eax_7 == &__dos_header)
            sub_6d4470(arg1, "png_do_rgb_to_gray found nongray pixel")
        
        eax_3 = *(arg1 + 0x7c) & 0x600000
        
        if (eax_3 == 0x200000)
            sub_6d42e0(arg1, "png_do_rgb_to_gray found nongray pixel")
            noreturn

if ((*(arg1 + 0x7c) & 0x4000) != 0 && (*(arg1 + 0x74) & 0x800) == 0)
    eax_3 = sub_6d1bc0(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x80) != 0)
    sub_6d2170(eax_3, *(arg1 + 0x124) + 1, arg2, arg1)

int32_t eax_9 = *(arg1 + 0x7c)

if ((eax_9 & 0x2000) != 0 && (eax_9 & 0x600000) == 0)
    if (eax_9.b s>= 0)
    label_6d4060:
        
        if (*(arg1 + 0x14f) != 3)
            sub_6d3260(eax_9, *(arg1 + 0x124) + 1, arg2, arg1)
    else if (*(arg1 + 0x148) == 0 && (*(arg1 + 0x14f) & 4) == 0)
        goto label_6d4060

uint32_t eax_10 = *(arg1 + 0x7c)

if ((eax_10 & 0x40000) != 0 && eax_10.b s< 0)
    eax_10.b = arg2[2].b
    
    if (eax_10.b == 6 || eax_10.b == 4)
        eax_10 = sub_6cf370(eax_10, *(arg1 + 0x124) + 1, arg2, 0)

if ((*(arg1 + 0x7c) & 0x800000) != 0 && (arg2[2].b & 4) != 0)
    eax_10 = sub_6d3650(eax_10, *(arg1 + 0x124) + 1, arg2, arg1)

if ((*(arg1 + 0x7c) & &data_4000000) != 0)
    eax_10 = sub_6d1670(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x400) != 0)
    eax_10 = sub_6d16d0(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x40) != 0)
    eax_10 = sub_6d3d90(eax_10, *(arg1 + 0x124) + 1, arg2, *(arg1 + 0x200), *(arg1 + 0x204))
    
    if (arg2[1] == 0)
        sub_6d42e0(arg1, "png_do_quantize returned rowbytes=0")
        noreturn

if ((*(arg1 + 0x7c) & 0x200) != 0)
    eax_10 = sub_6d3d40(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x4000) != 0 && (*(arg1 + 0x74) & 0x800) != 0)
    eax_10 = sub_6d1bc0(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x20) != 0)
    eax_10 = sub_6cf230(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x80000) != 0)
    eax_10 = sub_6d1860(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 8) != 0)
    eax_10 = sub_6d1440(arg1 + 0x1a5, *(arg1 + 0x124) + 1, arg2, arg1 + 0x1a5)

if ((*(arg1 + 0x7c) & 4) != 0)
    eax_10 = sub_6d1320(arg2, *(arg1 + 0x124) + 1)

if (arg2[2].b == 3 && *(arg1 + 0x144) s>= 0)
    eax_10 = sub_6cf5b0(arg1, arg2)

if ((*(arg1 + 0x7c) & 1) != 0)
    eax_10 = sub_6cf4f0(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x10000) != 0)
    eax_10 = sub_6cf310(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x8000) != 0)
    uint32_t eax_12 = zx.d(*(arg1 + 0x158))
    eax_10 = sub_6d1910(eax_12, *(arg1 + 0x124) + 1, arg2, eax_12, (*(arg1 + 0x78)).b)

if ((*(arg1 + 0x7c) & 0x20000) != 0)
    eax_10 = sub_6d1730(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x10) != 0)
    eax_10 = sub_6cf2e0(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x100000) != 0)
    int32_t ecx_25 = *(arg1 + 0x64)
    
    if (ecx_25 != 0)
        ecx_25(arg1, arg2, *(arg1 + 0x124) + 1)
    
    eax_10.b = *(arg1 + 0x70)
    
    if (eax_10.b != 0)
        *(arg2 + 9) = eax_10.b
    
    eax_10.b = *(arg1 + 0x71)
    
    if (eax_10.b != 0)
        *(arg2 + 0xa) = eax_10.b
    
    eax_10.b = *(arg2 + 0xa)
    eax_10.w = muls.dp.b(eax_10.b, *(arg2 + 9))
    *(arg2 + 0xb) = eax_10.b
    uint32_t eax_15 = zx.d(eax_10.b)
    
    if (eax_10.b u>= 8)
        int32_t eax_17 = (eax_15 u>> 3) * *arg2
        arg2[1] = eax_17
        return eax_17
    
    eax_10 = (eax_15 * *arg2 + 7) u>> 3
    arg2[1] = eax_10

return eax_10
