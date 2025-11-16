// 函数: sub_575910
// 地址: 0x575910
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

void* eax_1 = arg1 * 0x2d0
int32_t var_30_1 = 0
int32_t var_34_1 = 0
void* eax_2 = arg1 * 0x3920
__builtin_memset(eax_2 + 0xf89b1c, 0, 0x14)
int32_t eax_3 = arg1 * 0x1d4
*(eax_2 + 0xf89b40) = 0
__builtin_memset(eax_2 + 0xf89b44, 0, 0x14)
*(eax_2 + &data_f8d2dc) = 0
*(eax_2 + &data_f8d2e0) = 0
int32_t var_30_2 = 0
int32_t var_34_2 = 0
int32_t var_3c
int32_t* var_38
int32_t edx
sub_41cc90(sub_41cc90(eax_3, edx, eax_2 + 0xf89b58, var_3c, var_38), 0x8c, eax_2 + 0xf89c70)
int32_t eax_5 = *(eax_3 + 0x1090b5c)
*(eax_2 + 0xf8c668) = 0xffffffff
*(eax_2 + &data_f8c734) = 0
*(eax_1 + &data_8fcaf4) = eax_5
*(eax_1 + &data_8fcaf8) = *(eax_3 + &data_1090b60)
*(eax_1 + 0x8fcafc) = *(eax_3 + 0x1090b64)
*(eax_1 + &data_8fcb00) = *(eax_3 + &data_1090b68)
*(eax_1 + 0x8fcd90) = *(eax_3 + 0x1090b74)
*(eax_1 + &data_8fcd8c) = *(eax_3 + 0x1090b70)
*(eax_1 + 0x8fcd94) = *(eax_3 + 0x1090b88)
*(eax_1 + 0x8fcd98) = *(eax_3 + 0x1090b8c)
*(eax_1 + 0x8fcd9c) = *(eax_3 + 0x1090b90)
*(eax_1 + 0x8fcda0) = *(eax_3 + 0x1090b94)
*(eax_1 + 0x8fcda4) = *(eax_3 + 0x1090b98)
int32_t eax_16 = *(eax_3 + 0x1090b9c)
__builtin_memset(eax_2 + 0xf8c738, 0, 0x2c)
*(eax_1 + &data_8fcd4c) = arg1
*(eax_1 + &data_8fcaf0) = 1
*(eax_1 + 0x8fcda8) = eax_16
*(eax_1 + &data_8fcb18) = 0
*(eax_1 + &data_8fcb1c) = 0
*(eax_2 + &data_f8d300) = 0
*(eax_2 + 0xf8d304) = 0
*(eax_2 + &data_f8d308) = 0
*(eax_2 + 0xf8d324) = 2
__builtin_memset(eax_2 + &data_f8d30c, 0, 0x18)
*(eax_2 + 0xf8c778) = 0
*(eax_2 + 0xf8c77c) = 0
*(eax_2 + 0xf8c780) = 0
*(eax_2 + 0xf8c784) = 0
*(eax_2 + &data_f8c794) = 0
*(eax_2 + 0xf8d334) = 0
*(eax_2 + 0xf8d338) = 0xffffffff
*(eax_2 + 0xf8d33c) = 0xffffffff
*(eax_2 + 0xf8d340) = 0xffffffff
*(eax_2 + 0xf8d344) = 0xffffffff
*(eax_2 + 0xf8d348) = 0
*(eax_2 + 0xf8d34c) = 0xffffffff
*(eax_2 + 0xf8d350) = 0xffffffff
*(eax_2 + 0xf8d354) = 0xffffffff
*(eax_2 + 0xf8d358) = 0xffffffff
*(eax_2 + 0xf8d328) = 0
*(eax_2 + 0xf8d32c) = 0
*(eax_2 + 0xf8d330) = 0
sub_580120(eax_2 + 0xf89db8)
sub_580120(eax_2 + 0xf89e94)
sub_580120(eax_2 + 0xf89fa8)
sub_580120(eax_2 + 0xf8a084)
sub_580430(arg1)
*(eax_2 + 0xf8c764) = 0

for (int32_t i = 0; i s< 8; i += 1)
    sub_57ee90(arg1, i)

if (arg1 != 0xffffffff)
    *(eax_1 + &data_8fcb20) = 0
else
    void* eax_17 = &data_8fcb20
    int32_t i_4 = 0x40
    int32_t i_1
    
    do
        *eax_17 = 0
        eax_17 += 0x2d0
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

