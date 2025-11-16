// 函数: sub_488990
// 地址: 0x488990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
int32_t ebx
ebx.b = arg1.b
ebx:1.b = 1

if (data_1311178 != 0)
    ebx.b = 0
    ebx:1.b = 0

int32_t edx = sub_57e1f0()

if (data_1320e5c == 0xffffffff)
    edx.b = ebx:1.b
    edx = sub_488840(ebx.b, edx.b)

sub_4888a0()

if (data_1320e5c == 0xffffffff)
    edx.b = ebx:1.b
    edx = sub_488360(ebx.b)

sub_488440()

if (ebx.b != 0)
    if (sub_486160() != 0)
        return 0x3e8
    
    if (sub_485db0() != 0)
        return 0x3e9
    
    if (sub_486340() != 0)
        return 0x3ea
    
    int32_t eax_7
    eax_7, edx = sub_4860d0()
    
    if (eax_7 != 0)
        return 0x3f7
    
    goto label_488a27

if (ebx:1.b != 0)
label_488a27:
    
    if (sub_485fb0() != 0)
        return 0x3f5
    
    if (data_703756 != 0 && (data_1320e7c == 0xe || data_1320e70 == 0xe))
        int32_t eax_11
        eax_11.b = data_13132f8 == 0
        data_13132f8 = eax_11
        return 0x3f6
    
    if (ebx.b != 0)
        int32_t eax_13 = sub_486120()
        
        if (eax_13 != 0xffffffff)
            if (data_1311178 == 0)
                sub_48fe10(eax_13, edx, &data_719b6c, eax_13 + 5)
            
            return eax_13 + 0x3ed

if (data_1320e68 == 0xffffffff && data_1320e74 == 0xffffffff && ebx.b != 0 && sub_45fc70() != 0)
    return 0x7d0

return 0xffffffff
