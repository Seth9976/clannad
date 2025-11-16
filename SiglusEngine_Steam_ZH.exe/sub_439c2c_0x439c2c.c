// 函数: sub_439c2c
// 地址: 0x439c2c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = float.t(0)
int32_t edi
int32_t var_c = edi
int32_t edi_1 = 0
void* eax = arg1 + 0x20
uint32_t edx = 5

if (arg2 != 0 && *(arg2 + 4) == 3)
    eax = arg2 + 0x10
    
    switch (*eax - 1)
        case 1
            int32_t esi_10 = *(eax + 8)
            edx = ((esi_10 & 0xbfffffff) | 0x20000000) u>> 0x1d
            edi_1 = esi_10
        case 2
            edi_1 = *(eax + 8)
            edx = 4
        case 3
            edi_1 = *(eax + 8)
            edx = 8
        case 4
            edx = 9
            x87_r7 = fconvert.t(*(eax + 8))
        case 5
            edx = 0xa
            x87_r7 = fconvert.t(*(eax + 8))
        case 6
            edx = 0xb
            x87_r7 = fconvert.t(*(eax + 8))
        case 7
            edx = 0xc
            x87_r7 = fconvert.t(*(eax + 8))

void* var_14 = arg1
void* var_18 = arg1
var_18.q = fconvert.d(x87_r7)
sub_439b14(edx, edi_1, var_18, eax)
