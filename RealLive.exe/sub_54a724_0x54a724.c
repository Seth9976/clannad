// 函数: sub_54a724
// 地址: 0x54a724
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

bool p = unimplemented  {dec esp}
int32_t var_4

if (not(p))
    void* ecx = arg3 & 0x54215fca
    *(arg4 + (ecx << 1) + 0x6cae53b8)
    *(arg4 + (ecx << 1) + 0x6cae53b8) += arg2:1.b
    var_4 = arg4
    undefined

void* var_5 = &var_4:3
int16_t ds
uint32_t var_9 = zx.d(ds)
uint32_t* var_d = &var_9
char temp2 = *arg3
*arg3 += arg2:1.b
int32_t entry_ebx

if (add_overflow(temp2, arg2:1.b))
    int32_t var_11_1 = entry_ebx
    breakpoint

int32_t var_11 = entry_ebx
trap(0xd)
