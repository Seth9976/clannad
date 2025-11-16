// 函数: sub_5109c8
// 地址: 0x5109c8
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t* ecx
ecx:1.b = 0xca
bool c
arg1.b = sbb.b(arg1.b, 0x20, c)
arg1.b = 0x29
float* var_4 = arg1
int32_t* var_8 = ecx
int32_t var_c = arg2
void* entry_ebx
void* var_10 = entry_ebx
int32_t* var_14 = &var_10
void* var_18 = arg3
void* var_1c = arg4
int32_t var_20 = arg5
char temp1 = *(arg3 - 0x33)
*(arg3 - 0x33) <<= 1
int32_t* esp = sbb.d(&var_20, arg4, (temp1 & 0x80) != 0)
void* ebp = arg3 - 1
*arg1
*(&ecx[entry_ebx * 2] - 0x416b090e)
*arg1 += 0x29
int32_t edx = arg2 + 1
int32_t temp2 = *(arg4 - 0x60170000)
arg1.b = 0xd8
int32_t eflags
int32_t eflags_1
char temp0
char temp1_1
temp0, temp1_1, eflags_1 = __aas(0xd8, arg1:1.b, eflags)
arg1.b = temp0
arg1:1.b = temp1_1

if (temp2 != arg5 && temp2 - arg5 s< 0 == add_overflow(temp2, neg.d(arg5)))
    ecx:1.b = 0xca
    arg1.b = sbb.b(arg1.b, 0x21, temp2 u< arg5)
    *(esp - 4) = arg1
    *(esp - 8) = ecx
    *(esp - 0xc) = edx
    *(esp - 0x10) = entry_ebx
    *(esp - 0x14) = esp - 0x10
    *(esp - 0x18) = ebp
    *(esp - 0x1c) = arg4
    *(esp - 0x20) = arg5
    esp -= 0x20
    *(edx + (entry_ebx << 3) - 0x2787bccf)
    *(edx + (entry_ebx << 3) - 0x2787bccf) s>>= 1
    bool c_4 = unimplemented  {sar byte [edx+ebx*8-0x2787bccf], 0x1}
    ebp = entry_ebx
    ecx.b = sbb.b(ecx.b, *(arg4 + 0x3795ca80), c_4)
else
    *(ecx + 0x3e7ed3dd)
    int32_t temp4_1 = *(arg4 - 0x60170000) & arg5
    *(arg4 - 0x60170000) = temp4_1
    arg1.b = entry_ebx.b
    int32_t eflags_2
    char temp0_1
    char temp1_2
    temp0_1, temp1_2, eflags_2 = __aas(arg1.b, arg1:1.b, eflags_1)
    arg1.b = temp0_1
    arg1:1.b = temp1_2
    
    if (temp4_1 u<= 0)
        *(ecx + 0x3e76d3dd)
        *(arg4 - 0x60170000)
        *(arg4 - 0x60170000) -= arg5
        unimplemented  {sbb al, 0x3f}
        *(arg4 + 0x3e) u>>= ecx.b
        int32_t edi = *esp
        esp[2]
        esp[5]
        esp[6]
        *(esp + 0x1b) = esp[4]
        *edi
        undefined
    
    edx.b = (edx + 1).b | 0x95
    int32_t eflags_3
    char temp0_2
    char temp1_3
    temp0_2, temp1_3, eflags_3 = __aaa(arg1.b, arg1:1.b, eflags_2)
    arg1.b = temp0_2
    arg1:1.b = temp1_3

*(arg1 - 4) = ebp
char temp5 = esp:1.b
int32_t* eax
eax:1.b = esp:1.b u>> 1
*ecx
*(arg1 - 8) = entry_ebx

if (temp5 u>> 1 s< 0)
    *eax
    undefined

entry_ebx:1.b = sbb.b(entry_ebx:1.b, *(arg4 + 0x7995ca80), (temp5 & 1) != 0)
char temp0_4 = *(eax + 0x51ecd055)
*(eax + 0x51ecd055) = edx:1.b
edx:1.b = temp0_4
*arg5
undefined
