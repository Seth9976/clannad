// 函数: sub_452d90
// 地址: 0x452d90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1af4254 == 0
data_1af0a0c = 0

if (not(cond:0))
    sub_4d6c40(&data_1b8be88, &data_1b8be84)
    sub_4d6c40(&data_1bfdd44, &data_1b8c87c)
    data_1b8be88 = 0
    data_1b8be84 = 0
    data_1bfdd44 = 0
    data_1b8c87c = 0

sub_48e4c0()
sub_498680()
sub_4d6c40(&data_20740cc, &data_20740d0)
data_20740cc = 0
data_20740d0 = 0
sub_4d6c40(&data_1bfdd64, &data_1bfdd6c)
sub_4d6c40(&data_1bfe290, &data_1bfdd68)
sub_4a80a0()
sub_4293e0()
sub_429330()
sub_4940d0()
sub_4947a0()
sub_5805d0()
sub_41fe10()
sub_4462e0()
sub_410e80()
sub_410ef0()
sub_410f60()
sub_4a8db0()
sub_4113d0(arg1)
sub_411600()
sub_459880()
sub_459920()
sub_4d6c40(&data_1312550, &data_1312554)
sub_463a10(0, 1)
sub_463a10(1, 1)
sub_467e40()
sub_481fe0()
sub_430f50()
sub_4253f0()
sub_4287e0()
sub_430640()
sub_430980(1)
sub_427a10()
sub_482ad0()
sub_42bda0()
sub_42c7b0(1)
sub_499870()
sub_49a4a0()

for (int32_t i = 0; i s< 8; i += 1)
    if (i u<= 7)
        sub_49a750(i, 0)
        sub_49a750(i, 1)

sub_499600(&data_13130c0)
sub_499600(&data_1b8ad80)
sub_499600(&data_1bfdfd0)
sub_415010(&data_131d2d0)
int32_t eax = sub_415010(0x1319740)

if (data_f89944 != 0)
    eax = sub_4d6c40(&data_f89944, &data_f89948)

sub_4d1ba0(eax, 0x24, &data_8fcab4, 0)
data_f89944 = 0
data_f89948 = 0
data_f89958 = 0xffffffff
data_f89960 = 0xffffffff
sub_41a510()

for (int32_t i_1 = 0; i_1 s< 0x10; i_1 += 1)
    sub_41e520(i_1, 0)

sub_41df00()

for (void* i_2 = &data_1af4770; i_2 s< &data_1af4e70; i_2 += 0x1c)
    sub_4d6c40(i_2, i_2 + 4)

sub_576110()
sub_461c00(&data_1b14e60)
sub_461c00(0x1b14a30)
sub_4a6290()
sub_4b6450()
sub_4d6c40(&data_1b144b0, &data_1b144b4)
sub_420bb0()
sub_4d6c40(&data_13740b0, &data_13740b4)
sub_4d6c40(&data_13740c8, &data_13740cc)
sub_4d6c40(&data_20c2210, &data_20c2214)
data_20c2210 = 0
data_20c2214 = 0
data_20c2218 = 0
data_20c221c = 0
sub_41d570()

for (void* i_3 = &data_1319240; i_3 s< 0x1319740; i_3 += 0x28)
    sub_4d6c40(i_3, i_3 + 4)

sub_4a8910()
__builtin_memset(0x107f964, 0, 0x400)
sub_4a8990()
__builtin_memset(0x107fd64, 0, 0x400)
sub_4a8a10()
sub_4a8a80()
sub_4a8bb0()
sub_4a8c20()
sub_491930()
sub_493760()
sub_490910(&data_925224, &data_10861e4)
char* result = sub_490910(0x10873c8, 0x1087410)
bool cond:1 = data_702fc0 == 0
data_1356ed8 = 0

if (not(cond:1))
    result = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            result = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            result = nullptr
        
        if (data_1af174c == 0 && result != 0)
            return sub_55f390(
                sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, 0x618fb0, nullptr), 
                    data_72d6ac, data_719b6c, 0x618fb0, nullptr), 
                data_72d6ac, data_719b6c, 0x618fb0, nullptr)

return result
