// 函数: sub_5109e6
// 地址: 0x5109e6
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
int32_t eflags_6
int32_t eip
eip, eflags_6 = __into(eflags)
bool c
arg1.b = sbb.b(arg1.b, 0xc1, c)
bool c_1 = unimplemented  {sbb al, 0xc1}
void* const __return_addr_1 = __return_addr
*(__return_addr_1 - 0x60170000) = adc.d(*(__return_addr_1 - 0x60170000), arg5, c_1)
int32_t eflags_1
char temp0
char temp1_1
temp0, temp1_1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags_6)
arg1.b = temp0
arg1:1.b = temp1_1
*(arg3 + 0x3e56d3dd)
*(__return_addr_1 - 0x60170000) = sbb.d(*(__return_addr_1 - 0x60170000), arg5 + 1, false)
arg1.b = *0x4d5f3fd8
*(arg3 + 0x3e4ed3dd)
bool p = unimplemented  {or eax, 0xe90000be}
bool a = undefined
int32_t eax
eax:1.b = ((arg1 | 0xe90000be) s< 0 ? 1 : 0) << 7 | ((arg1 | 0xe90000be) == 0 ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
eax:1.b = 0xd8
int32_t eflags_2
char temp0_1
char temp1_2
temp0_1, temp1_2, eflags_2 = __aas(eax.b, 0xd8, eflags_1)
eax.b = temp0_1
eax:1.b = temp1_2
int32_t ebx = arg7
int32_t arg_8
int32_t* esp = &arg_8
int32_t ebp_1 = arg4 - 2
*(arg3 + 0x3e4ad3dd)
int32_t edx_3 = arg2 + 4
int32_t temp3 = *(__return_addr_1 - 0x60170000)
eax.b = 0xd8
int32_t eflags_3
char temp0_2
char temp1_3
temp0_2, temp1_3, eflags_3 = __aas(0xd8, eax:1.b, eflags_2)
eax.b = temp0_2
eax:1.b = temp1_3

if (temp3 != arg5 + 1 && temp3 - (arg5 + 1) s< 0 == add_overflow(temp3, neg.d(arg5 + 1)))
    arg3:1.b = 0xca
    eax.b = sbb.b(eax.b, 0x21, temp3 u< arg5 + 1)
    arg7 = eax
    __return_addr = arg3
    int32_t var_4_1 = edx_3
    int32_t var_8 = ebx
    int32_t* var_c_1 = &var_8
    int32_t var_10_1 = ebp_1
    void* const __return_addr_2 = __return_addr_1
    int32_t var_18 = arg5 + 1
    esp = &var_18
    *(edx_3 + (ebx << 3) - 0x2787bccf)
    *(edx_3 + (ebx << 3) - 0x2787bccf) s>>= 1
    bool c_4 = unimplemented  {sar byte [edx+ebx*8-0x2787bccf], 0x1}
    ebp_1 = ebx
    arg3.b = sbb.b(arg3.b, *(__return_addr_1 + 0x3795ca80), c_4)
else
    *(arg3 + 0x3e7ed3dd)
    int32_t temp5_1 = *(__return_addr_1 - 0x60170000) & (arg5 + 1)
    *(__return_addr_1 - 0x60170000) = temp5_1
    eax.b = ebx.b
    int32_t eflags_4
    char temp0_3
    char temp1_4
    temp0_3, temp1_4, eflags_4 = __aas(eax.b, eax:1.b, eflags_3)
    eax.b = temp0_3
    eax:1.b = temp1_4
    
    if (temp5_1 u<= 0)
        *(arg3 + 0x3e76d3dd)
        *(__return_addr_1 - 0x60170000)
        *(__return_addr_1 - 0x60170000) -= arg5 + 1
        unimplemented  {sbb al, 0x3f}
        *(__return_addr_1 + 0x3e) u>>= arg3.b
        arg11 = arg9
        *arg_8
        undefined
    
    edx_3.b = (edx_3 + 1).b | 0x95
    int32_t eflags_5
    char temp0_4
    char temp1_5
    temp0_4, temp1_5, eflags_5 = __aaa(eax.b, eax:1.b, eflags_4)
    eax.b = temp0_4
    eax:1.b = temp1_5

*(eax - 4) = ebp_1
char temp6 = esp:1.b
int32_t* eax_1
eax_1:1.b = esp:1.b u>> 1
*arg3
*(eax - 8) = ebx

if (temp6 u>> 1 s< 0)
    *eax_1
    undefined

ebx:1.b = sbb.b(ebx:1.b, *(__return_addr_1 + 0x7995ca80), (temp6 & 1) != 0)
char temp0_6 = *(eax_1 + 0x51ecd055)
*(eax_1 + 0x51ecd055) = edx_3:1.b
edx_3:1.b = temp0_6
*(arg5 + 1)
undefined
