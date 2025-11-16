// 函数: sub_45ab90
// 地址: 0x45ab90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* const eax_3

switch (data_187c518)
    case 0
        eax_3 = nullptr
    case 2
        eax_3 = 2
    case 3
        eax_3 = 3
    case 4
        eax_3 = 4
    case 5
        eax_3 = 5
    default
        eax_3 = 1

int32_t __saved_esi = 0
int32_t ecx = sub_45a190(eax_3 + 1, 5, arg3, 5, eax_3 + 1, arg3)
BOOL eax_5

if (data_108f338 == 0x3e7 || data_12ff384 == 2 || data_1c051d4 == 1)
label_45ac46:
    uint8_t var_408[0x400]
    
    if (sub_4d4ec0(3) != 4)
        HMENU esi_1 = data_1cd53e0:4
        GetMenuStringA(esi_1, 0x4e89, &var_408, 0x400, MF_BYCOMMAND)
        ModifyMenuA(esi_1, 0x4e89, MF_GRAYED, 0x4e89, &var_408)
    
    eax_5, ecx = sub_4d4ec0(4)
    
    if (eax_5 != 5)
        HMENU esi_2 = data_1cd53e0:4
        GetMenuStringA(esi_2, 0x4e8a, &var_408, 0x400, MF_BYCOMMAND)
        eax_5, ecx = ModifyMenuA(esi_2, 0x4e8a, MF_GRAYED, 0x4e8a, &var_408)
else
    eax_5 = data_1332b60
    bool cond:0_1
    
    if (eax_5 != 0x280)
        if (eax_5 != 0x320)
            goto label_45ac46
        
        cond:0_1 = data_1332b64 == 0x258
        goto label_45ac3a
    
    cond:0_1 = data_1332b64 == 0x1e0
label_45ac3a:
    
    if (not(cond:0_1))
        goto label_45ac46

if (arg2 == 1 && (&data_1cd53a0)[arg3] == 0)
    (&data_1cd5370)[arg3] = arg2

if (data_12a2938 != 0 || data_12a293c != 0 || data_12a2940 != 0 || data_12a2944 != 0)
    int32_t __saved_esi_1 = 0
    eax_5, ecx = sub_45a190(eax_5, 4, arg3, 4, 0, ecx)

int32_t __saved_esi_2 = 0
int32_t ecx_3 = sub_45a190(eax_5, 0xa, arg3, 0xa, 0, ecx)

if (data_1af44dc == 3)
    int32_t __saved_esi_3 = 0
    void* eax_8 = data_13132e8 + 1
    ecx_3 = sub_45a190(eax_8, 0xb, arg3, 0xb, eax_8, ecx_3)

int32_t __saved_esi_4 = 0
void* eax_10 = data_13132c0 + 1
void* eax_11
int32_t ecx_6
eax_11, ecx_6 = sub_45a190(eax_10, 8, arg3, 8, eax_10, ecx_3)
int32_t __saved_esi_5 = 0
int32_t ecx_8 = sub_45a190(eax_11, 0x17, arg3, 0x17, 0, ecx_6)
void* eax_12 = nullptr

if (data_1300594 != 0)
    eax_12.b = data_1313b3c == 0
    eax_12 += 1

int32_t __saved_esi_6 = 0
void* eax_13
int32_t ecx_10
eax_13, ecx_10 = sub_45a190(eax_12, 0xf, arg3, 0xf, eax_12, ecx_8)

if (arg2 == 1 && (&data_1cd53a0)[arg3] == 0)
    (&data_1cd5370)[arg3] = arg2

int32_t __saved_esi_7 = 0
int32_t ecx_12 = sub_45a190(eax_13, 3, arg3, 3, 0, ecx_10)
void* eax_15 = data_1313290 + 1
int32_t __saved_esi_8 = 0
void* eax_16
int32_t ecx_14
eax_16, ecx_14 = sub_45a190(eax_15, 0xc, arg3, 0xc, eax_15, ecx_12)

if (arg2 == 1 && (&data_1cd53a0)[arg3] == 0)
    (&data_1cd5370)[arg3] = arg2

int32_t __saved_esi_9 = 0
void* eax_17
int32_t ecx_16
eax_17, ecx_16 = sub_45a190(eax_16, 9, arg3, 9, 0, ecx_14)
int32_t __saved_esi_10 = 0
void* eax_18
int32_t ecx_18
eax_18, ecx_18 = sub_45a190(eax_17, 2, arg3, 2, 0, ecx_16)
int32_t __saved_esi_11 = 0
int32_t ecx_20 = sub_45a190(eax_18, 0xd, arg3, 0xd, 0, ecx_18)

if (arg2 == 1 && (&data_1cd53a0)[arg3] == 0)
    (&data_1cd5370)[arg3] = arg2

int32_t eax_19 = data_1313c88
int32_t eax_20 = neg.d(eax_19)
int32_t __saved_esi_12 = 0
int32_t ecx_22 = sub_45a190(sbb.d(eax_20, eax_20, eax_19 != 0) + 2, 0x14, arg3, 0x14, 
    sbb.d(eax_20, eax_20, eax_19 != 0) + 2, ecx_20)
int32_t eax_23 = data_1313c7c
int32_t eax_24 = neg.d(eax_23)
int32_t __saved_esi_13 = 0
int32_t ecx_24 = sub_45a190(sbb.d(eax_24, eax_24, eax_23 != 0) + 2, 0x11, arg3, 0x11, 
    sbb.d(eax_24, eax_24, eax_23 != 0) + 2, ecx_22)
int32_t eax_27 = data_1313c80
int32_t eax_28 = neg.d(eax_27)
int32_t __saved_esi_14 = 0
int32_t ecx_26 = sub_45a190(sbb.d(eax_28, eax_28, eax_27 != 0) + 2, 0x12, arg3, 0x12, 
    sbb.d(eax_28, eax_28, eax_27 != 0) + 2, ecx_24)
int32_t eax_31 = data_1313c84
int32_t eax_32 = neg.d(eax_31)
int32_t __saved_esi_15 = 0
int32_t ecx_28 = sub_45a190(sbb.d(eax_32, eax_32, eax_31 != 0) + 2, 0x13, arg3, 0x13, 
    sbb.d(eax_32, eax_32, eax_31 != 0) + 2, ecx_26)
void* eax_36 = data_1313c8c + 1
int32_t __saved_esi_16 = 0
int32_t ecx_30 = sub_45a190(eax_36, 0x15, arg3, 0x15, eax_36, ecx_28)
void* eax_38 = data_1313c90 + 1
int32_t __saved_esi_17 = 0
void* eax_39
int32_t ecx_32
eax_39, ecx_32 = sub_45a190(eax_38, 0x16, arg3, 0x16, eax_38, ecx_30)

if (arg2 == 1 && (&data_1cd53a0)[arg3] == 0)
    (&data_1cd5370)[arg3] = arg2

int32_t __saved_esi_18 = 0
void* eax_40
int32_t ecx_34
eax_40, ecx_34 = sub_45a190(eax_39, 6, arg3, 6, 0, ecx_32)
int32_t __saved_esi_19 = 0
void* result
int32_t ecx_36
result, ecx_36 = sub_45a190(eax_40, 0x10, arg3, 0x10, 0, ecx_34)

if (arg4 != 0)
    int32_t __saved_esi_20 = 0
    result = sub_45a190(result, 0x1e, arg3, 0x1e, 0, ecx_36)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
