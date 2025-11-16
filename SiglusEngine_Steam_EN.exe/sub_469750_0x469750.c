// 函数: sub_469750
// 地址: 0x469750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0)
    return 

int32_t esi_1 = data_7031bc

if (arg2 s>= esi_1)
    return 

void* i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

arg1 = (arg4 + (arg3 << 1)) * 0x650 + 0x72d868
void* i

do
    if (arg3 s>= 0 && arg3 s< esi_1)
        *arg1 = arg5
    
    arg3 += 1
    arg1 = &arg1[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
