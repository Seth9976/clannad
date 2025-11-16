// 函数: sub_410460
// 地址: 0x410460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp = 0
void* ebx = *arg2
int32_t esi = arg2[3]
int32_t var_2c = arg2[2]
int32_t var_28 = esi
int32_t eax_1 = sub_40feb0(arg2)
void* eax_2 = sub_40fec0(arg2)
void* var_24 = sub_40fed0(arg2)
void* eax_4 = sub_40fee0(arg2)
int32_t eax_5
int32_t edx
eax_5, edx = sub_40fef0(arg2)
int32_t eax_6 = sub_40ffd0(arg2)
int32_t eax_7 = sub_410000(arg2)
int32_t* ecx
ecx.b = *(ebx + 0x1a)
int32_t eax_8 = arg1[3]
int32_t edi_1 = arg1[9]

if (eax_8 != 0)
    int32_t ecx_1 = arg1[2]
    void* ecx_2 = ecx_1 - eax_8
    arg1[2] = ecx_2
    
    if (ecx_1 != eax_8)
        int32_t* ecx_3 = *arg1
        _memcpy(ecx_3, ecx_3 + eax_8, ecx_2)
    
    arg1[3] = 0

if (edi_1 != 0)
    int32_t ecx_4 = arg1[7]
    
    if (ecx_4 != edi_1)
        int32_t* eax_11 = arg1[4]
        _memcpy(eax_11, &eax_11[edi_1], (edi_1 * 0x3fffffff + ecx_4) << 2)
        int32_t* eax_12 = arg1[5]
        _memcpy(eax_12, &eax_12[edi_1 * 2], (edi_1 * 0x1fffffff + arg1[7]) << 3)
    
    int32_t eax_14 = arg1[8] - edi_1
    arg1[7] -= edi_1
    arg1[8] = eax_14
    arg1[9] = 0

if (eax_6 != arg1[0x54])
    return 0xffffffff

if (eax_1 s> 0)
    return 0xffffffff

sub_4101d0(arg1, ecx + 1)
int32_t* edi_4

if (eax_7 == arg1[0x55])
    edi_4 = ecx
else
    int32_t edx_14 = arg1[8]
    int32_t ecx_11 = arg1[7]
    
    if (edx_14 s< ecx_11)
        int32_t i_1 = ecx_11 - edx_14
        int32_t* eax_23 = arg1[4] + (edx_14 << 2)
        int32_t i
        
        do
            char edi_2 = (*eax_23).b
            eax_23 = &eax_23[1]
            arg1[2] -= zx.d(edi_2)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_24 = arg1[0x55]
    arg1[7] = edx_14
    
    if (eax_24 != 0xffffffff)
        *(arg1[4] + (edx_14 << 2)) = 0x400
        int32_t eax_26 = arg1[8] + 1
        arg1[7] += 1
        arg1[8] = eax_26
    
    if (eax_2 == 0)
        edi_4 = ecx
    else
        edi_4 = ecx
        var_24 = nullptr
        
        if (edi_4 s> 0)
            while (true)
                int32_t eax_28
                eax_28.b = *(ebx + ebp + 0x1b)
                esi -= eax_28
                var_2c += eax_28
                
                if (eax_28 s< 0xff)
                    var_28 = esi
                    ebp += 1
                    break
                
                ebp += 1
                
                if (ebp s>= edi_4)
                    var_28 = esi
                    break

if (esi != 0)
    sub_4101a0(arg1, esi)
    int32_t esi_2
    int32_t edi_7
    edi_7, esi_2 = __builtin_memcpy(arg1[2] + *arg1, var_2c, esi u>> 2 << 2)
    __builtin_memcpy(edi_7, esi_2, esi & 3)
    edi_4 = ecx
    arg1[2] += var_28

int32_t edx_16 = 0xffffffff

if (ebp s< edi_4)
    do
        int32_t eax_33
        eax_33.b = *(ebx + ebp + 0x1b)
        *(arg1[4] + (arg1[7] << 2)) = eax_33
        int32_t ecx_24 = arg1[7]
        int32_t esi_4 = arg1[5]
        *(esi_4 + (ecx_24 << 3)) = 0xffffffff
        *(esi_4 + (ecx_24 << 3) + 4) = 0xffffffff
        
        if (var_24 != 0)
            var_24 = nullptr
            int32_t* ecx_27 = arg1[4] + (arg1[7] << 2)
            *ecx_27 |= 0x100
        
        if (eax_33 s< 0xff)
            edx_16 = arg1[7]
        
        int32_t ecx_29 = arg1[7] + 1
        ebp += 1
        arg1[7] = ecx_29
        
        if (eax_33 s< 0xff)
            arg1[8] = ecx_29
    while (ebp s< edi_4)
    
    if (edx_16 != 0xffffffff)
        int32_t eax_34 = arg1[5]
        *(eax_34 + (edx_16 << 3)) = eax_5
        *(eax_34 + (edx_16 << 3) + 4) = edx

if (eax_4 != 0)
    int32_t eax_36 = arg1[7]
    arg1[0x52] = 1
    
    if (eax_36 s> 0)
        int32_t edx_17 = arg1[4]
        int32_t ecx_32
        ecx_32:1.b = (*(edx_17 + (eax_36 << 2) - 4)):1.b | 2
        *(edx_17 + (eax_36 << 2) - 4) = ecx_32

arg1[0x55] = eax_7 + 1
return 0