void* eax_19 = eax_2 + 0xf8a160
int32_t i_3 = 0x10
void* var_c_1 = eax_19
void* esi_2 = eax_19 + 0x10
int32_t i_2

do
    *eax_19 = 0xffffffff
    *(esi_2 - 0xc) = 0xffffffff
    int32_t ebx_1 = *(esi_2 + 0x6c)
    sub_4d1ba0(eax_19, 0x8c, esi_2 - 8, 0)
    esi_2 += 0x128
    eax_19 = var_c_1 + 0x128
    *(esi_2 - 0x130) = 0
    *(esi_2 - 0x12c) = 0
    i_2 = i_3
    i_3 -= 1
    *(esi_2 - 0x128) = 0
    *(esi_2 - 0xe8) = 0xff
    *(esi_2 - 0xe4) = 0
    *(esi_2 - 0xd8) = 0x3e8
    *(esi_2 - 0xd4) = 0x3e8
    *(esi_2 - 0xcc) = 0xffffffff
    *(esi_2 - 0xc8) = 0xffffffff
    *(esi_2 - 0xc4) = 0xffffffff
    *(esi_2 - 0xc0) = 0xffffffff
    *(esi_2 - 0xbc) = ebx_1
    *(esi_2 - 0xb8) = 0xffffffff
    *(esi_2 - 0xb4) = 0xffffffff
    *(esi_2 - 0xb0) = 0xffffffff
    *(esi_2 - 0xac) = 0xffffffff
    *(esi_2 - 0xa8) = 1
    var_c_1 = eax_19
while (i_2 != 1)
sub_576370(arg1)

if (*(eax_2 + &data_f8c794) == 0)
    *(eax_1 + 0x8fcb14) = 0
    *(eax_2 + 0xf8d324) = 2

int32_t ecx_12 = 0
*(eax_1 + 0x8fcb0c) = *(eax_1 + 0x8fcb14)
int32_t eax_23 = *(eax_3 + 0x1090c00)

if (eax_23 != 0)
    ecx_12 = eax_23

int32_t eax_24 = *(eax_3 + 0x1090ae8)
*(eax_1 + 0x8fcb10) = ecx_12

if (eax_24 s> 0x100)
    *(eax_3 + 0x1090ae8) = 0x100
else if (eax_24 s< 8)
    *(eax_3 + 0x1090ae8) = 8

int32_t eax_25 = *(eax_3 + 0x1090ae8)
int32_t edx_2 = *(eax_3 + 0x1090af0)
*(eax_1 + 0x8fcae0) = *(eax_3 + &data_1090aec)
*(eax_1 + &data_8fcadc) = eax_25
*(eax_1 + &data_8fcae4) = edx_2
sub_57f830(arg1)
int32_t edx_3 = *(eax_3 + 0x1090af4)
int32_t var_38_1 = *(eax_3 + 0x1090af8)
*(eax_1 + 0x8fcae8) = *(eax_3 + 0x1090b14)
int32_t eax_27 = *(eax_3 + &data_1090b18)
*(eax_1 + &data_8fcaec) = eax_27
*(eax_1 + 0x8fcb04) = 0xffffffff
*(eax_1 + &data_8fcb08) = 0xffffffff
int32_t eax_28 = sub_575f00(eax_27, edx_3, arg1, var_38_1, 0, 0)
void* edx_7

if (*(eax_3 + 0x1090ba8) != 0)
    int32_t edx_8
    edx_8.b = *(eax_3 + 0x1090bac) != 0
    edx_7 = (edx_8 << 1) + 1
else
    int32_t edx_4 = *(eax_3 + 0x1090bac)
    int32_t edx_5 = neg.d(edx_4)
    edx_7 = sbb.d(edx_5, edx_5, edx_4 != 0) & 2

sub_57d850(eax_28, edx_7, arg1, *(eax_3 + 0x1090ba0), *(eax_3 + 0x1090ba4))
__builtin_memset(eax_1 + 0x8fcd70, 0, 0x18)
*(eax_1 + 0x8fcd60) = 0
*(eax_1 + 0x8fcd64) = 0
*(eax_1 + &data_8fcd48) = 1
sub_5774c0(arg1)
int32_t var_38_2 = 1
sub_577970(eax_2 + &data_f89afc, eax_1 + &data_8fcadc, arg1, eax_2 + &data_f89afc, 
    &(&data_1090ae4)[arg1 * 0x75])
