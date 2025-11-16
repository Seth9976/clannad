// 函数: sub_658680
// 地址: 0x658680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4a70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_bac504
SYSTEMTIME var_3c
var_3c.wMonth = 0
var_3c.wDayOfWeek = 0
var_3c.wDay = 0
var_3c.wHour = 0
int64_t xmm0
xmm0.w = var_3c.wMonth
xmm0:2.w = var_3c.wDayOfWeek
xmm0:4.w = var_3c.wDay
xmm0:6.w = var_3c.wHour
*(edi + 0x10) = xmm0
*(edi + 0x18) = 0
var_3c.wMinute = 0
var_3c.wSecond = 0
void* eax_3 = data_bac4d8
*(edi + 0x1c) = 0
*(edi + 0xb8) = 0xffffffff

if (edi + 0x20 != eax_3 + 0x78)
    sub_52e3c0(edi + 0x20, eax_3 + 0x78, 0, 0xffffffff)
    eax_3 = data_bac4d8

if (edi + 0x38 != eax_3 + 0x90)
    sub_52e3c0(edi + 0x38, eax_3 + 0x90, 0, 0xffffffff)

int16_t var_2c
int16_t* eax_5 = sub_6200f0(&var_2c)
int32_t var_8_1 = 0

if (edi + 0x50 != eax_5)
    sub_52e3c0(edi + 0x50, eax_5, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
bool cond:0 = *(edi + 0x7c) u< 8
var_2c = 0
void* eax_6 = edi + 0x68
int32_t var_1c = 0
*(eax_6 + 0x10) = 0

if (not(cond:0))
    eax_6 = *eax_6

*eax_6 = 0
void** eax_8 = data_bac458 + 0x2fc

if (edi + 0x80 != eax_8)
    sub_52e3c0(edi + 0x80, eax_8, 0, 0xffffffff)

*(edi + 0x9c) = *(edi + 0x98)
*(edi + 0xa4) = 0
*(edi + 0xac) = *(edi + 0xa8)
SYSTEMTIME* lpSystemTime = &var_3c
*(edi + 0xb4) = 0
GetLocalTime(lpSystemTime)
int32_t eax_11
eax_11.w = var_3c.wYear
eax_11:2.w = var_3c.wMonth
*(edi + 0x10) = eax_11.w
*(edi + 0x12) = (eax_11 u>> 0x10).w
int32_t eax_13
eax_13.w = var_3c.wDayOfWeek
eax_13:2.w = var_3c.wDay
*(edi + 0x14) = (eax_13 u>> 0x10).w
int32_t eax_15
eax_15.w = var_3c.wHour
eax_15:2.w = var_3c.wMinute
*(edi + 0x16) = eax_15.w
*(edi + 0x18) = (eax_15 u>> 0x10).w
int32_t eax_17
eax_17.w = var_3c.wSecond
eax_17:2.w = var_3c.wMilliseconds
*(edi + 0x1a) = eax_17.w
*(edi + 0x1c) = (eax_17 u>> 0x10).w

if (*(edi + 0xa0) - *(edi + 0x98) u< 0x1e8480)
    sub_597890(edi + 0x98, 0x1e8480)

sub_698170(edi + 0x4af9c, &var_2c, *(edi + 0x4b000))
int32_t var_8_3 = 1
sub_5b0590(edi + 0x98, &var_2c)
int32_t var_8_4 = 0xffffffff

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int32_t esi = *(edi + 0x4b004)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_9 = *(edi + 0x98)

if (ecx_9 == *(edi + 0x9c))
    ecx_9 = nullptr

*(ecx_9 + *(edi + 0xa4)) = esi
*(edi + 0xa4) += 4
int32_t esi_2 = *(edi + 0x4affc) - *(*(edi + 0x4b000) * 0x54 + *(edi + 0x4aff0) + 8)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_12 = *(edi + 0x98)

if (ecx_12 == *(edi + 0x9c))
    ecx_12 = nullptr

*(ecx_12 + *(edi + 0xa4)) = esi_2
*(edi + 0xa4) += 4
sub_6762f0(edi + 0x4ab00, edi + 0x98)
sub_65afc0(edi + 0x98, edi + 0x4ac58)
int32_t eax_29 = *(edi + 0xa4)
void var_d4
__builtin_memcpy(&var_d4, edi + 0x4ac64, 0x80)
sub_5979b0(edi + 0x98, eax_29 + 0x80)
int32_t eax_31 = *(edi + 0x98)

if (eax_31 == *(edi + 0x9c))
    eax_31 = 0

__builtin_memcpy(*(edi + 0xa4) + eax_31, &var_d4, 0x80)
*(edi + 0xa4) -= 0xffffff80
int32_t eax_32 = *(edi + 0xa4)
__builtin_memcpy(&var_d4, edi + 0x4ace4, 0x80)
sub_5979b0(edi + 0x98, eax_32 + 0x80)
int32_t eax_34 = *(edi + 0x98)

if (eax_34 == *(edi + 0x9c))
    eax_34 = 0

__builtin_memcpy(*(edi + 0xa4) + eax_34, &var_d4, 0x80)
*(edi + 0xa4) -= 0xffffff80
int32_t eax_35 = *(edi + 0xa4)
__builtin_memcpy(&var_d4, edi + 0x4ad64, 0x80)
sub_5979b0(edi + 0x98, eax_35 + 0x80)
int32_t eax_37 = *(edi + 0x98)
void* var_280_17 = 0xffffffff

if (eax_37 == *(edi + 0x9c))
    eax_37 = 0

int32_t var_18_2 = 7
int32_t var_1c_1 = 0
__builtin_memcpy(*(edi + 0xa4) + eax_37, &var_d4, 0x80)
*(edi + 0xa4) -= 0xffffff80
int32_t var_284_6 = 0
var_2c = 0
sub_52e3c0(&var_2c, edi + 0x4ade4, var_284_6, var_280_17)
int32_t var_8_5 = 2
sub_5b0590(edi + 0x98, &var_2c)
int32_t var_8_6 = 0xffffffff

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_18_3 = 7
void* var_280_20 = 0xffffffff
int32_t var_284_7 = 0
var_2c = 0
int32_t var_1c_2 = 0
sub_52e3c0(&var_2c, edi + 0x4adfc, var_284_7, var_280_20)
int32_t var_8_7 = 3
sub_5b0590(edi + 0x98, &var_2c)
int32_t var_8_8 = 0xffffffff

if (var_18_3 u>= 8)
    j__free(var_2c.d)

int32_t* eax_40 = *(edi + 0x4ae14)

if (eax_40 == *(edi + 0x4ae18))
    eax_40 = nullptr

void* edi_8 = *(edi + 0x4ae18) - *(edi + 0x4ae14)

if (edi_8 s> 0)
    sub_5979b0(edi + 0x98, *(edi + 0xa4) + edi_8)
    int32_t ecx_23 = *(edi + 0x98)
    
    if (ecx_23 == *(edi + 0x9c))
        ecx_23 = 0
    
    sub_748840(*(edi + 0xa4) + ecx_23, eax_40, edi_8, eax_2)
    *(edi + 0xa4) += edi_8

int32_t var_18_4 = 7
void* const var_280_25 = 0xffffffff
int32_t var_284_9 = 0
var_2c = 0
int32_t var_1c_3 = 0
sub_52e3c0(&var_2c, edi + 0x4ae20, var_284_9, var_280_25)
int32_t var_8_9 = 4
sub_5b0590(edi + 0x98, &var_2c)
int32_t var_8_10 = 0xffffffff

if (var_18_4 u>= 8)
    j__free(var_2c.d)

int32_t eax_46 = *(edi + 0xa4)
void var_238
__builtin_memcpy(&var_238, edi + 0x4ae38, 0x164)
sub_5979b0(edi + 0x98, eax_46 + 0x164)
int32_t eax_48 = *(edi + 0x98)

if (eax_48 == *(edi + 0x9c))
    eax_48 = 0

__builtin_memcpy(*(edi + 0xa4) + eax_48, &var_238, 0x164)
*(edi + 0xa4) += 0x164
int32_t esi_10 = *(edi + 0x4b00c)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_28 = *(edi + 0x98)

if (ecx_28 == *(edi + 0x9c))
    ecx_28 = nullptr

*(ecx_28 + *(edi + 0xa4)) = esi_10
*(edi + 0xa4) += 4
int32_t* eax_52 = *(edi + 0x4b008)
int32_t esi_12 = *(edi + 0x4b00c) << 2

if (esi_12 s> 0)
    sub_5979b0(edi + 0x98, *(edi + 0xa4) + esi_12)
    int32_t ecx_30 = *(edi + 0x98)
    
    if (ecx_30 == *(edi + 0x9c))
        ecx_30 = 0
    
    sub_748840(*(edi + 0xa4) + ecx_30, eax_52, esi_12, eax_2)
    *(edi + 0xa4) += esi_12

int32_t eax_57
int32_t edx_1
edx_1:eax_57 = muls.dp.d(0x2aaaaaab, *(edi + 0x4b018) - *(edi + 0x4b014))
int32_t edx_2 = edx_1 s>> 2
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_34 = *(edi + 0x98)
int32_t i_4 = 0

if (ecx_34 == *(edi + 0x9c))
    ecx_34 = nullptr

*(ecx_34 + *(edi + 0xa4)) = (edx_2 u>> 0x1f) + edx_2
*(edi + 0xa4) += 4
int32_t eax_61
int32_t edx_3
edx_3:eax_61 = muls.dp.d(0x2aaaaaab, *(edi + 0x4b018) - *(edi + 0x4b014))
int32_t edx_4 = edx_3 s>> 2

if ((edx_4 u>> 0x1f) + edx_4 s> 0)
    int32_t ecx_37 = 0
    int32_t var_23c_1 = 0
    int32_t edx_7
    int32_t i
    
    do
        void** eax_66 = *(edi + 0x4b014) + ecx_37
        int32_t var_18_5 = 7
        void* var_1c_4 = nullptr
        void* var_280_33 = 0xffffffff
        int32_t var_284_11 = 0
        var_2c = 0
        sub_52e3c0(&var_2c, eax_66, var_284_11, var_280_33)
        int32_t var_8_11 = 5
        sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
        int32_t* ecx_40 = *(edi + 0x98)
        int16_t* edx_5 = &var_2c
        
        if (ecx_40 == *(edi + 0x9c))
            ecx_40 = nullptr
        
        *(ecx_40 + *(edi + 0xa4)) = var_1c_4
        *(edi + 0xa4) += 4
        int16_t* ecx_41 = var_2c.d
        void* esi_17 = var_1c_4 * 2
        int32_t eax_71 = var_18_5
        
        if (eax_71 u>= 8)
            edx_5 = ecx_41
        
        if (esi_17 s> 0)
            sub_5979b0(edi + 0x98, *(edi + 0xa4) + esi_17)
            int32_t ecx_43 = *(edi + 0x98)
            
            if (ecx_43 == *(edi + 0x9c))
                ecx_43 = 0
            
            sub_748840(*(edi + 0xa4) + ecx_43, edx_5, esi_17, eax_2)
            eax_71 = var_18_5
            *(edi + 0xa4) += esi_17
            ecx_41 = var_2c.d
        
        int32_t var_8_12 = 0xffffffff
        
        if (eax_71 u>= 8)
            j__free(ecx_41)
        
        var_23c_1 += 0x18
        i = i_4 + 1
        int32_t eax_76
        int32_t edx_6
        edx_6:eax_76 = muls.dp.d(0x2aaaaaab, *(edi + 0x4b018) - *(edi + 0x4b014))
        ecx_37 = var_23c_1
        edx_7 = edx_6 s>> 2
        i_4 = i
    while (i s< (edx_7 u>> 0x1f) + edx_7)

int32_t esi_21 = (*(edi + 0x4b024) - *(edi + 0x4b020)) s>> 2
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_47 = *(edi + 0x98)

if (ecx_47 == *(edi + 0x9c))
    ecx_47 = nullptr

*(ecx_47 + *(edi + 0xa4)) = esi_21
*(edi + 0xa4) += 4
int32_t* eax_83 = *(edi + 0x4b020)

if (eax_83 == *(edi + 0x4b024))
    eax_83 = nullptr

void* esi_24 = (*(edi + 0x4b024) - *(edi + 0x4b020)) & 0xfffffffc

if (esi_24 s> 0)
    sub_5979b0(edi + 0x98, *(edi + 0xa4) + esi_24)
    int32_t ecx_49 = *(edi + 0x98)
    
    if (ecx_49 == *(edi + 0x9c))
        ecx_49 = 0
    
    sub_748840(*(edi + 0xa4) + ecx_49, eax_83, esi_24, eax_2)
    *(edi + 0xa4) += esi_24

int32_t esi_25 = *(edi + 0x4b040)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_51 = *(edi + 0x98)

if (ecx_51 == *(edi + 0x9c))
    ecx_51 = nullptr

*(ecx_51 + *(edi + 0xa4)) = esi_25
*(edi + 0xa4) += 4
int32_t esi_26 = *(edi + 0x4b04c)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_53 = *(edi + 0x98)

if (ecx_53 == *(edi + 0x9c))
    ecx_53 = nullptr

*(ecx_53 + *(edi + 0xa4)) = esi_26
*(edi + 0xa4) += 4
int32_t esi_27 = *(edi + 0x4b058)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_55 = *(edi + 0x98)

if (ecx_55 == *(edi + 0x9c))
    ecx_55 = nullptr

*(ecx_55 + *(edi + 0xa4)) = esi_27
*(edi + 0xa4) += 4
int128_t xmm0_1 = *(edi + 0x4aab4)
int32_t esi_28 = *(edi + 0x4aafc)
int128_t xmm0_2 = *(edi + 0x4aac4)
int128_t xmm0_3 = *(edi + 0x4aad4)
int128_t xmm0_4 = *(edi + 0x4aae4)
int64_t xmm0_5 = *(edi + 0x4aaf4)
var_3c.wHour = xmm0_5.w
var_3c.wMinute = xmm0_5:2.w
var_3c.wSecond = xmm0_5:4.w
var_3c.wMilliseconds = xmm0_5:6.w
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 0x4c)
int32_t eax_99 = *(edi + 0x98)

