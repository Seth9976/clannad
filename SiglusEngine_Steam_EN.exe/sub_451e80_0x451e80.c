// 函数: sub_451e80
// 地址: 0x451e80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t eax = data_1392710
data_1af17c8 = 1
data_131256c = 0
data_1311170 = 0
data_13701d8 = 0
data_137010c = 1
__builtin_memset(&data_1af17ac, 0, 0x1c)
data_13701dc = 0
data_1af17a8 = eax
data_1af17a4 = 4
__builtin_memset(&data_1af177c, 0, 0x28)
data_1af1778 = 0xffffffff
data_1af1774 = 0xffffffff
data_1372c14 = 0
data_1392cc4 = 0
data_1392704 = 0
__builtin_memset(&data_1af1758, 0, 0x1c)

if (arg1 == 0)
    data_1af1754 = 0xffffffff
    data_1af1750 = 0xffffffff

int32_t eax_1 = data_139319c

if (data_1af19d8 == 0)
    eax_1 = 0

data_1311174 = 0
data_187a5c0 = 0
__builtin_memset(&data_1af172c, 0, 0x24)
data_139319c = eax_1
data_1af19d8 = 0
sub_4a80a0()
data_1af1728 = 0
int32_t i = 0
data_703008 = 1
data_13926ac = 0
data_13926a8 = 0xffffffff
data_13926d4 = 0
data_13926d0 = 0xffffffff
data_1af1724 = 0
data_13130b8 = 0
data_13926a4 = 0
data_13926a0 = 0
data_7030cc = 0
data_7030d0 = 0
data_1af1720 = 0
data_1af171c = 0
data_1af1718 = 0xff
data_1af1714 = 0
data_187c51f = 0
data_1af1710 = 0
data_187c51e = 0
data_187c51d = 0
data_1af16ec = 0
data_1af16c8 = 0
data_1af16c4 = 0xffffffff
data_1af16c0 = 0xffffffff
data_1af0f3c = 0xffffffff
data_1370100 = 0xffffffff

do
    *(i + &data_1af1360) = 0
    *(i + &data_1af1000) = 0
    i += 0x24
while (i s< 0x360)

data_7035a0 = data_108f36c
data_7035a4 = data_108f39c
data_7035a8 = data_108f3b8
int32_t eax_5 = data_108f3d4
__builtin_memset(&data_1af0f40, 0, 0x40)
data_7035ac = eax_5
int32_t eax_6 = data_108f3f0
__builtin_memset(&data_1af0f80, 0xff, 0x40)
data_7035b0 = eax_6
int32_t eax_7 = data_108f40c
__builtin_memset(&data_1af0fc0, 0xff, 0x40)
data_7035b4 = eax_7
data_7035b8 = data_108f428
int32_t eax_9 = data_108f444
data_703670.o = zx.o(0)
int128_t xmm0 = data_6248a0
data_7035bc = eax_9
int32_t eax_10 = data_108f460
data_703680.o = xmm0
int128_t xmm0_1 = data_624900
data_7035c0 = eax_10
int32_t eax_11 = data_12dc2bc
data_703690 = xmm0_1
data_70379c = eax_11
data_7037a8 = 0xffffffff
data_7037ac = 0xffffffff
data_7037b0 = 0xffffffff
data_7037b4 = 0xffffffff
ClipCursor(nullptr)
bool cond:1 = data_1af179c != 0
int32_t edi = data_12dc2c0
data_7037a0 = edi

if (not(cond:1))
    data_1af4e70 = edi
    
    if (edi != 0)
        int32_t i_1
        
        do
            i_1 = ShowCursor(1)
        while (i_1 s<= 0)
    else
        int32_t i_2
        
        do
            i_2 = ShowCursor(0)
        while (i_2 s>= 0)

data_7037a0 = edi

if (arg1 == 0)
    int32_t ecx = data_12dc63c
    data_7037a4 = ecx
    sub_45ee40(ecx, 1)

int32_t* edx = &data_7036ac
data_7036a8 = data_12a2d98

for (void* i_3 = &data_12a2d9c; i_3 s< &data_12a651c; )
    int32_t eax_13 = *i_3
    edx = &edx[1]
    i_3 += 0x1bc
    edx[-1] = eax_13

int128_t xmm0_2 = data_624940
data_7037c8 = data_12dc5f8
int32_t eax_15 = data_12dc2b8
data_70372c = 1
data_703730.o = xmm0_2
data_703740 = 1
data_703744 = 1
data_7035d4 = eax_15
sub_4994c0()
void* i_4 = nullptr
data_7037d0 = data_12dc5fc
data_7037d4 = data_12dc600
data_7037b8 = data_12dc604
data_7037d8 = data_12dc608
data_7037dc = data_12dc60c
data_703788 = data_12dc614
data_70378c = data_12dc618
data_703790 = data_12dc61c
data_703794 = data_12dc620
data_703798 = data_12dc628

do
    int32_t eax_25
    eax_25.b = *(i_4 + &data_108f58c)
    *(i_4 + &data_703748) = eax_25.b
    *(i_4 + 0x703768) = 0
    i_4 += 1
while (i_4 s< 0x20)

data_7037e0 = data_12a297c
data_7037bc = data_12dc630
data_7037c0 = data_12dc634
data_7037c4 = data_12dc638
int32_t eax_29
eax_29.b = data_12a2948
data_70365c = eax_29.b
int32_t eax_30 = data_108f350
data_7037e4 = 1
data_91e900 = 0xffffffff
data_7035d0 = 0
__builtin_memset(&data_70362c, 0xff, 0x30)
data_703660 = 0xffffffff
data_7035c8 = 1
data_7035cc = eax_30
data_7037e8 = 1
data_7037ec = 0
data_703810 = 0xffffffff
data_703814 = 0
data_703838 = 0xffffffff
data_70383c = 0
data_703840 = 0
int32_t result = sub_4a7c10()
data_70486c = 0
data_704870 = 0
data_704874 = 1
data_704878 = 0
data_7037cc = 1
data_70487c = 0
data_704880 = 0x270f
data_704884 = 0
data_704888 = 0
data_976b40 = 0
data_976b44 = 0
data_976b48 = 0
data_70488c = 1
data_704890 = 1
data_704894 = 1
return result
