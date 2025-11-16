// 函数: sub_6831c0
// 地址: 0x6831c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7c88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_bac4d0
int32_t i = 0

if (((ebx[1] - *ebx) & 0xfffffffc) s> 0)
    do
        (*(**(*ebx + (i << 2)) + 8))(eax_2)
        i += 1
    while (i s< (ebx[1] - *ebx) s>> 2)

void* var_300 = 1
int32_t var_138 = 7
wchar32 const* const var_304 = U"ABCDEFXSHIJ"
int32_t var_13c = 0
int16_t var_14c = 0
sub_52e720(&var_14c, var_304, var_300)
int32_t var_8_1 = 0
void* const var_300_1 = 1
int32_t var_120 = 7
int32_t* var_304_1 = &(*U"ABCDEFXSHIJ")[1]
int32_t var_124 = 0
int16_t var_134 = 0
sub_52e720(&var_134, var_304_1, var_300_1)
var_8_1.b = 1
void* const var_300_2 = 1
int32_t var_108 = 7
int32_t* var_304_2 = &(*U"ABCDEFXSHIJ")[2]
int32_t var_10c = 0
int16_t var_11c = 0
sub_52e720(&var_11c, var_304_2, var_300_2)
var_8_1.b = 2
void* const var_300_3 = 1
int32_t var_f0 = 7
int32_t* var_304_3 = &(*U"ABCDEFXSHIJ")[3]
int32_t var_f4 = 0
int16_t var_104 = 0
sub_52e720(&var_104, var_304_3, var_300_3)
var_8_1.b = 3
void* const var_300_4 = 1
int32_t var_d8 = 7
int32_t* var_304_4 = &(*U"ABCDEFXSHIJ")[4]
int32_t var_dc = 0
int16_t var_ec = 0
sub_52e720(&var_ec, var_304_4, var_300_4)
var_8_1.b = 4
void* const var_300_5 = 1
int32_t var_c0 = 7
int32_t* var_304_5 = &(*U"ABCDEFXSHIJ")[5]
int32_t var_c4 = 0
int16_t var_d4 = 0
sub_52e720(&var_d4, var_304_5, var_300_5)
var_8_1.b = 5
void* const var_300_6 = 1
int32_t var_a8 = 7
int32_t* var_304_6 = &(*U"ABCDEFXSHIJ")[6]
int32_t var_ac = 0
int16_t var_bc = 0
sub_52e720(&var_bc, var_304_6, var_300_6)
var_8_1.b = 6
void* const var_300_7 = 1
int32_t var_90 = 7
int32_t* var_304_7 = &(*U"ABCDEFXSHIJ")[7]
int32_t var_94 = 0
int16_t var_a4 = 0
sub_52e720(&var_a4, var_304_7, var_300_7)
var_8_1.b = 7
int32_t var_78 = 7
void* var_300_8 = 1
int32_t var_7c = 0
void* const var_304_8 = &data_af1d3c
int16_t var_8c = 0
sub_52e720(&var_8c, var_304_8, var_300_8)
var_8_1.b = 8
void* const var_300_9 = 1
int32_t var_60 = 7
int32_t* var_304_9 = &data_af1d40
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, var_304_9, var_300_9)
var_8_1.b = 9
void* const var_300_10 = 1
int32_t var_48 = 7
int32_t* var_304_10 = &data_af1d44
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, var_304_10, var_300_10)
var_8_1.b = 0xa
void* const var_300_11 = 1
int32_t var_30 = 7
int32_t* var_304_11 = &data_af9ec8
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, var_304_11, var_300_11)
var_8_1.b = 0xb
void* const var_300_12 = 1
int32_t var_18 = 7
int32_t* var_304_12 = &data_af9ecc
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, var_304_12, var_300_12)
int16_t* edi = &var_14c
int32_t var_8_2 = 0xc
void* esi_1 = &ebx[0x99f8]
int16_t var_318
int32_t var_284
int32_t var_270

for (int32_t i_1 = 0; i_1 s< 0xd; )
    int16_t* eax_10
    
    if (*(edi + 0x14) u< 8)
        eax_10 = edi
    else
        eax_10 = *edi
    
    int16_t* var_300_13 = eax_10
    int32_t var_304_13 = 7
    int32_t var_308_1 = 0
    var_318 = 0
    sub_52e720(&var_318, u"db_wnd_info_flag_%s", 0x13)
    int32_t var_2ec
    sub_6ae4c0(&var_2ec, var_318)
    var_8_2.b = 0xd
    
    if (esi_1 != &var_2ec)
        sub_52e3c0(esi_1, &var_2ec, 0, 0xffffffff)
    
    var_8_2.b = 0xc
    *(esi_1 + 0x18) = 0x100
    *(esi_1 + 0x1c) = 0xffffffff
    int32_t var_2d8
    
    if (var_2d8 u>= 8)
        j__free(var_2ec)
    
    int16_t* eax_11
    
    if (*(edi + 0x14) u< 8)
        eax_11 = edi
    else
        eax_11 = *edi
    
    int16_t* var_300_16 = eax_11
    int32_t var_304_15 = 7
    int32_t var_308_3 = 0
    var_318 = 0
    sub_52e720(&var_318, 0xaf9ef8, 5)
    void** eax_12 = sub_6ae4c0(&var_284, var_318)
    var_8_2.b = 0xe
    
    if (esi_1 + 0x24 != eax_12)
        sub_52e3c0(esi_1 + 0x24, eax_12, 0, 0xffffffff)
    
    var_8_2.b = 0xc
    
    if (var_270 u>= 8)
        j__free(var_284)
    
    *(esi_1 + 0x394) = i_1
    edi = &edi[0xc]
    i_1 += 1
    esi_1 += 0x430