if (eax_99 == *(edi + 0x9c))
    eax_99 = 0

int128_t* ecx_58 = *(edi + 0xa4) + eax_99
int32_t* var_280_45 = edi + 0x98
*ecx_58 = xmm0_1
ecx_58[1] = xmm0_2
ecx_58[2] = xmm0_3
ecx_58[3] = xmm0_4
int64_t xmm0_10
xmm0_10.w = var_3c.wHour
xmm0_10:2.w = var_3c.wMinute
xmm0_10:4.w = var_3c.wSecond
xmm0_10:6.w = var_3c.wMilliseconds
ecx_58[4].q = xmm0_10
*(ecx_58 + 0x48) = esi_28
*(edi + 0xa4) += 0x4c
sub_6865c0(edi + 0x4b2f4, var_280_45)
sub_5bd700(edi + 0x556b8, edi + 0x98)
sub_5be990(edi + 0x5623c, edi + 0x98)
int32_t esi_31 = (*(edi + 0x5639c) - *(edi + 0x56398)) s/ 0xb8
var_3c.wSecond = esi_31.w
var_3c.wMilliseconds = esi_31:2.w
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_65 = *(edi + 0x98)

if (ecx_65 == *(edi + 0x9c))
    ecx_65 = nullptr

*(ecx_65 + *(edi + 0xa4)) = esi_31
int32_t i_1 = 0
*(edi + 0xa4) += 4
int32_t i_5 = 0

