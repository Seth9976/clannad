// 函数: sub_6e5470
// 地址: 0x6e5470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_2c = arg3
int32_t eax = sub_6eb130(arg3, arg2)

if (eax s< 0)
    return eax

int32_t* esi_1 = &arg3[0xc9f8]
int32_t eax_1 = sub_6ec680(esi_1, arg4)

if (eax_1 s< 0)
    _free(*(arg3 + 0xd4))
    _free(*(arg3 + 0x24c))
    sub_6ead60(arg3)
    return eax_1

int32_t eax_4 = _malloc(*(arg3 + 0xdc) * 0x81)
*(arg3 + 0xd138) = eax_4

if (eax_4 == 0)
    int32_t i_5 = eax_4 + 0x50
    int32_t i
    
    do
        _free(*esi_1)
        esi_1 = &esi_1[1]
        i = i_5
        i_5 -= 1
    while (i != 1)
    _free(*(arg3 + 0xd4))
    _free(*(arg3 + 0x24c))
    sub_6ead60(arg3)
    return 0xffffffff

void* edx_1 = &arg3[0x39c]
int32_t i_4 = 0x40
void* eax_6 = &arg3[0xa20]
int32_t i_1

do
    *edx_1 = eax_6
    *(edx_1 - 4) = eax_6 - 0x80
    edx_1 += 0x18
    *(edx_1 - 0x14) = eax_6 + 0x80
    *(edx_1 - 0x10) = eax_6 + 0x100
    *(edx_1 - 0xc) = eax_6 + 0x180
    void* ecx_7 = eax_6 + 0x200
    eax_6 += 0x300
    *(edx_1 - 8) = ecx_7
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
sub_6e9c50(&arg4[0x50], &arg3[0xd148], &arg3[0x398], &arg4[0x50])
void* eax_9 = &arg3[0xd248]
int32_t i_3 = 0x40
void* var_10_1 = eax_9
int32_t i_2

do
    int32_t ebx_1 = 0
    int32_t j_1 = 2
    void* eax_10 = eax_9 - 0xcea8
    void* var_8_1 = eax_10
    int32_t j
    
    do
        void* ecx_9 = *(eax_10 - 8)
        void* esi_2 = *(eax_10 + 8)
        void* edi_2 = *eax_10
        uint32_t ecx_11 = zx.d(*(esi_2 + 0x30)) + ((zx.d(*(ecx_9 + 0x30)) + zx.d(*(ecx_9 + 0x24))
            + zx.d(*(ecx_9 + 0x22)) + zx.d(*(ecx_9 + 0x18))) << 1) + zx.d(*(esi_2 + 0x24))
        eax_10 = var_8_1 + 0x18
        ebx_1 = ebx_1 + zx.d(*(edi_2 + 0x18)) + ecx_11 + zx.d(*(esi_2 + 0x22))
            + zx.d(*(esi_2 + 0x18)) + zx.d(*(edi_2 + 0x30)) + zx.d(*(edi_2 + 0x24))
            + zx.d(*(edi_2 + 0x22))
        j = j_1
        j_1 -= 1
        var_8_1 = eax_10
    while (j != 1)
    *var_10_1 = neg.d(ebx_1 s>> 0xb)
    eax_9 = var_10_1 + 4
    i_2 = i_3
    i_3 -= 1
    var_10_1 = eax_9
while (i_2 != 1)
*(arg3 + 0xc9a0) = *(arg4 + 0x240)
*(arg3 + 0xc9b0) = *(arg4 + 0x250)
*(arg3 + 0xc9c0) = *(arg4 + 0x260)
int128_t xmm0_4 = *(arg4 + 0x270)
*(arg3 + 0xd144) = 0
*(arg3 + 0xd348) = 0
*(arg3 + 0xc9d0) = xmm0_4
*(arg3 + 0xd34c) = 0
*(arg3 + 0xd350) = 0
*(arg3 + 0xd388) = 0
*(arg3 + 0xd38c) = 0
return 0