int32_t edi_1 = 0
int32_t i_2 = 0
void* esi_3 = &ebx[0xa794]

do
    int32_t var_300_19 = edi_1
    int32_t var_304_17 = 7
    int32_t var_308_5 = 0
    var_318 = 0
    sub_52e720(&var_318, u"db_wnd_info_flag_ini_%02d", 0x19)
    int16_t var_2bc
    sub_6ae4c0(&var_2bc, var_318)
    var_8_2.b = 0xf
    
    if (esi_3 != &var_2bc)
        sub_52e3c0(esi_3, &var_2bc, 0, 0xffffffff)
    
    var_8_2.b = 0xc
    *(esi_3 + 0x18) = 0x100
    *(esi_3 + 0x1c) = 0xffffffff
    int32_t var_2a8
    
    if (var_2a8 u>= 8)
        j__free(var_2bc.d)
    
    var_2a8 = 7
    var_2bc = 0
    int32_t var_2ac_1 = 0
    void** eax_15 = *data_bac428 + i_2
    
    if (eax_15[4] == 0)
        int32_t var_300_22 = edi_1
        int32_t var_304_19 = 7
        int32_t var_308_7 = 0
        var_318 = 0
        sub_52e720(&var_318, 0xaf9f38, 7)
        void** eax_16 = sub_6ae4c0(&var_284, var_318)
        var_8_2.b = 0x10
        
        if (esi_3 + 0x24 != eax_16)
            sub_52e3c0(esi_3 + 0x24, eax_16, 0, 0xffffffff)
        
        var_8_2.b = 0xc
        
        if (var_270 u>= 8)
            j__free(var_284)
    else if (esi_3 + 0x24 != eax_15)
        sub_52e3c0(esi_3 + 0x24, eax_15, 0, 0xffffffff)
    
    *(esi_3 + 0x37c) = edi_1
    i_2 += 0x24
    edi_1 += 1
    esi_3 += 0x418
while (i_2 s< 0x2d0)

void var_26c
sub_52e820(&var_26c, u"back_object")
var_8_2.b = 0x11
void var_254
sub_52e820(&var_254, u"front_object")
var_8_2.b = 0x12
void var_23c
sub_52e820(&var_23c, u"next_object")
var_8_2.b = 0x13
void var_224
sub_52e820(&var_224, u"excall_back_object")
var_8_2.b = 0x14
void var_20c
sub_52e820(&var_20c, u"excall_front_object")
var_8_2.b = 0x15
void var_1f4
sub_52e820(&var_1f4, u"excall_next_object")
var_8_2.b = 0x16
void var_1dc
sub_52e820(&var_1dc, u"back.object")
var_8_2.b = 0x17
void var_1c4
sub_52e820(&var_1c4, u"front.object")
var_8_2.b = 0x18
void var_1ac
sub_52e820(&var_1ac, u"next.object")
var_8_2.b = 0x19
void var_194
sub_52e820(&var_194, u"excall.back.object")
var_8_2.b = 0x1a
void var_17c
sub_52e820(&var_17c, u"excall.front.object")
var_8_2.b = 0x1b
void var_164
sub_52e820(&var_164, u"excall.next.object")
int32_t ebx_1 = 0
void* esi_5 = &ebx[0xc42b]
var_8_2.b = 0x1c

for (int32_t i_3 = 0; i_3 s< 0x90; )
    void* eax_17 = &var_26c + i_3
    
    if (*(eax_17 + 0x14) u>= 8)
        eax_17 = *eax_17
    
    void* var_300_38 = eax_17
    sub_52e820(&var_318, u"db_wnd_info_object_%s")
    void* var_2d4
    sub_6ae4c0(&var_2d4, var_318)
    var_8_2.b = 0x1d
    
    if (esi_5 != &var_2d4)
        sub_52e3c0(esi_5, &var_2d4, 0, 0xffffffff)
    
    var_8_2.b = 0x1c
    *(esi_5 + 0x18) = 0x100
    *(esi_5 + 0x1c) = 0xffffffff
    int32_t var_2c0
    
    if (var_2c0 u>= 8)
        j__free(var_2d4)
    
    void** eax_18 = &var_1dc + i_3
    void** eax_19 = sub_548cb0(eax_18, 0xafa0fc, &var_284, eax_18)
    var_8_2.b = 0x1e
    int16_t var_29c
    void** eax_20 = sub_532b80(eax_19, eax_19, &var_29c, &data_af3c68)
    var_8_2.b = 0x1f
    
    if (esi_5 + 0x24 != eax_20)
        sub_52e3c0(esi_5 + 0x24, eax_20, 0, 0xffffffff)
    
    int32_t var_288
    
    if (var_288 u>= 8)
        j__free(var_29c.d)
    
    var_8_2.b = 0x1c
    var_288 = 7
    int32_t var_28c_1 = 0
    var_29c = 0
    
    if (var_270 u>= 8)
        j__free(var_284)
    
    *(esi_5 + 0x37c) = ebx_1
    i_3 += 0x18
    var_270 = 7
    ebx_1 += 1
    int32_t var_274_1 = 0
    esi_5 += 0x418
    var_284.w = 0

var_8_2.b = 0x16
`eh vector vbase constructor iterator'(&var_1dc, 0x18, 6, sub_52e8a0)
var_8_2.b = 0xc
`eh vector vbase constructor iterator'(&var_26c, 0x18, 6, sub_52e8a0)
int32_t var_8_3 = 0xffffffff
int32_t result = `eh vector vbase constructor iterator'(&var_14c, 0x18, 0xd, sub_52e8a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
