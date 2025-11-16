// 函数: sub_420350
// 地址: 0x420350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
var_8:2.b = arg1.b

if ((data_12a2980 == 0 && data_702fc0 == 0) || data_1311178 != 0)
    return 

BOOL eax

if (data_13701d0 == 0)
    sub_4d6960(eax, &data_13701d4, &data_13701d0, 0x2ee000, "FULLSCREEN_MSGBK_WORK_MEMORY")

if (data_1370110:8 != 0)
    eax = sub_420230()
    var_8:3.b = eax.b
    
    if (eax.b != 0 && data_13701b8 == 0x3e8)
        int32_t ecx = data_13701b0
        
        if (ecx == data_13701b4)
            int32_t ecx_1 = ecx + 1
            
            if (ecx_1 == 0x3e8)
                ecx_1 = 0
            
            data_13701b0 = ecx_1
else
    var_8:3.b = 0

if (var_8:2.b != 0)
    return 

sub_4d6c40(&data_1370110, &data_1370110:4)
data_1370110:8 = 0
data_1370110:0xc = 0
sub_4d6c40(&data_1370120, &data_1370124)

if (var_8:3.b == 0)
    return 

int32_t eax_1 = data_13701b8

if (eax_1 s< 0x3e8)
    data_13701b8 = eax_1 + 1

eax = data_13701b4 + 1

if (eax == 0x3e8)
    eax = 0

data_13701b4 = eax
