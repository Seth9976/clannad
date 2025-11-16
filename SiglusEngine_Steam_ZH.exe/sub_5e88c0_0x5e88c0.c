// 函数: sub_5e88c0
// 地址: 0x5e88c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_38 = edi
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*(edi + 0x1ac) = *(edx + arg2[3])
arg2[3] += 4
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

*(edi + 0x1b0) = *(arg2[3] + eax_5)
arg2[3] += 4
int32_t eax_7 = *arg2

if (eax_7 == arg2[1])
    eax_7 = 0

*(edi + 0x1b4) = *(arg2[3] + eax_7)
arg2[3] += 4
int32_t eax_9 = *arg2

if (eax_9 == arg2[1])
    eax_9 = 0

*(edi + 0x1b8) = *(arg2[3] + eax_9)
arg2[3] += 4
int128_t* ecx_3 = arg2[3]
int32_t eax_11 = *arg2

if (eax_11 == arg2[1])
    eax_11 = 0

*(edi + 0x1bc) = *(ecx_3 + eax_11)
*(edi + 0x1cc) = *(ecx_3 + eax_11 + 0x10)
arg2[3] += 0x14
int32_t eax_13 = *arg2
int128_t* ecx_4 = arg2[3]

if (eax_13 == arg2[1])
    eax_13 = 0

*(edi + 0x1d0) = *(ecx_4 + eax_13)
*(edi + 0x1e0) = *(ecx_4 + eax_13 + 0x10)
arg2[3] += 0x20
int32_t eax_14 = *arg2
int128_t* ecx_5 = arg2[3]

if (eax_14 == arg2[1])
    eax_14 = 0

*(edi + 0x1f0) = *(ecx_5 + eax_14)
*(edi + 0x200) = *(ecx_5 + eax_14 + 0x10)
*(edi + 0x208) = *(ecx_5 + eax_14 + 0x18)
arg2[3] += 0x1c

if (*(edi + 0x1ac) == 4)
    sub_5f1920(arg2, edi + 0x20c)

int32_t* ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = nullptr

*(edi + 0x264) = *(ecx_7 + arg2[3])
arg2[3] += 4
int32_t eax_19 = *arg2

if (eax_19 == arg2[1])
    eax_19 = 0

*(edi + 0x268) = *(arg2[3] + eax_19)
arg2[3] += 4
int128_t* ecx_9 = arg2[3]

if (*(edi + 0x1ac) == 0xc)
    int32_t eax_21 = *arg2
    
    if (eax_21 == arg2[1])
        eax_21 = 0
    
    *(edi + 0x26c) = *(ecx_9 + eax_21)
    *(edi + 0x27c) = *(ecx_9 + eax_21 + 0x10)
    *(edi + 0x28c) = *(ecx_9 + eax_21 + 0x20)
    *(edi + 0x29c) = *(ecx_9 + eax_21 + 0x30)
    arg2[3] += 0x38

arg2[3] += 4
int32_t ecx_10 = *arg2
int32_t eax_22 = ecx_10
int32_t esi = arg2[1]
int32_t edx_1 = arg2[3]

if (ecx_10 == esi)
    eax_22 = 0

if (*(edx_1 + eax_22 - 4) != 0)
    if (ecx_10 == esi)
        ecx_10 = 0
    
    __builtin_memcpy(edi + 0x2a4, edx_1 + ecx_10, 0xb8)
    arg2[3] += 0xb8
    edi = var_38

int32_t* ecx_11 = *arg2

if (ecx_11 == arg2[1])
    ecx_11 = nullptr

*(edi + 0x35c) = *(ecx_11 + arg2[3])
arg2[3] += 4
int128_t* ecx_12 = arg2[3]
int32_t eax_25 = *arg2

if (eax_25 == arg2[1])
    eax_25 = 0

*(edi + 0x360) = *(ecx_12 + eax_25)
*(edi + 0x370) = *(ecx_12 + eax_25 + 0x10)
*(edi + 0x380) = *(ecx_12 + eax_25 + 0x20)
*(edi + 0x388) = *(ecx_12 + eax_25 + 0x28)
arg2[3] += 0x2c
int32_t edx_2 = arg2[3]
int32_t* ecx_13 = *arg2

if (ecx_13 == arg2[1])
    ecx_13 = nullptr

*(edi + 0x38c) = *(ecx_13 + edx_2)
*(edi + 0x390) = *(ecx_13 + edx_2 + 4)
arg2[3] += 8
int32_t* eax_29 = *arg2

if (eax_29 == arg2[1])
    eax_29 = nullptr

*(edi + 0x394) = *(eax_29 + arg2[3])
arg2[3] += 4
int32_t* eax_31 = *arg2

if (eax_31 == arg2[1])
    eax_31 = nullptr

*(edi + 0x398) = *(eax_31 + arg2[3])
arg2[3] += 4
int32_t eax_33 = *arg2

if (eax_33 == arg2[1])
    eax_33 = 0