if (esi_31 s> 0)
    int32_t var_23c_2 = 0
    
    do
        void* var_54
        sub_698170(edi + 0x4af9c, &var_54, i_1)
        int32_t var_8_13 = 6
        void* var_280_50 = 0xffffffff
        int32_t var_284_15 = 0
        var_2c = 0
        int32_t var_18_6 = 7
        void* var_1c_5 = nullptr
        sub_52e3c0(&var_2c, &var_54, var_284_15, var_280_50)
        var_8_13.b = 7
        sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
        int32_t* ecx_69 = *(edi + 0x98)
        int16_t* edx_11 = &var_2c
        
        if (ecx_69 == *(edi + 0x9c))
            ecx_69 = nullptr
        
        *(ecx_69 + *(edi + 0xa4)) = var_1c_5
        *(edi + 0xa4) += 4
        int16_t* ecx_70 = var_2c.d
        void* esi_33 = var_1c_5 * 2
        int32_t eax_108 = var_18_6
        
        if (eax_108 u>= 8)
            edx_11 = ecx_70
        
        if (esi_33 s> 0)
            sub_5979b0(edi + 0x98, *(edi + 0xa4) + esi_33)
            int32_t ecx_72 = *(edi + 0x98)
            
            if (ecx_72 == *(edi + 0x9c))
                ecx_72 = 0
            
            sub_748840(*(edi + 0xa4) + ecx_72, edx_11, esi_33, eax_2)
            eax_108 = var_18_6
            *(edi + 0xa4) += esi_33
            ecx_70 = var_2c.d
        
        var_8_13.b = 6
        
        if (eax_108 u>= 8)
            j__free(ecx_70)
        
        sub_5be990(*(edi + 0x56398) + var_23c_2, edi + 0x98)
        int32_t var_8_14 = 0xffffffff
        
        if (xmm0_3:0xc.d u>= 8)
            j__free(var_54)
        
        i_1 = i_5 + 1
        var_23c_2 += 0xb8
        i_5 = i_1
    while (i_1 s< var_3c.wSecond.d)

