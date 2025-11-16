// 函数: sub_4312a0
// 地址: 0x4312a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t var_18 = 0
arg1[0x13] = arg2[0xb]
*arg1 = *arg2
arg1[3] = arg2[3]
arg1[0xc].b = arg2[4].b
*(arg1 + 0x31) = *(arg2 + 0x11)
*(arg1 + 0x32) = *(arg2 + 0x12)
*(arg1 + 0x33) = *(arg2 + 0x13)
arg1[0xd].b = arg2[5].b
*(arg1 + 0x35) = *(arg2 + 0x15)
arg1[0xe] = arg2[6]
arg1[0xf] = arg2[7]
arg1[0x10] = arg2[8]
arg1[0x11] = arg2[9]
int32_t ecx_1 = arg2[1] + arg2[0x2b] + arg2[0x2a] + arg2[0x29] + arg2[0x28] + arg2[0x27]
    + arg2[0x26] + arg2[0x25] + arg2[0x24]
int32_t edx_1 = arg2[2] + arg2[0x33] + arg2[0x32] + arg2[0x31] + arg2[0x30] + arg2[0x2f]
    + arg2[0x2e] + arg2[0x2d] + arg2[0x2c]
arg1[1] = arg2[0x3b] + arg2[0x36] - arg2[0x1d] + ecx_1
int32_t eax_37 = arg2[0x3c] + arg2[0x37] + arg2[0x16] - arg2[0x1e] + edx_1
arg1[2] = eax_37
sub_4708d0(eax_37, &var_8:3, arg2, ecx_1, 0)
arg1[0x12].b = var_8:3.b
arg1[0x14] = arg2[0x1f] + arg2[0x1d]
arg1[0x15] = arg2[0x20] + arg2[0x1e]
arg1[0x16] = arg2[0x21]
arg1[0x17] = arg2[0x22]
int32_t ebx = data_7030dc
arg1[0x18] = arg2[0x23]
int32_t eax_46 = arg2[0xc]
int32_t result

if (eax_46 != 0xffffffff || arg2[0xd] != 0xffffffff || arg2[0xe] != 0xffffffff
        || arg2[0xf] != 0xffffffff)
    arg1[0x1e] = eax_46
    arg1[0x1f] = arg2[0xd]
    arg1[0x20] = arg2[0xe]
    result = arg2[0xf]
else
    int32_t eax_48 = data_70300c - 1
    arg1[0x1e] = 0
    arg1[0x20] = eax_48
    result = ebx - 1
    arg1[0x1f] = 0

bool cond:0 = arg1[0x13] == 0
arg1[0x21] = result

if (not(cond:0))
    int32_t ecx_3 = arg1[0x20]
    int32_t edi_1 = arg1[0x1e]
    int32_t edx_3
    
    if (edi_1 s<= ecx_3)
        edx_3 = arg1[0x1f]
    
    if (edi_1 s> ecx_3 || edx_3 s> result || edi_1 s> data_70300c || edx_3 s> ebx || ecx_3 s< 0
            || result s< 0)
        arg1[0x13] = 0

return result
