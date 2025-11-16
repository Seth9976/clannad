// 函数: sub_42a500
// 地址: 0x42a500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
data_13926ac = 0
data_13926a8 = 0xffffffff
int32_t esi = 0x907f26
data_91e8fc = 0
int32_t i_1 = 0x80
int32_t i

do
    int32_t eax = sub_4d1ba0(sub_4d1ba0(eax, 0x24, esi - 0x26, 0), 0x24, esi, 0)
    esi += 0x2d4
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t ecx_2 = 0xffffffff
data_13926a4 = i_1
data_13926a0 = i_1

if (arg1 != 0)
    ecx_2 = 2

if (data_702fc0 != i_1)
    int32_t eax_2 = 1
    
    if (data_13184f8 == i_1)
        if (data_13184e8:8 == i_1 && (data_704870 != i_1 || data_70486c != i_1))
            eax_2 = 0
        
        if (ecx_2 != 0xffffffff && (&data_13184d8)[ecx_2] == 0)
            eax_2 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_2 = 0
        
        if (data_1af174c == 0 && eax_2 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x614264, nullptr), 
                    data_72d6ac, data_719b6c, 0x614264, nullptr), 
                data_72d6ac, data_719b6c, 0x614264, nullptr)

sub_459880()
sub_411440()
return sub_567d60(data_91e8fc)