sub_65a690(edi + 0x56464, edi + 0x98)
sub_5bf8a0(edi + 0x5651c, edi + 0x98)
sub_5f14e0(edi + 0x567e8, edi + 0x98)
sub_65a870(edi + 0x56920, edi + 0x98)
sub_65aa40(edi + 0x569d8, edi + 0x98)
void* esi_36 = *(edi + 0x56b34)
sub_609f10(esi_36 + 0x25c, edi + 0x98)
sub_5e4630(esi_36 + 0xa0, edi + 0x98)
sub_60a170(esi_36 + 0x394, edi + 0x98)
sub_5adf00(esi_36 + 0x4cc, edi + 0x98)
sub_609cd0(esi_36 + 0x6c4, edi + 0x98)
sub_5fd050(esi_36 + 0x77c, edi + 0x98)
sub_5fcd80(esi_36 + 0x834, edi + 0x98)
void* esi_38 = *(edi + 0x56b34) + 0x8ec
sub_609f10(esi_38 + 0x25c, edi + 0x98)
sub_5e4630(esi_38 + 0xa0, edi + 0x98)
sub_60a170(esi_38 + 0x394, edi + 0x98)
sub_5adf00(esi_38 + 0x4cc, edi + 0x98)
sub_609cd0(esi_38 + 0x6c4, edi + 0x98)
sub_5fd050(esi_38 + 0x77c, edi + 0x98)
sub_5fcd80(esi_38 + 0x834, edi + 0x98)
sub_5fd050(edi + 0x61ffc, edi + 0x98)
int128_t xmm0_11 = *(edi + 0x620b4)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 0x10)
int32_t ecx_96 = *(edi + 0x98)

