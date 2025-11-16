// 函数: sub_57c8a0
// 地址: 0x57c8a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg2 + 0x2b6c)
int32_t var_8

if (eax s< 0x3e8)
    var_8 = 1
else
    eax -= 0x3e8
    var_8 = 0

int32_t ebx = 0

if (arg3 != 0)
    if (eax - 9 u<= 7)
    label_57cb03:
        data_703008 = 1
    label_57c8e3:
        *(arg2 + 0xa8) = var_8
        *(arg2 + 0x2b6c) = 0xffffffff
        *(arg2 + 0xa4) = 0xff
        __builtin_memset(arg2 + 0x2c38, 0, 0x20)
        return 0
    
    goto label_57c8e3

if (eax u> 0x10)
    goto label_57c8e3

switch (eax)
    case 0
        goto label_57c8e3
    case 1
        sub_4d20b0(arg2 + 0x2b70)
        *(arg2 + 0xa4) = *(arg2 + 0x2b74)
        
        if (*(arg2 + 0x2b74) == *(arg2 + 0x2b70))
            goto label_57c8e3
        
        return 1
    case 2, 3, 4, 5, 6, 7, 8
        sub_4d20b0(arg2 + 0x2b70)
        *(arg2 + 0xa4) = *(arg2 + 0x2b74)
        
        if (*(arg2 + 0x2b74) == *(arg2 + 0x2b70))
            ebx = 1
        
        *(arg2 + 0x2c38) = sub_4d16f0(sub_4d20b0(arg2 + 0x2b98), *(arg2 + 0x2c40), 
            *(arg2 + 0x2b9c), *(arg2 + 0x2c48))
        *(arg2 + 0x2c3c) = sub_4d16f0(sub_4d20b0(arg2 + 0x2bc0), *(arg2 + 0x2c44), 
            *(arg2 + 0x2bc4), *(arg2 + 0x2c4c))
    case 9, 0xa, 0xc, 0xd
        sub_4d20b0(arg2 + 0x2b70)
        *(arg2 + 0xa4) = *(arg2 + 0x2b74)
        
        if (*(arg2 + 0x2b74) == *(arg2 + 0x2b70))
            ebx = 2
        
        sub_4d20b0(arg2 + 0x2be8)
        *(arg2 + 0x2c50) = *(arg2 + 0x2bec)
        sub_4d20b0(arg2 + 0x2c10)
        *(arg2 + 0x2c54) = *(arg2 + 0x2c14)
    case 0xb, 0xe
        sub_4d20b0(arg2 + 0x2b70)
        *(arg2 + 0xa4) = *(arg2 + 0x2b74)
        
        if (*(arg2 + 0x2b74) == *(arg2 + 0x2b70))
            ebx = 2
        
        sub_4d20b0(arg2 + 0x2be8)
        *(arg2 + 0x2c50) = *(arg2 + 0x2bec)
    case 0xf, 0x10
        sub_4d20b0(arg2 + 0x2b70)
        *(arg2 + 0xa4) = *(arg2 + 0x2b74)
        
        if (*(arg2 + 0x2b74) == *(arg2 + 0x2b70))
            ebx = 2
        
        sub_4d20b0(arg2 + 0x2c10)
        *(arg2 + 0x2c54) = *(arg2 + 0x2c14)

if (ebx == 0)
    return 1

if (ebx != 2)
    goto label_57c8e3

goto label_57cb03
