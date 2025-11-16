// 函数: sub_434c01
// 地址: 0x434c01
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char temp1 = arg1:1.b
arg1:1.b u>>= 1
*arg6

if ((temp1 & 1) != 0)
    *(arg3 - 0x4a21c323)
    undefined

int32_t eflags
void* eax
eax.b = __in_al_dx(arg2, eflags)
int32_t ebx
int32_t var_4 = ebx
__in_oeax_dx(arg2, eflags)
*arg6 = *0xead00d89
int16_t ds
uint32_t var_8 = zx.d(ds)
arg3:1.b = 0xca

if (arg3 == 1)
    if (adc.d(arg4, 0x89d84dc7, arg1 u< arg5) s>= 0)
        jump(0x434ccd)
    
    jump(0x434c6d)

int32_t var_c = ebx
uint8_t* es
*(es + arg3 - 1)
*(es + arg3 - 1) u>>= (arg3 - 1).b
bool c_1 = unimplemented  {shr byte [es:ecx], cl}

if (arg3 == 2)
    int32_t* var_10_1 = &var_c
    int32_t var_14 = ebx
    es[0xd54f0e2] s>>= (arg3 - 2).b
    undefined

uint32_t var_10 = zx.d(ds)

if (c_1)
    jump(0x434c6d)

jump(0x434c9e)