if (ecx_96 == *(edi + 0x9c))
    ecx_96 = 0

int32_t** var_280_78 = edi + 0x98
*(*(edi + 0xa4) + ecx_96) = xmm0_11
*(edi + 0xa4) += 0x10
sub_5fcd80(edi + 0x620c4, var_280_78)
sub_5fdf40(edi + 0x6217c, edi + 0x98)
sub_65ac20(edi + 0x62634, edi + 0x98)
sub_65adf0(edi + 0x626ec, edi + 0x98)
int32_t esi_39 = *(edi + 0x6285c)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* edx_12 = *(edi + 0x98)

if (edx_12 == *(edi + 0x9c))
    edx_12 = nullptr

*(edx_12 + *(edi + 0xa4)) = esi_39
*(edi + 0xa4) += 4
(*(*(edi + 0x627a4) + 8))(edi + 0x98, 0, *(edi + 0x6285c))
void* edi_12 = edi
sub_5cdb90(edi_12 + 0x56b64, edi + 0x98)
sub_6a4c40(edi_12 + 0x17c, edi + 0x98)
int32_t eax_121
int32_t edx_13
edx_13:eax_121 = muls.dp.d(0x30c30c31, *(edi_12 + 0x1a0) - *(edi_12 + 0x19c))
int32_t edx_14 = edx_13 s>> 5
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_108 = *(edi + 0x98)

if (ecx_108 == *(edi + 0x9c))
    ecx_108 = nullptr

*(ecx_108 + *(edi + 0xa4)) = (edx_14 u>> 0x1f) + edx_14
*(edi + 0xa4) += 4
int32_t i_2 = 0
int32_t eax_125
int32_t edx_15
edx_15:eax_125 = muls.dp.d(0x30c30c31, *(edi_12 + 0x1a0) - *(edi_12 + 0x19c))
int32_t edx_16 = edx_15 s>> 5

