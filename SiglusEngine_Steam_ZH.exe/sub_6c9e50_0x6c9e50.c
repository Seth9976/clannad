// 函数: sub_6c9e50
// 地址: 0x6c9e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 == 0 || arg2 == 0)
    return 

int32_t* i_2 = sub_6c9cf0(arg1, arg2)

if ((arg2[2].b & 8) != 0)
    uint32_t eax_1 = zx.d(arg2[5].w)
    i_2 = sub_6d5630(eax_1, arg2[4], arg1, eax_1)
else if (*(arg2 + 0x19) == 3)
    sub_6d42e0(arg1, "Valid palette required for paletted images")
    noreturn

if ((arg2[2].b & 0x10) != 0)
    if ((*(arg1 + 0x7c) & 0x80000) != 0 && *(arg2 + 0x19) == 3)
        uint32_t edx_1 = zx.d(*(arg2 + 0x16))
        
        if (edx_1 s> 0x100)
            edx_1 = 0x100
        
        int32_t i = 0
        
        if (edx_1 s> 0)
            int128_t* eax_2
            
            if (edx_1 u>= 0x20)
                int32_t eax_4 = edx_1 & 0x8000001f
                
                if (eax_4 s< 0)
                    eax_4 = ((eax_4 - 1) | 0xffffffe0) + 1
                
                int32_t xmm2_1[0x4] = data_b0dbf0
                int128_t* edi_1 = arg2[0x27]
                eax_2 = arg2[0x27] + 0x10
                
                do
                    *(edi_1 + i) = _mm_sub_epi8(xmm2_1, *(edi_1 + i))
                    i += 0x20
                    *eax_2 = _mm_sub_epi8(xmm2_1, *eax_2)
                    eax_2 = &eax_2[2]
                while (i s< edx_1 - eax_4)
            
            if (i s< edx_1)
                char* ebx_3 = arg2[0x27]
                
                do
                    eax_2.b = 0xff
                    eax_2.b = 0xff - ebx_3[i]
                    ebx_3[i] = eax_2.b
                    i += 1
                while (i s< edx_1)
    
    i_2 = sub_6d6000(&arg2[0x28], arg2[0x27], arg1, &arg2[0x28], zx.d(*(arg2 + 0x16)), 
        zx.d(*(arg2 + 0x19)))

if ((arg2[2].b & 0x20) != 0)
    uint32_t eax_11 = zx.d(*(arg2 + 0x19))
    i_2 = sub_6d61c0(eax_11, arg2 + 0xaa, arg1, eax_11)

if ((arg2[2].b & 0x40) != 0)
    uint32_t eax_12 = zx.d(arg2[5].w)
    i_2 = sub_6d63b0(eax_12, arg2[0x33], arg1, eax_12)

if ((arg2[2] & 0x100) != 0)
    uint32_t eax_13 = zx.d(arg2[0x2f].b)
    i_2 = sub_6d6910(eax_13, arg2[0x2d], arg1, arg2[0x2e], eax_13)

if ((arg2[2] & 0x400) != 0)
    uint32_t eax_15 = zx.d(arg2[0x39].b)
    i_2 = sub_6d69d0(eax_15, arg2[0x34], arg1, arg2[0x35], arg2[0x36], eax_15, 
        zx.d(*(arg2 + 0xe5)), arg2[0x37], arg2[0x38])

if ((arg2[2] & 0x4000) != 0)
    i_2 = sub_6d6ca0(i_2, arg2[0x3f].b, arg1, arg2[0x40], arg2[0x41])

if ((arg2[2].b & 0x80) != 0)
    uint32_t eax_16 = zx.d(arg2[0x32].b)
    i_2 = sub_6d6da0(eax_16, arg2[0x30], arg1, arg2[0x31], eax_16)

if ((arg2[2] & 0x200) != 0)
    i_2 = sub_6d6e60(arg1, &arg2[0x23])
    *(arg1 + 0x74) |= 0x200

if ((arg2[2] & 0x2000) != 0)
    int32_t i_1 = 0
    
    if (arg2[0x3e] s> 0)
        i_2 = nullptr
        int32_t* i_3 = nullptr
        
        do
            sub_6d5bc0(arg1, arg2[0x3d] + i_2)
            i_1 += 1
            i_2 = &i_3[4]
            i_3 = i_2
        while (i_1 s< arg2[0x3e])

int32_t* i_4 = nullptr

if (arg2[0x20] s> 0)
    int32_t* ebx_4 = nullptr
    int32_t ecx_11 = arg2[0x22]
    
    do
        int32_t eax_18 = *(ebx_4 + ecx_11)
        
        if (eax_18 s> 0)
            sub_6d66a0(eax_18, eax_18, arg1, *(ebx_4 + ecx_11 + 4), *(ebx_4 + ecx_11 + 0x14), 
                *(ebx_4 + ecx_11 + 0x18), *(ebx_4 + ecx_11 + 8))
            ecx_11 = arg2[0x22]
            int32_t eax_19
            eax_19.b = *(ebx_4 + ecx_11) != 0xffffffff
            *(ebx_4 + ecx_11) = eax_19 - 3
        else if (eax_18 == 0)
            sub_6d6570(eax_18, *(ebx_4 + ecx_11 + 4), arg1, *(ebx_4 + ecx_11 + 8), eax_18)
            ecx_11 = arg2[0x22]
            *(ebx_4 + ecx_11) = 0xfffffffe
        else if (eax_18 == 0xffffffff)
            int32_t var_18_10 = ecx_11
            sub_6d6480(eax_18, *(ebx_4 + ecx_11 + 4), arg1, *(ebx_4 + ecx_11 + 8))
            ecx_11 = arg2[0x22]
            *(ebx_4 + ecx_11) = 0xfffffffd
        
        ebx_4 = &ebx_4[7]
        i_2 = i_4 + 1
        i_4 = i_2
    while (i_2 s< arg2[0x20])

sub_6c9bc0(i_2, arg2, arg1, 2)
