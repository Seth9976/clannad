// 函数: sub_45ab74
// 地址: 0x45ab74
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_6c = edi
int32_t result

if (arg2 == 0)
    result = 0x8876086c
else
    int32_t pv_1
    int32_t pv
    
    if (data_b95af8 == 0)
        if (GetObjectA(*(arg1 + 0x14), 0x3c, &pv_1) != 0)
            *arg2 = pv_1
            int32_t var_40
            arg2[1] = var_40
            int32_t var_34
            arg2[2] = var_34
            arg2[3] = *(arg1 + 0x4fc)
            char var_30
            arg2[4] = zx.d(var_30)
            char var_2d
            uint32_t eax_11
            eax_11.b = var_2d
            arg2[5].b = eax_11.b
            char var_2c
            eax_11.b = var_2c
            *(arg2 + 0x15) = eax_11.b
            char var_2a
            eax_11.b = var_2a
            *(arg2 + 0x16) = eax_11.b
            char var_29
            eax_11.b = var_29
            *(arg2 + 0x17) = eax_11.b
            uint8_t multiByteStr[0x20]
            MultiByteToWideChar(0, 0, &multiByteStr, 0xffffffff, &arg2[6], 0x20)
            *(arg2 + 0x56) = 0
            result = 0
        else
            result = 0x8876086c
    else if (GetObjectW(*(arg1 + 0x14), 0x5c, &pv) == 0)
        result = 0x8876086c
    else
        *arg2 = pv
        int32_t var_60
        arg2[1] = var_60
        int32_t var_54
        arg2[2] = var_54
        arg2[3] = *(arg1 + 0x4fc)
        char var_50
        arg2[4] = zx.d(var_50)
        char var_4d
        uint32_t eax_5
        eax_5.b = var_4d
        arg2[5].b = eax_5.b
        char var_4c
        eax_5.b = var_4c
        *(arg2 + 0x15) = eax_5.b
        char var_4a
        eax_5.b = var_4a
        *(arg2 + 0x16) = eax_5.b
        char var_49
        eax_5.b = var_49
        *(arg2 + 0x17) = eax_5.b
        void var_48
        __builtin_memcpy(&arg2[6], &var_48, 0x40)
        result = 0

sub_745f2b(__security_cookie_1)
return result