if ((edx_16 u>> 0x1f) + edx_16 s> 0)
    int32_t esi_43 = 0
    int32_t edx_18
    
    do
        sub_6a4c40(*(edi_12 + 0x19c) + 0x88 + esi_43, edi + 0x98)
        esi_43 += 0xa8
        i_2 += 1
        int32_t eax_129
        int32_t edx_17
        edx_17:eax_129 = muls.dp.d(0x30c30c31, *(edi_12 + 0x1a0) - *(edi_12 + 0x19c))
        edx_18 = edx_17 s>> 5
    while (i_2 s< (edx_18 u>> 0x1f) + edx_18)

int32_t ecx_117 = *(edi_12 + 0xc0) - *(edi_12 + 0xbc)
sub_5979b0(edi + 0x98, *(edi + 0xa4) + 4)
int32_t* ecx_119 = *(edi + 0x98)

if (ecx_119 == *(edi + 0x9c))
    ecx_119 = nullptr

*(ecx_119 + *(edi + 0xa4)) = ecx_117 s/ 0xe
*(edi + 0xa4) += 4
int32_t i_3 = 0

if ((*(edi_12 + 0xc0) - *(edi_12 + 0xbc)) s/ 0xe s> 0)
    int32_t esi_47 = 0
    int32_t var_240_2 = 0
    
    do
        void* eax_141 = *(edi_12 + 0xbc)
        edi_12.w = *(eax_141 + esi_47 + 0xc)
        int64_t* eax_142 = eax_141 + esi_47
        int64_t xmm0_13 = *eax_142
        int32_t esi_48 = eax_142[1].d
        var_3c.wHour = xmm0_13.w
        var_3c.wMinute = xmm0_13:2.w
        var_3c.wSecond = xmm0_13:4.w
        var_3c.wMilliseconds = xmm0_13:6.w
        sub_5979b0(edi + 0x98, *(edi + 0xa4) + 0xe)
        int32_t eax_145 = *(edi + 0x98)
        int64_t xmm0_14
        xmm0_14.w = var_3c.wHour
        xmm0_14:2.w = var_3c.wMinute
        xmm0_14:4.w = var_3c.wSecond
        xmm0_14:6.w = var_3c.wMilliseconds
        
        if (eax_145 == *(edi + 0x9c))
            eax_145 = 0
        
        int64_t* ecx_124 = *(edi + 0xa4)
        i_3 += 1
        *(ecx_124 + eax_145) = xmm0_14
        *(ecx_124 + eax_145 + 8) = esi_48
        *(ecx_124 + eax_145 + 0xc) = edi_12.w
        esi_47 = var_240_2 + 0xe
        edi_12 = edi
        *(edi + 0xa4) += 0xe
        var_240_2 = esi_47
    while (i_3 s< (*(edi_12 + 0xc0) - *(edi_12 + 0xbc)) s/ 0xe)

sub_65a1d0(edi_12)
int32_t* result

if (*(edi_12 + 0x4a5b8) != 0 && data_bac510[0x42e6] s> 0)
    result = timeGetTime()
    
    if (result - *(edi_12 + 0xd4) s>= 0xbb8)
        void* ecx_130 = data_bac510
        *(edi_12 + 0xd4) = result
        int32_t temp1_1 = mods.dp.d(sx.q(*(edi_12 + 0xd8) + *(edi_12 + 0xdc)), *(ecx_130 + 0x10b98))
        char* esi_50 = temp1_1 * 0xbc
        esi_50[*(edi_12 + 0xe0)] = 0
        GetLocalTime(*(data_bac504 + 0xe0) + 2 + esi_50)
        sub_64e7b0(*(edi_12 + 0xe0) + 0x14 + esi_50, edi_12 + 0x10)
        void* ecx_134 = data_bac510
        void* eax_159 = *(edi_12 + 0xdc)
        
        if (eax_159 s>= *(ecx_134 + 0x10b98))
            *(edi_12 + 0xd8) += 1
            
            if (*(edi_12 + 0xd8) s>= *(ecx_134 + 0x10b98))
                *(edi_12 + 0xd8) = 0
        else
            *(edi_12 + 0xdc) = eax_159 + 1
        
        *(edi_12 + 0xd0) = 1
        *(edi_12 + 0xb8) = temp1_1

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