*(edi + 0x3bc) = *(arg2[3] + eax_33)
arg2[3] += 4
int128_t* ecx_17 = arg2[3]
int32_t eax_35 = *arg2

if (*(edi + 0x3bc) == 0xffffffff)
    if (eax_35 == arg2[1])
        eax_35 = 0
    
    *(edi + 0x3a0) = *(ecx_17 + eax_35)
    arg2[3] += 4
else
    if (eax_35 == arg2[1])
        eax_35 = 0
    
    *(edi + 0x39c) = *(ecx_17 + eax_35)
    *(edi + 0x3ac) = *(ecx_17 + eax_35 + 0x10)
    *(edi + 0x3bc) = *(ecx_17 + eax_35 + 0x20)
    *(edi + 0x3c4) = *(ecx_17 + eax_35 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_18 = *arg2

if (ecx_18 == arg2[1])
    ecx_18 = nullptr

*(edi + 0x3e8) = *(ecx_18 + arg2[3])
arg2[3] += 4
int128_t* ecx_19 = arg2[3]
int32_t eax_40 = *arg2

if (*(edi + 0x3e8) == 0xffffffff)
    if (eax_40 == arg2[1])
        eax_40 = 0
    
    *(edi + 0x3cc) = *(ecx_19 + eax_40)
    arg2[3] += 4
else
    if (eax_40 == arg2[1])
        eax_40 = 0
    
    *(edi + 0x3c8) = *(ecx_19 + eax_40)
    *(edi + 0x3d8) = *(ecx_19 + eax_40 + 0x10)
    *(edi + 0x3e8) = *(ecx_19 + eax_40 + 0x20)
    *(edi + 0x3f0) = *(ecx_19 + eax_40 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_20 = *arg2

if (ecx_20 == arg2[1])
    ecx_20 = nullptr

*(edi + 0x414) = *(ecx_20 + arg2[3])
arg2[3] += 4
int128_t* ecx_21 = arg2[3]
int32_t eax_45 = *arg2

if (*(edi + 0x414) == 0xffffffff)
    if (eax_45 == arg2[1])
        eax_45 = 0
    
    *(edi + 0x3f8) = *(ecx_21 + eax_45)
    arg2[3] += 4
else
    if (eax_45 == arg2[1])
        eax_45 = 0
    
    *(edi + 0x3f4) = *(ecx_21 + eax_45)
    *(edi + 0x404) = *(ecx_21 + eax_45 + 0x10)
    *(edi + 0x414) = *(ecx_21 + eax_45 + 0x20)
    *(edi + 0x41c) = *(ecx_21 + eax_45 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_22 = *arg2

if (ecx_22 == arg2[1])
    ecx_22 = nullptr

*(edi + 0x440) = *(ecx_22 + arg2[3])
arg2[3] += 4
int128_t* ecx_23 = arg2[3]
int32_t eax_50 = *arg2

if (*(edi + 0x440) == 0xffffffff)
    if (eax_50 == arg2[1])
        eax_50 = 0
    
    *(edi + 0x424) = *(ecx_23 + eax_50)
    arg2[3] += 4
else
    if (eax_50 == arg2[1])
        eax_50 = 0
    
    *(edi + 0x420) = *(ecx_23 + eax_50)
    *(edi + 0x430) = *(ecx_23 + eax_50 + 0x10)
    *(edi + 0x440) = *(ecx_23 + eax_50 + 0x20)
    *(edi + 0x448) = *(ecx_23 + eax_50 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_24 = *arg2

if (ecx_24 == arg2[1])
    ecx_24 = nullptr

*(edi + 0x46c) = *(ecx_24 + arg2[3])
arg2[3] += 4
int128_t* ecx_25 = arg2[3]
int32_t eax_55 = *arg2

if (*(edi + 0x46c) == 0xffffffff)
    if (eax_55 == arg2[1])
        eax_55 = 0
    
    *(edi + 0x450) = *(ecx_25 + eax_55)
    arg2[3] += 4
else
    if (eax_55 == arg2[1])
        eax_55 = 0
    
    *(edi + 0x44c) = *(ecx_25 + eax_55)
    *(edi + 0x45c) = *(ecx_25 + eax_55 + 0x10)
    *(edi + 0x46c) = *(ecx_25 + eax_55 + 0x20)
    *(edi + 0x474) = *(ecx_25 + eax_55 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_26 = *arg2

if (ecx_26 == arg2[1])
    ecx_26 = nullptr

*(edi + 0x498) = *(ecx_26 + arg2[3])
arg2[3] += 4
int128_t* ecx_27 = arg2[3]
int32_t eax_60 = *arg2

if (*(edi + 0x498) == 0xffffffff)
    if (eax_60 == arg2[1])
        eax_60 = 0
    
    *(edi + 0x47c) = *(ecx_27 + eax_60)
    arg2[3] += 4
else
    if (eax_60 == arg2[1])
        eax_60 = 0
    
    *(edi + 0x478) = *(ecx_27 + eax_60)
    *(edi + 0x488) = *(ecx_27 + eax_60 + 0x10)
    *(edi + 0x498) = *(ecx_27 + eax_60 + 0x20)
    *(edi + 0x4a0) = *(ecx_27 + eax_60 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_28 = *arg2

if (ecx_28 == arg2[1])
    ecx_28 = nullptr

*(edi + 0x4c4) = *(ecx_28 + arg2[3])
arg2[3] += 4
int128_t* ecx_29 = arg2[3]
int32_t eax_65 = *arg2

if (*(edi + 0x4c4) == 0xffffffff)
    if (eax_65 == arg2[1])
        eax_65 = 0
    
    *(edi + 0x4a8) = *(ecx_29 + eax_65)
    arg2[3] += 4
else
    if (eax_65 == arg2[1])
        eax_65 = 0
    
    *(edi + 0x4a4) = *(ecx_29 + eax_65)
    *(edi + 0x4b4) = *(ecx_29 + eax_65 + 0x10)
    *(edi + 0x4c4) = *(ecx_29 + eax_65 + 0x20)
    *(edi + 0x4cc) = *(ecx_29 + eax_65 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_30 = *arg2

if (ecx_30 == arg2[1])
    ecx_30 = nullptr

*(edi + 0x4f0) = *(ecx_30 + arg2[3])
arg2[3] += 4
int128_t* ecx_31 = arg2[3]
int32_t eax_70 = *arg2

if (*(edi + 0x4f0) == 0xffffffff)
    if (eax_70 == arg2[1])
        eax_70 = 0
    
    *(edi + 0x4d4) = *(ecx_31 + eax_70)
    arg2[3] += 4
else
    if (eax_70 == arg2[1])
        eax_70 = 0
    
    *(edi + 0x4d0) = *(ecx_31 + eax_70)
    *(edi + 0x4e0) = *(ecx_31 + eax_70 + 0x10)
    *(edi + 0x4f0) = *(ecx_31 + eax_70 + 0x20)
    *(edi + 0x4f8) = *(ecx_31 + eax_70 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_32 = *arg2

if (ecx_32 == arg2[1])
    ecx_32 = nullptr

*(edi + 0x51c) = *(ecx_32 + arg2[3])
arg2[3] += 4
int128_t* ecx_33 = arg2[3]
int32_t eax_75 = *arg2

if (*(edi + 0x51c) == 0xffffffff)
    if (eax_75 == arg2[1])
        eax_75 = 0
    
    *(edi + 0x500) = *(ecx_33 + eax_75)
    arg2[3] += 4
else
    if (eax_75 == arg2[1])
        eax_75 = 0
    
    *(edi + 0x4fc) = *(ecx_33 + eax_75)
    *(edi + 0x50c) = *(ecx_33 + eax_75 + 0x10)
    *(edi + 0x51c) = *(ecx_33 + eax_75 + 0x20)
    *(edi + 0x524) = *(ecx_33 + eax_75 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_34 = *arg2

if (ecx_34 == arg2[1])
    ecx_34 = nullptr

*(edi + 0x548) = *(ecx_34 + arg2[3])
arg2[3] += 4
int128_t* ecx_35 = arg2[3]
int32_t eax_80 = *arg2

if (*(edi + 0x548) == 0xffffffff)
    if (eax_80 == arg2[1])
        eax_80 = 0
    
    *(edi + 0x52c) = *(ecx_35 + eax_80)
    arg2[3] += 4
else
    if (eax_80 == arg2[1])
        eax_80 = 0
    
    *(edi + 0x528) = *(ecx_35 + eax_80)
    *(edi + 0x538) = *(ecx_35 + eax_80 + 0x10)
    *(edi + 0x548) = *(ecx_35 + eax_80 + 0x20)
    *(edi + 0x550) = *(ecx_35 + eax_80 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_36 = *arg2

if (ecx_36 == arg2[1])
    ecx_36 = nullptr

*(edi + 0x574) = *(ecx_36 + arg2[3])
arg2[3] += 4
int128_t* ecx_37 = arg2[3]
int32_t eax_85 = *arg2

if (*(edi + 0x574) == 0xffffffff)
    if (eax_85 == arg2[1])
        eax_85 = 0
    
    *(edi + 0x558) = *(ecx_37 + eax_85)
    arg2[3] += 4
else
    if (eax_85 == arg2[1])
        eax_85 = 0
    
    *(edi + 0x554) = *(ecx_37 + eax_85)
    *(edi + 0x564) = *(ecx_37 + eax_85 + 0x10)
    *(edi + 0x574) = *(ecx_37 + eax_85 + 0x20)
    *(edi + 0x57c) = *(ecx_37 + eax_85 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_38 = *arg2

if (ecx_38 == arg2[1])
    ecx_38 = nullptr

*(edi + 0x5a0) = *(ecx_38 + arg2[3])
arg2[3] += 4
int128_t* ecx_39 = arg2[3]
int32_t eax_90 = *arg2

if (*(edi + 0x5a0) == 0xffffffff)
    if (eax_90 == arg2[1])
        eax_90 = 0
    
    *(edi + 0x584) = *(ecx_39 + eax_90)
    arg2[3] += 4
else
    if (eax_90 == arg2[1])
        eax_90 = 0
    
    *(edi + 0x580) = *(ecx_39 + eax_90)
    *(edi + 0x590) = *(ecx_39 + eax_90 + 0x10)
    *(edi + 0x5a0) = *(ecx_39 + eax_90 + 0x20)
    *(edi + 0x5a8) = *(ecx_39 + eax_90 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_40 = *arg2

if (ecx_40 == arg2[1])
    ecx_40 = nullptr

*(edi + 0x5cc) = *(ecx_40 + arg2[3])
arg2[3] += 4
int128_t* ecx_41 = arg2[3]
int32_t eax_95 = *arg2

if (*(edi + 0x5cc) == 0xffffffff)
    if (eax_95 == arg2[1])
        eax_95 = 0
    
    *(edi + 0x5b0) = *(ecx_41 + eax_95)
    arg2[3] += 4
else
    if (eax_95 == arg2[1])
        eax_95 = 0
    
    *(edi + 0x5ac) = *(ecx_41 + eax_95)
    *(edi + 0x5bc) = *(ecx_41 + eax_95 + 0x10)
    *(edi + 0x5cc) = *(ecx_41 + eax_95 + 0x20)
    *(edi + 0x5d4) = *(ecx_41 + eax_95 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_42 = *arg2

if (ecx_42 == arg2[1])
    ecx_42 = nullptr

*(edi + 0x5f8) = *(ecx_42 + arg2[3])
arg2[3] += 4
int128_t* ecx_43 = arg2[3]
int32_t eax_100 = *arg2

if (*(edi + 0x5f8) == 0xffffffff)
    if (eax_100 == arg2[1])
        eax_100 = 0
    
    *(edi + 0x5dc) = *(ecx_43 + eax_100)
    arg2[3] += 4
else
    if (eax_100 == arg2[1])
        eax_100 = 0
    
    *(edi + 0x5d8) = *(ecx_43 + eax_100)
    *(edi + 0x5e8) = *(ecx_43 + eax_100 + 0x10)
    *(edi + 0x5f8) = *(ecx_43 + eax_100 + 0x20)
    *(edi + 0x600) = *(ecx_43 + eax_100 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_44 = *arg2

if (ecx_44 == arg2[1])
    ecx_44 = nullptr

*(edi + 0x624) = *(ecx_44 + arg2[3])
arg2[3] += 4
int128_t* ecx_45 = arg2[3]
int32_t eax_105 = *arg2

if (*(edi + 0x624) == 0xffffffff)
    if (eax_105 == arg2[1])
        eax_105 = 0
    
    *(edi + 0x608) = *(ecx_45 + eax_105)
    arg2[3] += 4
else
    if (eax_105 == arg2[1])
        eax_105 = 0
    
    *(edi + 0x604) = *(ecx_45 + eax_105)
    *(edi + 0x614) = *(ecx_45 + eax_105 + 0x10)
    *(edi + 0x624) = *(ecx_45 + eax_105 + 0x20)
    *(edi + 0x62c) = *(ecx_45 + eax_105 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_46 = *arg2

if (ecx_46 == arg2[1])
    ecx_46 = nullptr

*(edi + 0x630) = *(ecx_46 + arg2[3])
arg2[3] += 4
int32_t eax_110 = *arg2

if (eax_110 == arg2[1])
    eax_110 = 0

*(edi + 0x654) = *(arg2[3] + eax_110)
arg2[3] += 4
int128_t* ecx_48 = arg2[3]
int32_t eax_112 = *arg2

if (*(edi + 0x654) == 0xffffffff)
    if (eax_112 == arg2[1])
        eax_112 = 0
    
    *(edi + 0x638) = *(ecx_48 + eax_112)
    arg2[3] += 4
else
    if (eax_112 == arg2[1])
        eax_112 = 0
    
    *(edi + 0x634) = *(ecx_48 + eax_112)
    *(edi + 0x644) = *(ecx_48 + eax_112 + 0x10)
    *(edi + 0x654) = *(ecx_48 + eax_112 + 0x20)
    *(edi + 0x65c) = *(ecx_48 + eax_112 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_49 = *arg2

if (ecx_49 == arg2[1])
    ecx_49 = nullptr

*(edi + 0x680) = *(ecx_49 + arg2[3])
arg2[3] += 4
int128_t* ecx_50 = arg2[3]
int32_t eax_117 = *arg2

if (*(edi + 0x680) == 0xffffffff)
    if (eax_117 == arg2[1])
        eax_117 = 0
    
    *(edi + 0x664) = *(ecx_50 + eax_117)
    arg2[3] += 4
else
    if (eax_117 == arg2[1])
        eax_117 = 0
    
    *(edi + 0x660) = *(ecx_50 + eax_117)
    *(edi + 0x670) = *(ecx_50 + eax_117 + 0x10)
    *(edi + 0x680) = *(ecx_50 + eax_117 + 0x20)
    *(edi + 0x688) = *(ecx_50 + eax_117 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_51 = *arg2

if (ecx_51 == arg2[1])
    ecx_51 = nullptr

*(edi + 0x6ac) = *(ecx_51 + arg2[3])
arg2[3] += 4
int128_t* ecx_52 = arg2[3]
int32_t eax_122 = *arg2

if (*(edi + 0x6ac) == 0xffffffff)
    if (eax_122 == arg2[1])
        eax_122 = 0
    
    *(edi + 0x690) = *(ecx_52 + eax_122)
    arg2[3] += 4
else
    if (eax_122 == arg2[1])
        eax_122 = 0
    
    *(edi + 0x68c) = *(ecx_52 + eax_122)
    *(edi + 0x69c) = *(ecx_52 + eax_122 + 0x10)
    *(edi + 0x6ac) = *(ecx_52 + eax_122 + 0x20)
    *(edi + 0x6b4) = *(ecx_52 + eax_122 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_53 = *arg2

if (ecx_53 == arg2[1])
    ecx_53 = nullptr

*(edi + 0x6d8) = *(ecx_53 + arg2[3])
arg2[3] += 4
int128_t* ecx_54 = arg2[3]
int32_t* eax_127 = *arg2

if (*(edi + 0x6d8) == 0xffffffff)
    if (eax_127 == arg2[1])
        eax_127 = nullptr
    
    *(edi + 0x6bc) = *(eax_127 + ecx_54)
    arg2[3] += 4
else
    if (eax_127 == arg2[1])
        eax_127 = nullptr
    
    *(edi + 0x6b8) = *(ecx_54 + eax_127)
    *(edi + 0x6c8) = *(ecx_54 + eax_127 + 0x10)
    *(edi + 0x6d8) = *(ecx_54 + eax_127 + 0x20)
    *(edi + 0x6e0) = *(ecx_54 + eax_127 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_55 = *arg2

if (ecx_55 == arg2[1])
    ecx_55 = nullptr

*(edi + 0x6e4) = *(ecx_55 + arg2[3])
arg2[3] += 4
int32_t eax_132 = *arg2

if (eax_132 == arg2[1])
    eax_132 = 0

*(edi + 0x708) = *(arg2[3] + eax_132)
arg2[3] += 4
int128_t* ecx_57 = arg2[3]
int32_t eax_134 = *arg2

if (*(edi + 0x708) == 0xffffffff)
    if (eax_134 == arg2[1])
        eax_134 = 0
    
    *(edi + 0x6ec) = *(ecx_57 + eax_134)
    arg2[3] += 4
else
    if (eax_134 == arg2[1])
        eax_134 = 0
    
    *(edi + 0x6e8) = *(ecx_57 + eax_134)
    *(edi + 0x6f8) = *(ecx_57 + eax_134 + 0x10)
    *(edi + 0x708) = *(ecx_57 + eax_134 + 0x20)
    *(edi + 0x710) = *(ecx_57 + eax_134 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_58 = *arg2

if (ecx_58 == arg2[1])
    ecx_58 = nullptr

*(edi + 0x734) = *(ecx_58 + arg2[3])
arg2[3] += 4
int128_t* ecx_59 = arg2[3]
int32_t eax_139 = *arg2

if (*(edi + 0x734) == 0xffffffff)
    if (eax_139 == arg2[1])
        eax_139 = 0
    
    *(edi + 0x718) = *(ecx_59 + eax_139)
    arg2[3] += 4
else
    if (eax_139 == arg2[1])
        eax_139 = 0
    
    *(edi + 0x714) = *(ecx_59 + eax_139)
    *(edi + 0x724) = *(ecx_59 + eax_139 + 0x10)
    *(edi + 0x734) = *(ecx_59 + eax_139 + 0x20)
    *(edi + 0x73c) = *(ecx_59 + eax_139 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_60 = *arg2

if (ecx_60 == arg2[1])
    ecx_60 = nullptr

*(edi + 0x760) = *(ecx_60 + arg2[3])
arg2[3] += 4
int128_t* ecx_61 = arg2[3]
int32_t eax_144 = *arg2

if (*(edi + 0x760) == 0xffffffff)
    if (eax_144 == arg2[1])
        eax_144 = 0
    
    *(edi + 0x744) = *(ecx_61 + eax_144)
    arg2[3] += 4
else
    if (eax_144 == arg2[1])
        eax_144 = 0
    
    *(edi + 0x740) = *(ecx_61 + eax_144)
    *(edi + 0x750) = *(ecx_61 + eax_144 + 0x10)
    *(edi + 0x760) = *(ecx_61 + eax_144 + 0x20)
    *(edi + 0x768) = *(ecx_61 + eax_144 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_62 = *arg2

if (ecx_62 == arg2[1])
    ecx_62 = nullptr

*(edi + 0x78c) = *(ecx_62 + arg2[3])
arg2[3] += 4
int128_t* ecx_63 = arg2[3]
int32_t eax_149 = *arg2

if (*(edi + 0x78c) == 0xffffffff)
    if (eax_149 == arg2[1])
        eax_149 = 0
    
    *(edi + 0x770) = *(ecx_63 + eax_149)
    arg2[3] += 4
else
    if (eax_149 == arg2[1])
        eax_149 = 0
    
    *(edi + 0x76c) = *(ecx_63 + eax_149)
    *(edi + 0x77c) = *(ecx_63 + eax_149 + 0x10)
    *(edi + 0x78c) = *(ecx_63 + eax_149 + 0x20)
    *(edi + 0x794) = *(ecx_63 + eax_149 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_64 = *arg2

if (ecx_64 == arg2[1])
    ecx_64 = nullptr

*(edi + 0x7b8) = *(ecx_64 + arg2[3])
arg2[3] += 4
int128_t* ecx_65 = arg2[3]
int32_t eax_154 = *arg2

if (*(edi + 0x7b8) == 0xffffffff)
    if (eax_154 == arg2[1])
        eax_154 = 0
    
    *(edi + 0x79c) = *(ecx_65 + eax_154)
    arg2[3] += 4
else
    if (eax_154 == arg2[1])
        eax_154 = 0
    
    *(edi + 0x798) = *(ecx_65 + eax_154)
    *(edi + 0x7a8) = *(ecx_65 + eax_154 + 0x10)
    *(edi + 0x7b8) = *(ecx_65 + eax_154 + 0x20)
    *(edi + 0x7c0) = *(ecx_65 + eax_154 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_66 = *arg2

if (ecx_66 == arg2[1])
    ecx_66 = nullptr

*(edi + 0x7e4) = *(ecx_66 + arg2[3])
arg2[3] += 4
int128_t* ecx_67 = arg2[3]
int32_t* eax_159 = *arg2

if (*(edi + 0x7e4) == 0xffffffff)
    if (eax_159 == arg2[1])
        eax_159 = nullptr
    
    *(edi + 0x7c8) = *(eax_159 + ecx_67)
    arg2[3] += 4
else
    if (eax_159 == arg2[1])
        eax_159 = nullptr
    
    *(edi + 0x7c4) = *(ecx_67 + eax_159)
    *(edi + 0x7d4) = *(ecx_67 + eax_159 + 0x10)
    *(edi + 0x7e4) = *(ecx_67 + eax_159 + 0x20)
    *(edi + 0x7ec) = *(ecx_67 + eax_159 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_68 = *arg2

if (ecx_68 == arg2[1])
    ecx_68 = nullptr

*(edi + 0x810) = *(ecx_68 + arg2[3])
arg2[3] += 4
int128_t* ecx_69 = arg2[3]
int32_t eax_164 = *arg2

if (*(edi + 0x810) == 0xffffffff)
    if (eax_164 == arg2[1])
        eax_164 = 0
    
    *(edi + 0x7f4) = *(ecx_69 + eax_164)
    arg2[3] += 4
else
    if (eax_164 == arg2[1])
        eax_164 = 0
    
    *(edi + 0x7f0) = *(ecx_69 + eax_164)
    *(edi + 0x800) = *(ecx_69 + eax_164 + 0x10)
    *(edi + 0x810) = *(ecx_69 + eax_164 + 0x20)
    *(edi + 0x818) = *(ecx_69 + eax_164 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_70 = *arg2

if (ecx_70 == arg2[1])
    ecx_70 = nullptr

*(edi + 0x83c) = *(ecx_70 + arg2[3])
arg2[3] += 4
int128_t* ecx_71 = arg2[3]
int32_t eax_169 = *arg2

if (*(edi + 0x83c) == 0xffffffff)
    if (eax_169 == arg2[1])
        eax_169 = 0
    
    *(edi + 0x820) = *(ecx_71 + eax_169)
    arg2[3] += 4
else
    if (eax_169 == arg2[1])
        eax_169 = 0
    
    *(edi + 0x81c) = *(ecx_71 + eax_169)
    *(edi + 0x82c) = *(ecx_71 + eax_169 + 0x10)
    *(edi + 0x83c) = *(ecx_71 + eax_169 + 0x20)
    *(edi + 0x844) = *(ecx_71 + eax_169 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_72 = *arg2

if (ecx_72 == arg2[1])
    ecx_72 = nullptr

*(edi + 0x868) = *(ecx_72 + arg2[3])
arg2[3] += 4
int128_t* ecx_73 = arg2[3]
int32_t eax_174 = *arg2

if (*(edi + 0x868) == 0xffffffff)
    if (eax_174 == arg2[1])
        eax_174 = 0
    
    *(edi + 0x84c) = *(ecx_73 + eax_174)
    arg2[3] += 4
else
    if (eax_174 == arg2[1])
        eax_174 = 0
    
    *(edi + 0x848) = *(ecx_73 + eax_174)
    *(edi + 0x858) = *(ecx_73 + eax_174 + 0x10)
    *(edi + 0x868) = *(ecx_73 + eax_174 + 0x20)
    *(edi + 0x870) = *(ecx_73 + eax_174 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_74 = *arg2

if (ecx_74 == arg2[1])
    ecx_74 = nullptr

*(edi + 0x894) = *(ecx_74 + arg2[3])
arg2[3] += 4
int128_t* ecx_75 = arg2[3]
int32_t eax_179 = *arg2

if (*(edi + 0x894) == 0xffffffff)
    if (eax_179 == arg2[1])
        eax_179 = 0
    
    *(edi + 0x878) = *(ecx_75 + eax_179)
    arg2[3] += 4
else
    if (eax_179 == arg2[1])
        eax_179 = 0
    
    *(edi + 0x874) = *(ecx_75 + eax_179)
    *(edi + 0x884) = *(ecx_75 + eax_179 + 0x10)
    *(edi + 0x894) = *(ecx_75 + eax_179 + 0x20)
    *(edi + 0x89c) = *(ecx_75 + eax_179 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_76 = *arg2

if (ecx_76 == arg2[1])
    ecx_76 = nullptr

*(edi + 0x8c0) = *(ecx_76 + arg2[3])
arg2[3] += 4
int128_t* ecx_77 = arg2[3]
int32_t eax_184 = *arg2

if (*(edi + 0x8c0) == 0xffffffff)
    if (eax_184 == arg2[1])
        eax_184 = 0
    
    *(edi + 0x8a4) = *(ecx_77 + eax_184)
    arg2[3] += 4
else
    if (eax_184 == arg2[1])
        eax_184 = 0
    
    *(edi + 0x8a0) = *(ecx_77 + eax_184)
    *(edi + 0x8b0) = *(ecx_77 + eax_184 + 0x10)
    *(edi + 0x8c0) = *(ecx_77 + eax_184 + 0x20)
    *(edi + 0x8c8) = *(ecx_77 + eax_184 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_78 = *arg2

if (ecx_78 == arg2[1])
    ecx_78 = nullptr

*(edi + 0x8ec) = *(ecx_78 + arg2[3])
arg2[3] += 4
int128_t* ecx_79 = arg2[3]
int32_t eax_189 = *arg2

if (*(edi + 0x8ec) == 0xffffffff)
    if (eax_189 == arg2[1])
        eax_189 = 0
    
    *(edi + 0x8d0) = *(ecx_79 + eax_189)
    arg2[3] += 4
else
    if (eax_189 == arg2[1])
        eax_189 = 0
    
    *(edi + 0x8cc) = *(ecx_79 + eax_189)
    *(edi + 0x8dc) = *(ecx_79 + eax_189 + 0x10)
    *(edi + 0x8ec) = *(ecx_79 + eax_189 + 0x20)
    *(edi + 0x8f4) = *(ecx_79 + eax_189 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_80 = *arg2

if (ecx_80 == arg2[1])
    ecx_80 = nullptr

*(edi + 0x918) = *(ecx_80 + arg2[3])
arg2[3] += 4
int128_t* ecx_81 = arg2[3]
int32_t eax_194 = *arg2

if (*(edi + 0x918) == 0xffffffff)
    if (eax_194 == arg2[1])
        eax_194 = 0
    
    *(edi + 0x8fc) = *(ecx_81 + eax_194)
    arg2[3] += 4
else
    if (eax_194 == arg2[1])
        eax_194 = 0
    
    *(edi + 0x8f8) = *(ecx_81 + eax_194)
    *(edi + 0x908) = *(ecx_81 + eax_194 + 0x10)
    *(edi + 0x918) = *(ecx_81 + eax_194 + 0x20)
    *(edi + 0x920) = *(ecx_81 + eax_194 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_82 = *arg2

if (ecx_82 == arg2[1])
    ecx_82 = nullptr

*(edi + 0x944) = *(ecx_82 + arg2[3])
arg2[3] += 4
int128_t* ecx_83 = arg2[3]
int32_t eax_199 = *arg2

if (*(edi + 0x944) == 0xffffffff)
    if (eax_199 == arg2[1])
        eax_199 = 0
    
    *(edi + 0x928) = *(ecx_83 + eax_199)
    arg2[3] += 4
else
    if (eax_199 == arg2[1])
        eax_199 = 0
    
    *(edi + 0x924) = *(ecx_83 + eax_199)
    *(edi + 0x934) = *(ecx_83 + eax_199 + 0x10)
    *(edi + 0x944) = *(ecx_83 + eax_199 + 0x20)
    *(edi + 0x94c) = *(ecx_83 + eax_199 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_84 = *arg2

if (ecx_84 == arg2[1])
    ecx_84 = nullptr

*(edi + 0x970) = *(ecx_84 + arg2[3])
arg2[3] += 4
int128_t* ecx_85 = arg2[3]
int32_t eax_204 = *arg2

if (*(edi + 0x970) == 0xffffffff)
    if (eax_204 == arg2[1])
        eax_204 = 0
    
    *(edi + 0x954) = *(ecx_85 + eax_204)
    arg2[3] += 4
else
    if (eax_204 == arg2[1])
        eax_204 = 0
    
    *(edi + 0x950) = *(ecx_85 + eax_204)
    *(edi + 0x960) = *(ecx_85 + eax_204 + 0x10)
    *(edi + 0x970) = *(ecx_85 + eax_204 + 0x20)
    *(edi + 0x978) = *(ecx_85 + eax_204 + 0x28)
    arg2[3] += 0x2c

int32_t* ecx_86 = *arg2

if (ecx_86 == arg2[1])
    ecx_86 = nullptr

*(edi + 0x99c) = *(ecx_86 + arg2[3])
arg2[3] += 4

if (*(edi + 0x99c) == 0xffffffff)
    int32_t eax_210 = *arg2
    
    if (eax_210 == arg2[1])
        eax_210 = 0
    
    *(edi + 0x980) = *(arg2[3] + eax_210)
    arg2[3] += 4
else
    sub_5f1980(arg2, edi + 0x97c)

int32_t* ecx_89 = *arg2

if (ecx_89 == arg2[1])
    ecx_89 = nullptr

*(edi + 0x9a8) = *(ecx_89 + arg2[3])
arg2[3] += 4
int32_t eax_214 = *arg2

if (eax_214 == arg2[1])
    eax_214 = 0

*(edi + 0x9ac) = *(arg2[3] + eax_214)
arg2[3] += 4
int32_t eax_216 = *arg2

if (eax_216 == arg2[1])
    eax_216 = 0

*(edi + 0x9b0) = *(arg2[3] + eax_216)
arg2[3] += 4
int32_t eax_218 = *arg2

if (eax_218 == arg2[1])
    eax_218 = 0

*(edi + 0x9b4) = *(arg2[3] + eax_218)
arg2[3] += 4
int32_t eax_220 = *arg2

if (eax_220 == arg2[1])
    eax_220 = 0

*(edi + 0x9b8) = *(arg2[3] + eax_220)
arg2[3] += 4
int32_t eax_222 = *arg2

if (eax_222 == arg2[1])
    eax_222 = 0

*(edi + 0x9bc) = *(arg2[3] + eax_222)
arg2[3] += 4
int32_t eax_224 = *arg2

if (eax_224 == arg2[1])
    eax_224 = 0

*(edi + 0x9c0) = *(arg2[3] + eax_224)
arg2[3] += 4
int32_t eax_226 = *arg2

if (eax_226 == arg2[1])
    eax_226 = 0

*(edi + 0x9c4) = *(arg2[3] + eax_226)
arg2[3] += 4
int32_t* eax_228 = *arg2

if (eax_228 == arg2[1])
    eax_228 = nullptr

*(edi + 0x9c8) = *(eax_228 + arg2[3])
arg2[3] += 4
sub_5f13f0(edi + 0x9cc, arg2)
sub_5f13f0(edi + 0xa88, arg2)
sub_5f13f0(edi + 0xb44, arg2)
sub_5f13f0(edi + 0xc00, arg2)
sub_5b61c0(edi + 0xcbc, arg2)
sub_5ad9d0(edi + 0xd74)
sub_5ad9d0(edi + 0xd8c)
void* esi_2 = edi + 0xe64
sub_5ad9d0(esi_2)
sub_5ad9d0(edi + 0xe7c)

if (*(edi + 0x1ac) == 0xc)
    void* esi_3 = edi + 0xda4
    int32_t i_1 = 8
    int32_t i
    
    do
        int16_t var_30
        int16_t* eax_233 = sub_5b0600(arg2, &var_30)
        int32_t var_8_1 = 0
        
        if (esi_3 != eax_233)
            sub_52e3c0(esi_3, eax_233, 0, 0xffffffff)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        var_1c = 7
        esi_3 += 0x18
        int32_t var_20_1 = 0
        var_30 = 0
        i = i_1
        i_1 -= 1
    while (i != 1)
    edi = var_38

if (*(edi + 0x1ac) == 9 && *(edi + 0x268) == 0 && *(edi + 0x269) == 1 && *(edi + 0x26b) == 0)
    sub_5e5060(edi, 1)

sub_5ea570(edi)
int32_t eax_234 = sub_6980b0(data_bac45c, esi_2)
*(edi + 0x348) = eax_234
*(edi + 0x34c) = sub_697f50(eax_234, edi + 0xe7c)
sub_5bfa10(edi + 0xe94, arg2)
sub_5f15d0(edi + 0x1160, arg2)
sub_686ca0(edi + 0x1298, arg2)
int32_t result = sub_5e4720(edi + 0x1390, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
