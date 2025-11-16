// 函数: sub_1a9ff04
// 地址: 0x1a9ff04
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx = 0

if (arg1 == 0)
    return 0

int32_t* eax_1 = &arg1[1]

if (*arg1 != 0)
    int32_t i
    
    do
        i = *eax_1
        ecx += 1
        eax_1 = &eax_1[1]
    while (i != 0)

void* result_1 = sub_1a91fb2((ecx << 2) + 4)
void* result = result_1

if (result_1 == 0)
    sub_1a931cd(9)

char* i_1 = *arg1
int32_t* ebx = arg1

while (i_1 != 0)
    ebx = &ebx[1]
    *result_1 = sub_1a940b0(i_1)
    i_1 = *ebx
    result_1 += 4

*result_1 = 0
return result
